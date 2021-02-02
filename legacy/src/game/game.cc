#include "game.h"
#include <algorithm>

Game *GAME_PTR = nullptr;

Game::~Game() {
  players[0] = nullptr;
  players[1] = nullptr;
}

Result<void *> Game::checkDeck(std::map<RSID, i32> &deck) {
  uset<CardRegion> regions;
  isize championCnt = 0;
  isize totalCnt = 0;
  for (std::pair<RSID, i32> p : deck) {
    if (GALLERY.find(p.first) == GALLERY.end())
      return Result<void *>::mkErr(ErrorType::INVALID_DECK, "Non-existent card ID: %04d.", p.first);
    if (!GALLERY[p.first]->collectible)
      return Result<void *>::mkErr(ErrorType::INVALID_DECK, "Non-collectible card %04d.", p.first);
    if (GALLERY[p.first]->supType == CardSupType::CHAMPION) {
      championCnt += 1;
      if (championCnt > CHAMPION_LIMIT)
        return Result<void *>::mkErr(ErrorType::INVALID_DECK, "Exceed champion size.");
    }
    if (p.second <= 0 || p.second > SINGLE_CARD_LIMIT)
      return Result<void *>::mkErr(ErrorType::INVALID_DECK,
                                   "Invalid number of card %04d: %d.",
                                   p.first,
                                   p.second);
    for (RSID k = 0; k < p.second; k++) {
      totalCnt++;
      if (totalCnt > DECK_LIMIT)
        return Result<void *>::mkErr(ErrorType::INVALID_DECK, "Exceed deck limit.");
      regions.insert(GALLERY[p.first]->region);
      if (regions.size() > REGION_LIMIT)
        return Result<void *>::mkErr(ErrorType::INVALID_DECK, "Exceed region limit.");
    }
  }
  return Result<void *>::mkVal(nullptr);
}

Result<Game *> Game::build(const str &deckCode1,
                           const str &deckCode2,
                           RSID firstPlayer,
                           std::function<void(RSID)> afterGame) {
  Game *_game = new Game;
  GAME_PTR = _game;
  _game->afterGame = afterGame;
  _game->firstPlayerId = firstPlayer;
  _game->secondPlayerId = FLIP(firstPlayer);
  _game->starterInRound = firstPlayer;
  // build decks
  resetId();
  RSID pid1 = generateId();
  RSID pid2 = generateId();
  auto p1 = Player::build(pid1, deckCode1);
  if (p1.isErr())
    return p1.castErr<Game *>();
  _game->players[0] = p1.val();
  auto p2 = Player::build(pid2, deckCode2);
  if (p2.isErr())
    return p2.castErr<Game *>();
  _game->players[1] = p2.val();
  _game->players[0]->opNexusId = _game->players[1]->nexusId;
  _game->players[1]->opNexusId = _game->players[0]->nexusId;

  for (auto eid: _game->players[0]->deck)
    _game->ents[eid].onStartGame(0, eid);
  for (auto eid: _game->players[1]->deck)
    _game->ents[eid].onStartGame(1, eid);

  return Result<Game *>::mkVal(_game);
}

vec<RSID> Game::firstDraw(RSID pid) {
  uset<RSID> res;
  for (isize k = 0; k < 4; k++) {
    isize i = rand(1, DECK_LIMIT) - 1;
    while (res.find(players[pid]->deck[i]) != res.end())
      i = rand(1, DECK_LIMIT) - 1;
    res.insert(players[pid]->deck[i]);
  }
  return vec<RSID>(res.begin(), res.end());
}

bool Game::isEnded() const {
  return winner != -1;
}
void Game::printEntity(RSID entityId) {
  auto obj = ents[entityId];
  if (obj.isCard())
    log("[EID %04d] CARD ID: %04d, NAME: %s", obj.getId(), obj.getCard()->id, obj.getCard()->name);
  else if (obj.isNexus())
    log("[EID %04d] Player %d's nexus health: %d", obj.getId(), obj.getPlayerId() + 1, obj.getHealth());
}
void Game::end(RSID Winner) {
  winner = Winner;
  afterGame(winner);
}

void Game::startRound() {
  round += 1;
  RSID pid1 = starterInRound;
  RSID pid2 = FLIP(starterInRound);
  players[starterInRound]->hasToken = true;
  players[FLIP(starterInRound)]->hasToken = false;
  auto p1 = players[pid1], p2 = players[pid2];
  p1->spellMana = std::min(p1->spellMana + p1->unitMana, MAX_SPELL_MANA);
  p2->spellMana = std::min(p2->spellMana + p2->unitMana, MAX_SPELL_MANA);
  p1->unitMana = std::min(round, MAX_MANA);
  p2->unitMana = std::min(round, MAX_MANA);
  p1->hasToken = true;
  p2->hasToken = false;
  p1->isPlunderer = false;
  p2->isPlunderer = false;
  if (round >= MAX_MANA)
    trigger(Event(EnlightenEvent()));

  trigger(Event(StartRoundEvent(round)));
  for (RSID &id: p1->table)
    if (CHECK_K_REGENERATION(ents[id].getKeywords()))
      ents[id].regenerated();
  for (RSID &id: p2->table)
    if (CHECK_K_REGENERATION(ents[id].getKeywords()))
      ents[id].regenerated();

  bool p1CanDraw = drawACard(pid1);
  bool p2CanDraw = drawACard(pid2);
  if (!p1CanDraw && !p2CanDraw)
    end(2);
  else if (p1CanDraw && !p2CanDraw)
    end(pid1);
  else if (!p1CanDraw && p2CanDraw)
    end(pid2);
  state.reset(starterInRound);
}

void Game::endRound() {
  killEphemeralOnTable(firstPlayerId);
  killEphemeralOnTable(secondPlayerId);
  discardFleetingInHand(firstPlayerId);
  discardFleetingInHand(secondPlayerId);
  trigger(Event(EndRoundEvent()));
  starterInRound = FLIP(starterInRound);
}

bool Game::drawACard(RSID pid) {
  auto p = players[pid];
  // if the deck is empty, lose the game
  if (p->deck.empty())
    return false;
  RSID id = p->deck.back();
  p->deck.pop_back();
  auto card = ents[id];
  if (p->hand.size() >= HAND_LIMIT) {
    card.beDiscarded();
  } else {
    p->hand.push_back(id);
    trigger(Event(DrawCardEvent(pid, id)));
    trigger(Event(GetCardEvent(pid, id)));
  }
  return true;
}

void Game::putSkill(Action &action) {
  if (spellStack.size() < SPELL_STACK_LIMIT) {
    spellStack.push_back(action);
  }
  state.putSkill(action.cast.playerId);
}

void Game::resolveSpells() {
  for (i32 i = spellStack.size() - 1; i >= 0; i--) {
    RSID spellId = spellStack[i].cast.spellId;
    auto spell = ents[spellId];
    if (spell.isCastable(spellStack[i])) {
      spell.onCast(spellStack[i]);
      for (i64 k = 0; k < spellStack[k].cast.argc; k++)
        trigger(Event(TargetEvent(spellStack[i].cast.playerId, spellStack[i].cast.args[k])));
    } else
      spell.quench();
  }
  for (i32 i = spellStack.size() - 1; i >= 0; i--) {
    RSID spellId = spellStack[i].cast.spellId;
    GAME_PTR->players[ents[spellId].getPlayerId()]->graveyard.push_back(spellId);
  }
}

void Game::replaceFirstDraw(RSID pid, vec<RSID> &draw, vec<bool> toRep) {
  uset<RSID> res;
  for (isize i = 0; i < toRep.size(); i++)
    if (!toRep[i])
      res.insert(draw[i]);
  for (isize i = 0; i < toRep.size(); i++) {
    if (toRep[i]) {
      isize n = rand(1, DECK_LIMIT) - 1;
      while (res.find(players[pid]->deck[n]) != res.end())
        n = rand(1, DECK_LIMIT) - 1;
      res.insert(players[pid]->deck[n]);
      draw[i] = players[pid]->deck[n];
    }
  }
}

void Game::putFirstDrawInHandAndShuffleDeck(RSID pid, vec<RSID> &draw) {
  for (auto eid: draw) {
    players[pid]->hand.push_back(eid);
    trigger(Event(GetCardEvent(pid, eid)));
  }
  players[pid]->deck.erase(draw);
  std::shuffle(players[pid]->deck.begin(), players[pid]->deck.end(), getRandomGenerator());
}

bool Game::canPlayUnit(Action &action) {
  if (action.play.type != ActionType::PLAY)
    return false;
  RSID pid = action.play.playerId;
  RSID id = action.play.cardId;
  if (!state.canSummon(pid))
    return false;
  if (!isInHand(pid, id))
    return false;
  if (ents.find(id) == ents.end())
    return false;
  auto card = ents[id];
  if (!card.isUnit())
    return false;
  if (card.getCost() > players[pid]->unitMana)
    return false;
  if (players[pid]->table.size() >= TABLE_LIMIT)
    return false;
  return action.play.passCheck = card.isPlayable(action);
}

void Game::playUnit(Action &action) {
  if (!action.play.passCheck)
    return;
  RSID playerId = action.play.playerId;
  RSID eid = action.play.cardId;
  auto p = players[playerId];
  p->hand.erase(eid);
  p->unitMana -= ents[eid].getCost();
  Action action_ = ents[eid].onPlay(action);
  if (!action_.summon.passCheck)
    return;
  trigger(Event(PlayEvent(playerId, eid)));
  trigger(Event(SummonEvent(action_.summon.playerId, action_.summon.summoneeId)));
  p->table.push_back(eid);
  if (ents[eid].isChampion()) {
    for (RSID eid_ : p->hand) {
      if (ents[eid_].getCard()->id == ents[eid].getCard()->id) {
        ents[eid_].transform(CHAMPION_TO_SPELL[ents[eid].getCard()->id]);
      }
    }
  }
  state.summoned(playerId);
}

bool Game::canPlaySpell(Action &action) {
  if (action.play.type != ActionType::PLAY)
    return false;
  RSID pid = action.play.playerId;
  RSID id = action.play.cardId;
  if (!isInHand(pid, id))
    return false;
  if (ents.find(id) == ents.end())
    return false;
  auto card = ents[id];
  if (!card.isSpell())
    return false;
  if (!state.canPutSlowSpell(pid) && CHECK_K_SLOW(card.getKeywords()))
    return false;
  if (!state.canPutFastSpell(pid) && CHECK_K_FAST(card.getKeywords()))
    return false;
  if (!state.canCastBurstSpell(pid) && CHECK_K_BURST(card.getKeywords()))
    return false;
  if (card.getCost() > players[pid]->unitMana + players[pid]->spellMana)
    return false;
  if (!CHECK_K_BURST(card.getKeywords()) && spellStack.size() >= SPELL_STACK_LIMIT)
    return false;
  return action.play.passCheck = card.isPlayable(action);
}

void Game::playSlowOrFastSpell(Action &action) {
  if (!action.play.passCheck)
    return;
  RSID playerId = action.play.playerId;
  RSID eid = action.play.cardId;
  auto p = players[playerId];
  p->hand.erase(eid);
  i8 oldUnitMana = p->unitMana;
  p->unitMana = std::max(0, oldUnitMana - ents[eid].getCost());
  p->spellMana = p->spellMana + std::min(0, oldUnitMana - ents[eid].getCost());
  Action action_ = ents[eid].onPlay(action);
  if (!action_.cast.passCheck)
    return;
  spellStack.push_back(action_);
  trigger(Event(PlayEvent(playerId, eid)));
  trigger(Event(PutSpell(action_.cast.playerId, action_.cast.spellId)));
  state.putSlowSpell(playerId);
}

void Game::playBurstSpell(Action &action) {
  if (!action.play.passCheck)
    return;
  RSID playerId = action.play.playerId;
  RSID eid = action.play.cardId;
  auto p = players[playerId];
  p->hand.erase(eid);
  i8 oldUnitMana = p->unitMana;
  p->unitMana = std::max(0, oldUnitMana - ents[eid].getCost());
  p->spellMana = p->spellMana + std::min(0, oldUnitMana - ents[eid].getCost());
  action.any.type = ActionType::CAST;
  ents[eid].onCast(action);
  trigger(Event(PlayEvent(playerId, eid)));
  trigger(Event(CastEvent(playerId, eid)));
  for (i64 i = 0; i < action.cast.argc; i++)
    trigger(Event(TargetEvent(action.cast.playerId, action.cast.args[i])));
  p->graveyard.push_back(eid);
  state.castedBurstSpell();
}

bool Game::canPutUnitToAttack(Action &action) {
  RSID pid = action.declAttack.playerId;
  RSID attackerId = action.declAttack.attackerId;
  if (ents.find(attackerId) == ents.end())
    return false;
  Entity &unit = ents[attackerId];
  if (!state.canDeclAttack(pid))
    return false;
  if (!players[pid]->table.has(attackerId))
    return false;
  if (players[pid]->frontier.full())
    return false;
  if (CHECK_K_IMMOBILE(unit.getKeywords()))
    return false;
  if (unit.isStunned() || !unit.isUnit() || unit.isDead() || unit.isCaptured())
    return false;
  return action.declAttack.passCheck = true;
}

// Can Player [pid] uses unit [eid1] to challenge unit [eid2]
bool Game::canChallenge(RSID pid, RSID eid1, RSID eid2) {
  if (!isInPlay(eid1) || !isInPlay(eid2))
    return false;
  if (!players[pid]->table.has(eid1) || !players[FLIP(pid)]->table.has(eid2))
    return false;
  Entity &unit1 = ents[eid1];
  Entity &unit2 = ents[eid2];
  if (!CHECK_K_CHALLENGER(unit1.getKeywords()) && !CHECK_K_VULNERABLE(unit2.getKeywords()))
    return false;
  return true;
}

void Game::putUnitToAttack(Action &action) {
  if (!action.declAttack.passCheck)
    return;
  RSID pid = action.declAttack.playerId;
  RSID opid = FLIP(pid);
  RSID aid = action.declAttack.attackerId;
  RSID cid = action.declAttack.challengedId;
  i8 pos = players[pid]->frontier.firstVacancy();
  Entity &unit = ents[aid];
  if (CHECK_K_CHALLENGER(unit.getKeywords()) && canChallenge(pid, cid, 0)) {
    players[opid]->frontier[pos] = cid;
    players[opid]->table.erase(cid);
  }
  players[pid]->frontier[pos] = aid;
  players[pid]->table.erase(aid);
}

bool Game::canPutUnitToBlock(Action &action) {
  RSID pid = action.declBlock.playerId;
  RSID blockerId = action.declBlock.blockerId;
  i8 pos = action.declBlock.pos;
  if (ents.find(blockerId) == ents.end())
    return false;
  Entity &unit = ents[blockerId];
  if (CHECK_K_IMMOBILE(unit.getKeywords()) || CHECK_K_CANT_BLOCK(unit.getKeywords()))
    return false;
  if (!state.canDeclBlock(pid))
    return false;
  if (!players[pid]->table.has(blockerId))
    return false;
  if (players[pid]->frontier.full())
    return false;
  if (unit.isStunned() || !unit.isUnit() || unit.isDead() || unit.isCaptured())
    return false;
  if (!players[FLIP(pid)]->frontier.isUnit(pos))
    return false;
  else {
    RSID attackerId = players[FLIP(pid)]->frontier[pos];
    if (CHECK_K_ELUSIVE(ents[attackerId].getKeywords()) && !CHECK_K_ELUSIVE(unit.getKeywords()))
      return false;
    if (CHECK_K_FEARSOME(ents[attackerId].getKeywords()) && ents[blockerId].getAttack() < 3)
      return false;
  }
  return action.declBlock.passCheck = true;
}

void Game::putUnitToBlock(Action &action) {
  if (!action.declBlock.passCheck)
    return;
  RSID pid = action.declBlock.playerId;
  RSID opid = FLIP(pid);
  RSID bid = action.declAttack.attackerId;
  i8 pos = action.declBlock.pos;
  Entity &unit = ents[bid];
  players[pid]->frontier[pos] = bid;
  players[pid]->table.erase(bid);
}

void Game::battle() {
  RSID pid = state.whoseTurn;
  auto attacker = players[pid];
  auto blocker = players[FLIP(pid)];
  auto af = attacker->frontier;
  auto bf = attacker->frontier;
  for (i8 pos: af.getUnitIndices()) {
    Entity aunit = ents[af[pos]];
    Entity bunit;
    if (bf.isUnit(pos)) {
      bunit = ents[bf[pos]];
    } else {
      bunit = ents[blocker->nexusId];
    }
    battle(aunit, bunit);
  }
  for (RSID id: af.getUnits()) {
    Entity unit = ents[id];
    if (unit.isDead())
      attacker->graveyard.push_back(id);
    else
      attacker->table.push_back(id);
  }
  for (RSID id: bf.getUnits()) {
    Entity unit = ents[id];
    if (unit.isDead())
      blocker->graveyard.push_back(id);
    else
      blocker->table.push_back(id);
  }
  af.clear();
  bf.clear();
}

void Game::hitButton(RSID pid) {
  if (state.didNothingRespondable(pid)) {
    if (!state.needsResponse(pid)) {
      if (state.passedTwice()) {
        endRound();
        startRound();
      } else
        state.pass();
    } else {
      bool isScout = true;
      if (players[pid]->frontier.empty())
        isScout = false;
      for (RSID &unitId : players[pid]->frontier.getUnits()) {
        if (CHECK_K_SCOUT(ents[unitId].getKeywords()))
          isScout = false;
      }
      if (state.needsRespondingSpell(pid)) {
        state.startCasting();
        resolveSpells();
        state.endCasting();
      }
      if (state.needsRespondingAttack(pid)) {
        state.startBattling();
        battle();
        state.endBattling();
        if (isScout)
          state.endScout(pid);
      }
      state.finishTurn();
    }
  } else {
    if (state.declaredAttack(pid)) {
      auto f = players[pid]->frontier;
      for (i8 pos: f.getUnitIndices()) {
        RSID eid = f[pos];
        Action action(DeclAttackAction(pid, eid));
        ents[eid].onDeclAttack(action);
        if (f.isUnit(pos + 1)) {
          Action action(SupportAction(pid, eid, f[pos + 1]));
          ents[eid].onSupport(action);
        }
        trigger(Event(DeclAttackEvent(pid, eid, pos)));
      }
    }
    if (state.declaredBlock(pid)) {
      auto f = players[pid]->frontier;
      for (i8 pos: f.getUnitIndices()) {
        RSID eid = f[pos];
        trigger(Event(DeclBlockEvent(pid, eid, pos)));
      }
    }
    state.finishTurn();
  }
}

bool Game::isInHand(RSID playerId, RSID entityId) {
  rsvec &hand = GAME_PTR->players[playerId]->hand;
  return hand.find(entityId) != hand.end();
}
bool Game::isInPlay(RSID entityId) {
  if (ents.find(entityId) == ents.end())
    return false;
  Entity obj = GAME_PTR->ents[entityId];
  if (obj.isUnit() &&
      !players[0]->table.has(entityId) && !players[1]->table.has(entityId) &&
      !players[0]->frontier.has(entityId) && !players[1]->frontier.has(entityId))
    return false;
  if (obj.isSpell() || obj.isSkill()) {
    for (Action &a: spellStack)
      if (a.cast.spellId == entityId)
        break;
    return false;
  }
  return !(obj.isDead() || obj.isDiscarded() || obj.isCaptured());
}
bool Game::isStrikableEntity(RSID entityId) {
  if (GAME_PTR->ents.find(entityId) == GAME_PTR->ents.end())
    return false;
  Entity obj = GAME_PTR->ents[entityId];
  if (obj.isDead() || obj.isDiscarded() || obj.isCaptured() || !obj.isSummoned())
    return false;
  return obj.isNexus() || obj.getCard()->type == CardType::UNIT;
}
bool Game::isUnitInGameView(RSID entityId) {
  if (GAME_PTR->ents.find(entityId) == GAME_PTR->ents.end())
    return false;
  Entity obj = GAME_PTR->ents[entityId];
  if (obj.isDead() || obj.isDiscarded() || obj.isCaptured() || !obj.isSummoned())
    return false;
  return obj.getCard()->type == CardType::UNIT;
}
bool Game::isAlly(RSID playerId, RSID entityId) {
  if (GAME_PTR->ents.find(entityId) == GAME_PTR->ents.end())
    return false;
  Entity obj = GAME_PTR->ents[entityId];
  if (obj.isDead() || obj.isDiscarded() || obj.isCaptured() || !obj.isSummoned())
    return false;
  return obj.getCard()->type == CardType::UNIT && obj.getPlayerId() == playerId;
}

bool Game::isEnemy(RSID playerId, RSID entityId) {
  if (GAME_PTR->ents.find(entityId) == GAME_PTR->ents.end())
    return false;
  Entity obj = GAME_PTR->ents[entityId];
  if (obj.isDead() || obj.isDiscarded() || obj.isCaptured() || !obj.isSummoned())
    return false;
  return obj.getCard()->type == CardType::UNIT && obj.getPlayerId() == FLIP(playerId);
}

bool Game::isFollowerInGameView(RSID entityId) {
  if (GAME_PTR->ents.find(entityId) == GAME_PTR->ents.end())
    return false;
  Entity obj = GAME_PTR->ents[entityId];
  if (obj.isDead() || obj.isDiscarded() || obj.isCaptured() || !obj.isSummoned())
    return false;
  return obj.getCard()->type == CardType::UNIT && obj.getCard()->supType != CardSupType::CHAMPION;
}

bool Game::hasSummonedCard(RSID playerId, RSID cardId) {
  for (i32 i = 0; i < players[playerId]->table.size(); i++) {
    RSID id = players[playerId]->table[i];
    auto obj = ents[id];
    if (obj.getCard()->id == cardId)
      return true;
  }
  for (i32 i : players[playerId]->frontier.getUnitIndices()) {
    RSID id = players[playerId]->frontier[i];
    auto obj = ents[id];
    if (obj.getCard()->id == cardId)
      return true;
  }
  return false;
}
bool Game::hasCardInHand(RSID playerId, RSID cardId) {
  for (i32 i = 0; i < players[playerId]->hand.size(); i++) {
    RSID id = players[playerId]->hand[i];
    auto card = ents[id];
    if (card.getCard()->id == cardId)
      return true;
  }
  return false;
}
bool Game::hasCardInDeck(RSID playerId, RSID cardId) {
  for (i32 i = 0; i < players[playerId]->deck.size(); i++) {
    RSID id = players[playerId]->deck[i];
    auto obj = ents[id];
    if (obj.getCard()->id == cardId)
      return true;
  }
  return false;
}
void Game::moveFirstAppearingCardToTop(RSID playerId, RSID cardId) {
  for (i32 i = 0; i < players[playerId]->deck.size(); i++) {
    RSID id = players[playerId]->deck[i];
    auto obj = ents[id];
    if (obj.getCard()->id == cardId)
      players[playerId]->deck.swap(0, i);
  }
}
RSID Game::putCardInHand(RSID playerId, RSID cardId) {
  Entity obj = Entity::buildAndRegCard(generateId(), cardId, playerId).val();
  GAME_PTR->ents[obj.getId()] = obj;
  if (GAME_PTR->players[playerId]->hand.size() >= HAND_LIMIT) {
    obj.beDiscarded();
    return obj.getId();
  }
  GAME_PTR->players[playerId]->hand.push_back(obj.getId());
  // trigger GET_CARD event
  return obj.getId();
}
RSID Game::summonAUnitOnTable(RSID playerId, RSID cardId) {
  // build the card
  // summon
  // put on the table
  // trigger GET_CARD event
  return 0;
}
RSID Game::summonAUnitInAttack(RSID playerId, RSID cardId) {
  // build the card
  // summon
  // put into the frontier
  // trigger GET_CARD event
  return 0;
}
void Game::trigger(Event event) {
  for (const RSID &lid: elByType[event.any.type]) {
    if (evlsnr.find(lid) != evlsnr.end()) {
      auto l = evlsnr[lid];
      l(event);
    } else
      elByType[event.any.type].erase(lid);
  }
}
void Game::killEphemeralOnTable(RSID playerId) {
  vec<RSID> dead;
  for (RSID id : players[playerId]->table) {
    if (CHECK_K_EPHEMERAL(ents[id].getKeywords())) {
      ents[id].beKilled();
      dead.push_back(id);
    }
  }
  players[playerId]->table.erase(dead);
  players[playerId]->graveyard.add(dead);
}
void Game::discardFleetingInHand(RSID playerId) {
  vec<RSID> dead;
  for (RSID id : players[playerId]->hand) {
    if (CHECK_K_FLEETING(ents[id].getKeywords())) {
      ents[id].beDiscarded();
      dead.push_back(id);
    }
  }
  players[playerId]->hand.erase(dead);
  players[playerId]->graveyard.add(dead);
}
void Game::printGameView() {
  RSID pid1 = starterInRound;
  RSID pid2 = FLIP(starterInRound);
  auto p1 = players[pid1];
  auto p2 = players[pid2];
  log("================================");
  log("Player %d's hand:", pid1 + 1);
  for (auto eid: p1->hand)
    log("#%d:%s", p1->hand.getIndex(eid), ents[eid].getInfo().c_str());
  log("--------------------------------");
  log("Player %d's table:", pid1 + 1);
  for (auto eid: p1->table)
    log("#%d:%s", p1->table.getIndex(eid), ents[eid].getInfo().c_str());
  log("================================");
  log("Player %d's hand:", pid2 + 1);
  for (auto eid: p2->hand)
    log("#%d:%s", p2->hand.getIndex(eid), ents[eid].getInfo().c_str());
  log("--------------------------------");
  log("Player %d's table:", pid2 + 1);
  for (auto eid: p2->table)
    log("#%d:%s", p2->table.getIndex(eid), ents[eid].getInfo().c_str());
  log("================================");
  log("Player %d's frontier:", pid1 + 1);
  for (auto eid: p1->frontier.getUnits())
    log("#%d:%s", p1->frontier.getIndex(eid), ents[eid].getInfo().c_str());
  log("--------------------------------");
  log("Player %d's frontier:", pid2 + 1);
  for (auto eid: p2->frontier.getUnits())
    log("#%d:%s", p2->frontier.getIndex(eid), ents[eid].getInfo().c_str());
  log("--------------------------------");
  log("Spell stack:");
  for (i64 i = spellStack.size() - 1; i >= 0; i--) {
    log("#%d:P%d %s", i, spellStack[i].cast.playerId + 1, ents[spellStack[i].cast.spellId].getInfo().c_str());
  }
}
// a for attacker, b for blocker
void Game::battle(Entity aunit, Entity bunit) {
  if (aunit.isDead())
    return;
  u64 akey = aunit.getKeywords();
  u64 bkey = bunit.getKeywords();
  auto anexus = ents[players[aunit.getPlayerId()]->nexusId];
  auto bnexus = ents[players[bunit.getPlayerId()]->nexusId];
  if (bunit.isDead()) {
    if (!CHECK_K_OVERWHELM(akey))
      return;
    else
      bunit = bnexus;
  }
  if (aunit.getAttack() > 0) {
    Action action(StrikeAction(aunit.getPlayerId(), aunit.getId()));
    aunit.onStrike(action);
    bunit.beHurt(aunit.getAttack());
    trigger(Event(StrikeEvent(aunit.getPlayerId(), aunit.getId())));
    if (bunit.isNexus())
      trigger(Event(NexusStrikeEvent(aunit.getPlayerId(), bunit.getId(), aunit.getAttack())));
    if (CHECK_K_LIFESTEAL(akey))
      anexus.gainHealth(aunit.getAttack());
    if (CHECK_K_EPHEMERAL(akey))
      aunit.beKilled();
    if (CHECK_K_EPHEMERAL(bkey))
      bunit.beKilled();
    if (CHECK_K_OVERWHELM(akey) && bunit.isUnit() && state.inBattle()) {
      i8 exdmg = std::min(0, aunit.getAttack() - bunit.getHealth());
      bnexus.beHurt(exdmg);
    }
  }
  if (CHECK_K_QUICK_ATTACK(akey) || CHECK_K_DOUBLE_ATTACK(akey)) {
    if (bunit.isDead()) {
      if (!CHECK_K_OVERWHELM(akey))
        return;
      else
        bunit = bnexus;
    }
    if (CHECK_K_DOUBLE_ATTACK(akey) && aunit.getAttack() > 0) {
      Action action(StrikeAction(aunit.getPlayerId(), aunit.getId()));
      aunit.onStrike(action);
      bunit.beHurt(aunit.getAttack());
      trigger(Event(StrikeEvent(aunit.getPlayerId(), aunit.getId())));
      if (bunit.isNexus())
        trigger(Event(NexusStrikeEvent(aunit.getPlayerId(), bunit.getId(), aunit.getAttack())));
      if (CHECK_K_LIFESTEAL(akey))
        anexus.gainHealth(aunit.getAttack());
      if (CHECK_K_EPHEMERAL(akey))
        aunit.beKilled();
      if (CHECK_K_EPHEMERAL(bkey))
        bunit.beKilled();
      if (CHECK_K_OVERWHELM(akey) && bunit.isUnit() && state.inBattle()) {
        i8 exdmg = std::min(0, aunit.getAttack() - bunit.getHealth());
        bnexus.beHurt(exdmg);
      }
    }
  }
  if (bunit.isDead() || bunit.isNexus())
    return;
  Action actionb(StrikeAction(bunit.getPlayerId(), bunit.getId()));
  bunit.onStrike(actionb);
  aunit.beHurt(bunit.getAttack());
  trigger(Event(StrikeEvent(bunit.getPlayerId(), bunit.getId())));
  if (CHECK_K_EPHEMERAL(bkey))
    bunit.beKilled();
}
