//
// Created by Hengruo Zhang on 2/9/20.
//

#include "game.h"

Game *GAME_PTR = nullptr;

Game::~Game() {
  players[0] = nullptr;
  players[1] = nullptr;
}

Result<Game *> Game::build(vec<pair<RSID, isize>> &v1, vec<pair<RSID, isize>> &v2, RSID firstPlayer) {
  Game *_game = new Game;
  GAME_PTR = _game;
  _game->firstPlayer = firstPlayer;
  // build decks
  auto res1 = Game::checkDeck(v1);
  if(res1.isErr()) return res1.castErr<Game*>();
  auto res2 = Game::checkDeck(v2);
  if(res2.isErr()) return res2.castErr<Game*>();
  auto p1 = Player::build(0, v1);
  if (p1.isErr())
    return p1.castErr<Game *>();
  _game->players[0] = p1.val();
  auto p2 = Player::build(1, v2);
  if (p2.isErr())
    return p2.castErr<Game *>();
  _game->players[1] = p2.val();
  // init frontier
  _game->frontier[0].resize(FRONTIER_LIMIT);
  _game->frontier[1].resize(FRONTIER_LIMIT);

  return Result<Game *>::mkVal(_game);
}

vec<RSID> Game::firstDraw(RSID pid) {
  vec<RSID> res;
  isize i = rand(1, DECK_LIMIT) - 1;
  res.push_back(players[pid]->deck[i]);
  i = rand(1, DECK_LIMIT) - 1;
  res.push_back(players[pid]->deck[i]);
  i = rand(1, DECK_LIMIT) - 1;
  res.push_back(players[pid]->deck[i]);
  i = rand(1, DECK_LIMIT) - 1;
  res.push_back(players[pid]->deck[i]);
  return res;
}

void Game::replaceFirstDraw(RSID pid, vec<RSID> &draw, vec<bool> toRep) {
  for(isize i = 0; i < toRep.size(); i++){
    if(toRep[i]){
      isize n = rand(1, DECK_LIMIT) - 1;
      draw[i] = players[pid]->deck[n];
    }
  }
}

void Game::putFirstDrawInHand(RSID pid, vec<RSID> &draw) {
  for(auto eid: draw){
    GAME_PTR->players[pid]->hand.push_back(eid);
    trigger(Event::buildGetCardEvent(pid, eid));
  }
}

bool Game::isEnded() {
  return winner != -1;
}
void Game::printEntity(RSID entityId) {
  auto obj = ents[entityId];
  if (obj.isCard())
    log("ID: %04d, NAME: %s", obj.getCard()->id, obj.getCard()->name);
  else if (obj.isNexus())
    log("Player %d's nexus health: %d", obj.getPlayerId(), obj.getHealth());
}
void Game::end(RSID Winner) {
  winner = Winner;
}

void Game::startRound() {

}
bool Game::canDoSth(RSID pid) {
  return false;
}
vec<RSID> Game::showHand(RSID pid) {
  return vec<RSID>();
}
bool Game::cast(RSID pid, RSID handId, vec<RSID> args) {
  return false;
}
bool Game::pass(RSID pid) {
  return false;
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
  return obj.getCard()->type == CardType::UNIT && obj.getPlayerId() == 1 - playerId;
}

bool Game::isFollowerInGameView(RSID entityId) {
  if (GAME_PTR->ents.find(entityId) == GAME_PTR->ents.end())
    return false;
  Entity obj = GAME_PTR->ents[entityId];
  if (obj.isDead() || obj.isDiscarded() || obj.isDetained() || !obj.isSummoned())
    return false;
  return obj.getCard()->type == CardType::UNIT && obj.getCard()->supType != CardSupType::CHAMPION;
}
void Game::endDeclCast(RSID playerId) {
  for (int i = spellStack.size() - 1; i >= 0; i--) {
    RSID spellId = spellStack[i].args.castArgs.objectId;
    auto spell = ents[spellId];
    if (spell.isCastable(spellStack[i])) {
      spellStack[i].type = EventType::CAST;
      spell.perform(spellStack[i]);
    } else
      spell.quench();
  }
  for (int i = spellStack.size() - 1; i >= 0; i--) {
    RSID spellId = spellStack[i].args.castArgs.objectId;
    GAME_PTR->players[ents[spellId].getPlayerId()]->graveyard.push_back(spellId);
  }
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
    auto obj = ents[id];
    if (obj.getCard()->id == cardId)
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
      swap(players[playerId]->deck[0], players[playerId]->deck[i]);
  }
}
RSID Game::putCardInHand(RSID playerId, RSID cardId) {
  Entity obj = Entity::buildCard(generateId(), cardId, playerId).val();
  GAME_PTR->ents[obj.getEntityId()] = obj;
  if (GAME_PTR->players[playerId]->hand.size() >= HAND_LIMIT) {
    obj.beDiscarded();
    return obj.getEntityId();
  }
  GAME_PTR->players[playerId]->hand.push_back(obj.getEntityId());
  Event event = Event::buildGetCardEvent(playerId, obj.getEntityId());
  trigger(event);
  return obj.getEntityId();
}
RSID Game::summonAUnitOnTable(RSID playerId, RSID cardId) {
  return 0;
}
RSID Game::summonAUnitInAttack(RSID playerId, RSID cardId) {
  return 0;
}
void Game::trigger(Event event) {
  for (auto &l : listeners[event.type]) {
    l(event);
  }
}
Result<void *> Game::checkDeck(vec<pair<RSID, isize>> &v) {
  uset<CardRegion> regions;
  umap<RSID, i32> eachCnt;
  isize championCnt = 0;
  isize totalCnt = 0;
  for (pair<RSID, isize> p : v) {
    if(GALLERY.find(p.first) == GALLERY.end())
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