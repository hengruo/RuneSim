//
// Created by Hengruo Zhang on 2/9/20.
//

#include "game.h"
#include <algorithm>

Game *GAME_PTR = nullptr;

Game::~Game() {
  players[0] = nullptr;
  players[1] = nullptr;
}

Result<void *> Game::checkDeck(vec<pair<RSID, isize>> &v) {
  uset<CardRegion> regions;
  umap<RSID, i32> eachCnt;
  isize championCnt = 0;
  isize totalCnt = 0;
  for (pair<RSID, isize> p : v) {
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
    eachCnt[p.first] += p.second;
    if (eachCnt[p.first] > SINGLE_CARD_LIMIT)
      return Result<void *>::mkErr(ErrorType::INVALID_DECK,
                                   "Invalid number of card %04d: %d.",
                                   p.first,
                                   eachCnt[p.first]);
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

Result<Game *> Game::build(vec<pair<RSID, isize>> &v1,
                           vec<pair<RSID, isize>> &v2,
                           RSID firstPlayer,
                           function<void(RSID)> afterGame) {
  Game *_game = new Game;
  GAME_PTR = _game;
  _game->afterGame = afterGame;
  _game->firstPlayerId = firstPlayer;
  _game->secondPlayerId = FLIP(firstPlayer);
  _game->starterInRound = firstPlayer;
  // build decks
  auto res1 = Game::checkDeck(v1);
  if (res1.isErr())
    return res1.castErr<Game *>();
  auto res2 = Game::checkDeck(v2);
  if (res2.isErr())
    return res2.castErr<Game *>();
  resetId();
  RSID pid1 = generateId();
  RSID pid2 = generateId();
  auto p1 = Player::build(pid1, v1);
  if (p1.isErr())
    return p1.castErr<Game *>();
  _game->players[0] = p1.val();
  auto p2 = Player::build(pid2, v2);
  if (p2.isErr())
    return p2.castErr<Game *>();
  _game->players[1] = p2.val();
  _game->players[0]->opNexusId = _game->players[1]->nexusId;
  _game->players[1]->opNexusId = _game->players[0]->nexusId;

  for (auto eid: _game->players[0]->deck)
    _game->ents[eid].getCard()->beforeGameStarts(0, eid);
  for (auto eid: _game->players[1]->deck)
    _game->ents[eid].getCard()->beforeGameStarts(1, eid);

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
  p1->spellMana = min(p1->spellMana + p1->unitMana, MAX_SPELL_MANA);
  p2->spellMana = min(p2->spellMana + p2->unitMana, MAX_SPELL_MANA);
  p1->unitMana = min(round, MAX_MANA);
  p2->unitMana = min(round, MAX_MANA);
  p1->hasToken = true;
  p2->hasToken = false;
  if (round >= MAX_MANA)
    trigger(Event(EnlightenEvent()));

  trigger(Event(StartRoundEvent(round)));
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

void Game::releaseSpells() {
  for (int i = spellStack.size() - 1; i >= 0; i--) {
    RSID spellId = spellStack[i].cast.spellId;
    auto spell = ents[spellId];
    if (spell.isCastable(spellStack[i])) {
      spell.perform(spellStack[i]);
    } else
      spell.quench();
  }
  for (int i = spellStack.size() - 1; i >= 0; i--) {
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
  return card.getCard()->playable(action);
}

void Game::playUnit(Action &action) {
  RSID playerId = action.play.playerId;
  RSID eid = action.play.cardId;
  auto p = players[playerId];
  p->hand.erase(eid);
  p->unitMana -= ents[eid].getCost();
  ents[eid].getCard()->onPlay(action);
  trigger(Event(PlayEvent(playerId, eid)));
  trigger(Event(SummonEvent(action.summon.playerId, action.summon.summoneeId)));
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
  return card.getCard()->playable(action);
}

void Game::playSlowOrFastSpell(Action &action) {
  RSID playerId = action.play.playerId;
  RSID eid = action.play.cardId;
  auto p = players[playerId];
  p->hand.erase(eid);
  i8 oldUnitMana = p->unitMana;
  p->unitMana = max(0, oldUnitMana - ents[eid].getCost());
  p->spellMana = p->spellMana + min(0, oldUnitMana - ents[eid].getCost());
  ents[eid].getCard()->onPlay(action);
  spellStack.push_back(action);
  trigger(Event(PlayEvent(playerId, eid)));
  trigger(Event(PutSpell(action.cast.playerId, action.cast.spellId)));
  for (i64 i = 0; i < action.cast.argc; i++)
    trigger(Event(TargetEvent(action.cast.playerId, action.cast.args[i])));
  state.putSlowSpell(playerId);
}

void Game::playBurstSpell(Action &action) {
  RSID playerId = action.play.playerId;
  RSID eid = action.play.cardId;
  auto p = players[playerId];
  p->hand.erase(eid);
  i8 oldUnitMana = p->unitMana;
  p->unitMana = max(0, oldUnitMana - ents[eid].getCost());
  p->spellMana = p->spellMana + min(0, oldUnitMana - ents[eid].getCost());
  action.any.type = ActionType::CAST;
  ents[eid].getCard()->onCast(action);
  trigger(Event(PlayEvent(playerId, eid)));
  trigger(Event(CastEvent(playerId, eid)));
  for (i64 i = 0; i < action.cast.argc; i++)
    trigger(Event(TargetEvent(action.cast.playerId, action.cast.args[i])));
  state.castedBurstSpell();
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
      if (state.needsRespondingSpell(pid)) {
        state.startCasting();
        releaseSpells();
        state.endCasting();
      }
      if (state.needsRespondingAttack(pid)) {
        state.startBattling();
        // battle();
        state.endBattling();
      }
      state.finishTurn();
    }
  } else
    state.finishTurn();
}

bool Game::isArenaClean() {
  return spellStack.empty() && frontier[0].empty() && frontier[1].empty();
}
bool Game::hasBattlingUnits() {
  return !frontier[0].empty() || !frontier[1].empty();
}

bool Game::isInHand(RSID playerId, RSID entityId) {
  rsvec &hand = GAME_PTR->players[playerId]->hand;
  return hand.find(entityId) != hand.end();
}
bool Game::isObjInGameView(RSID entityId) {
  if (GAME_PTR->ents.find(entityId) == GAME_PTR->ents.end())
    return false;
  Entity obj = GAME_PTR->ents[entityId];
  return !(obj.isDead() || obj.isDiscarded() || obj.isDetained());
}
bool Game::isDestructibleObjInGameView(RSID entityId) {
  if (GAME_PTR->ents.find(entityId) == GAME_PTR->ents.end())
    return false;
  Entity obj = GAME_PTR->ents[entityId];
  if (obj.isDead() || obj.isDiscarded() || obj.isDetained() || !obj.isSummoned())
    return false;
  return obj.isNexus() || obj.getCard()->type == CardType::UNIT;
}
bool Game::isUnitInGameView(RSID entityId) {
  if (GAME_PTR->ents.find(entityId) == GAME_PTR->ents.end())
    return false;
  Entity obj = GAME_PTR->ents[entityId];
  if (obj.isDead() || obj.isDiscarded() || obj.isDetained() || !obj.isSummoned())
    return false;
  return obj.getCard()->type == CardType::UNIT;
}
bool Game::isAlly(RSID playerId, RSID entityId) {
  if (GAME_PTR->ents.find(entityId) == GAME_PTR->ents.end())
    return false;
  Entity obj = GAME_PTR->ents[entityId];
  if (obj.isDead() || obj.isDiscarded() || obj.isDetained() || !obj.isSummoned())
    return false;
  return obj.getCard()->type == CardType::UNIT && obj.getPlayerId() == playerId;
}

bool Game::isEnemy(RSID playerId, RSID entityId) {
  if (GAME_PTR->ents.find(entityId) == GAME_PTR->ents.end())
    return false;
  Entity obj = GAME_PTR->ents[entityId];
  if (obj.isDead() || obj.isDiscarded() || obj.isDetained() || !obj.isSummoned())
    return false;
  return obj.getCard()->type == CardType::UNIT && obj.getPlayerId() == FLIP(playerId);
}

bool Game::isFollowerInGameView(RSID entityId) {
  if (GAME_PTR->ents.find(entityId) == GAME_PTR->ents.end())
    return false;
  Entity obj = GAME_PTR->ents[entityId];
  if (obj.isDead() || obj.isDiscarded() || obj.isDetained() || !obj.isSummoned())
    return false;
  return obj.getCard()->type == CardType::UNIT && obj.getCard()->supType != CardSupType::CHAMPION;
}

bool Game::hasSummonedCard(RSID playerId, RSID cardId) {
  for (int i = 0; i < players[playerId]->table.size(); i++) {
    RSID id = players[playerId]->table[i];
    auto obj = ents[id];
    if (obj.getCard()->id == cardId)
      return true;
  }
  for (int i = 0; i < frontier[playerId].size(); i++) {
    RSID id = frontier[playerId][i];
    auto obj = ents[id];
    if (obj.getCard()->id == cardId)
      return true;
  }
  return false;
}
bool Game::hasCardInHand(RSID playerId, RSID cardId) {
  for (int i = 0; i < players[playerId]->hand.size(); i++) {
    RSID id = players[playerId]->hand[i];
    auto card = ents[id];
    if (card.getCard()->id == cardId)
      return true;
  }
  return false;
}
bool Game::hasCardInDeck(RSID playerId, RSID cardId) {
  for (int i = 0; i < players[playerId]->deck.size(); i++) {
    RSID id = players[playerId]->deck[i];
    auto obj = ents[id];
    if (obj.getCard()->id == cardId)
      return true;
  }
  return false;
}
void Game::moveFirstAppearingCardToTop(RSID playerId, RSID cardId) {
  for (int i = 0; i < players[playerId]->deck.size(); i++) {
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
  return obj.getId();
}
RSID Game::summonAUnitOnTable(RSID playerId, RSID cardId) {
  return 0;
}
RSID Game::summonAUnitInAttack(RSID playerId, RSID cardId) {
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
      ents[id].die();
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
  for (auto eid: frontier[pid1])
    log("#%d:%s", frontier[pid1].getIndex(eid), ents[eid].getInfo().c_str());
  log("--------------------------------");
  log("Player %d's frontier:", pid2 + 1);
  for (auto eid: frontier[pid2])
    log("#%d:%s", frontier[pid2].getIndex(eid), ents[eid].getInfo().c_str());
  log("--------------------------------");
  log("Spell stack:");
  for (i64 i = spellStack.size() - 1; i >= 0; i--) {
    log("#%d:P%d %s", i, spellStack[i].cast.playerId + 1, ents[spellStack[i].cast.spellId].getInfo().c_str());
  }
}
