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

Result<Game *> Game::build(vec<pair<RSID, isize>> &v1, vec<pair<RSID, isize>> &v2, RSID firstPlayer) {
  Game *_game = new Game;
  GAME_PTR = _game;
  _game->startingHand = firstPlayer;
  _game->starterInRound = firstPlayer;
  _game->whoseTurn = firstPlayer;
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
  // init frontier
  _game->frontier[0].resize(FRONTIER_LIMIT);
  _game->frontier[1].resize(FRONTIER_LIMIT);

  _game->players[firstPlayer]->hasToken = true;
  _game->players[FLIP(firstPlayer)]->hasToken = false;
  for (auto eid: _game->players[0]->deck)
    _game->ents[eid].getCard()->beforeGameStarts(0, eid);
  for (auto eid: _game->players[1]->deck)
    _game->ents[eid].getCard()->beforeGameStarts(1, eid);

  _game->state = GameState::INIT;

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

bool Game::isEnded() {
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
}

void Game::startRound() {
  round += 1;
  RSID pid1 = GAME_PTR->starterInRound;
  RSID pid2 = FLIP(GAME_PTR->starterInRound);
  whoseTurn = starterInRound;
  auto p1 = players[pid1], p2 = players[pid2];
  p1->spellMana = min(p1->spellMana + p1->unitMana, MAX_SPELL_MANA);
  p2->spellMana = min(p2->spellMana + p2->unitMana, MAX_SPELL_MANA);
  p1->unitMana = min(round, MAX_MANA);
  p2->unitMana = min(round, MAX_MANA);
  p1->hasToken = true;
  p2->hasToken = false;
//  if(round >= MAX_MANA){
//    enlighten();
//  }
  trigger(Event(StartRoundEvent(round)));
  drawACard(pid1);
  drawACard(pid2);
  passCnt = 1;
}

void Game::drawACard(RSID pid) {
  auto p = players[pid];
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
}

void Game::releaseSkill(Action &action) {
  if (spellStack.size() < SPELL_STACK_LIMIT) {
    spellStack.push_back(action);
    state = GameState::IN_SKILL;
    whoseTurn = FLIP(whoseTurn);
  }
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
  GAME_PTR->state = GameState::AFTER_FIRST_DRAW;
}

bool Game::canPlayUnit(Action &action) {
  if (action.play.type != ActionType::PLAY)
    return false;
  RSID pid = action.play.playerId;
  RSID id = action.play.cardId;
  if (pid != whoseTurn)
    return false;
  if (state != GameState::FREE)
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
  stateInitiator = whoseTurn;
  RSID playerId = action.play.playerId;
  RSID eid = action.play.cardId;
  auto p = players[playerId];
  p->hand.erase(eid);
  p->unitMana -= ents[eid].getCost();
  ents[eid].getCard()->onPlay(action);
  trigger(Event(PlayEvent(playerId, eid)));
  trigger(Event(SummonEvent(action.summon.playerId, action.summon.summoneeId)));
  p->table.push_back(eid);
  passCnt = 1;
  whoseTurn = FLIP(whoseTurn);
}

bool Game::canPlaySpell(Action &action) {
  if (action.play.type != ActionType::PLAY)
    return false;
  RSID pid = action.play.playerId;
  RSID id = action.play.cardId;
  if (pid != whoseTurn)
    return false;
  if (!isInHand(pid, id))
    return false;
  if (ents.find(id) == ents.end())
    return false;
  auto card = ents[id];
  if (!card.isSpell())
    return false;
  if (state != GameState::FREE && CHECK_K_SLOW(card.getCard()->keywords))
    return false;
  if (card.getCost() > players[pid]->unitMana + players[pid]->spellMana)
    return false;
  if (spellStack.size() >= SPELL_STACK_LIMIT)
    return false;
  return card.getCard()->playable(action);
}

void Game::playSpell(Action &action) {
  if (isArenaClean())
    stateInitiator = whoseTurn;
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
  trigger(Event(DeclCastEvent(action.cast.playerId, action.cast.spellId)));
  for (i64 i = 0; i < action.cast.argc; i++)
    trigger(Event(TargetEvent(action.cast.playerId, action.cast.args[i])));
  u64 keywords = ents[eid].getCard()->keywords;
  passCnt = 0;
}

void Game::hitButton(RSID pid) {
  if (isArenaClean()) {
    if(passCnt >= 2){
      // endRound();
      return;
    }
    passCnt += 1;
    whoseTurn = FLIP(whoseTurn);
  }
  if (hasBattlingUnits()) {
    if (stateInitiator == pid) {
      whoseTurn = FLIP(whoseTurn);
    } else if (!spellStack.empty() && spellStack.back().cast.playerId == pid) {
      whoseTurn = FLIP(whoseTurn);
    } else {
      // battle();
      passCnt = 1;
      whoseTurn = FLIP(stateInitiator);
    }
  } else {
    if (spellStack.back().cast.playerId == pid) {
      whoseTurn = FLIP(whoseTurn);
    } else {
      releaseSpells();
      passCnt = 1;
      whoseTurn = FLIP(stateInitiator);
    }
  }
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
