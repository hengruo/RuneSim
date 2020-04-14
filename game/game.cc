//
// Created by Hengruo Zhang on 2/9/20.
//

#include "game.h"

Result<Game *> Game::build(vec<pair<RSID, isize>> v1, vec<pair<RSID, isize>> v2) {
  Game *_game = new Game();
  Game::game = _game;
  // build decks
  auto p1 = Player::build(1, std::move(v1));
  if (p1.isErr())
    return p1.castErr<Game *>();
  _game->players[0] = p1.val();
  auto p2 = Player::build(2, std::move(v2));
  if (p2.isErr())
    return p2.castErr<Game *>();
  _game->players[1] = p2.val();
  // init frontier
  _game->frontier[0].resize(FRONTIER_SIZE);
  _game->frontier[1].resize(FRONTIER_SIZE);
  // TODO: Initialize game environment
  //
  return Result<Game *>::mkVal(_game);
}

vec<RSID> Game::firstDraw(RSID pid) {
  return players[pid]->firstDraw();
}

Game::~Game() {
  players[0] = nullptr;
  players[1] = nullptr;
}
bool Game::ended() {
  return winner != -1;
}
void Game::printObj(RSID objId) {
  auto obj = mObjs[objId];
  if (obj.isCard())
    log("ID: %04d, NAME: %s", obj.getCard()->id, obj.getCard()->name);
  else if (obj.isNexus())
    log("Player %d's nexus health: %d", obj.getPlayerId(), obj.getHealth());
}
void Game::end(RSID Winner) {
  winner = Winner;
}
vec<RSID> Game::replaceFirstDraw(vec<RSID>) {
  return vec<RSID>();
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
bool Game::isObjInGameView(RSID objId) {
  if (Game::game->mObjs.find(objId) == Game::game->mObjs.end())
    return false;
  Object obj = Game::game->mObjs[objId];
  return !(obj.isDead() || obj.isDiscarded() || obj.isDetained());
}

bool Game::isDestructibleObjInGameView(RSID objId) {
  if (Game::game->mObjs.find(objId) == Game::game->mObjs.end())
    return false;
  Object obj = Game::game->mObjs[objId];
  if (obj.isDead() || obj.isDiscarded() || obj.isDetained() || !obj.isSummoned())
    return false;
  return obj.isNexus() || obj.getCard()->type == CardType::UNIT;
}
bool Game::isUnitInGameView(RSID objId) {
  if (Game::game->mObjs.find(objId) == Game::game->mObjs.end())
    return false;
  Object obj = Game::game->mObjs[objId];
  if (obj.isDead() || obj.isDiscarded() || obj.isDetained() || !obj.isSummoned())
    return false;
  return obj.getCard()->type == CardType::UNIT;
}
bool Game::isAlly(RSID playerId, RSID objId) {
  if (Game::game->mObjs.find(objId) == Game::game->mObjs.end())
    return false;
  Object obj = Game::game->mObjs[objId];
  if (obj.isDead() || obj.isDiscarded() || obj.isDetained() || !obj.isSummoned())
    return false;
  return obj.getCard()->type == CardType::UNIT && obj.getPlayerId() == playerId;
}

bool Game::isEnemy(RSID playerId, RSID objId) {
  if (Game::game->mObjs.find(objId) == Game::game->mObjs.end())
    return false;
  Object obj = Game::game->mObjs[objId];
  if (obj.isDead() || obj.isDiscarded() || obj.isDetained() || !obj.isSummoned())
    return false;
  return obj.getCard()->type == CardType::UNIT && obj.getPlayerId() == 1 - playerId;
}

bool Game::isFollowerInGameView(RSID objId) {
  if (Game::game->mObjs.find(objId) == Game::game->mObjs.end())
    return false;
  Object obj = Game::game->mObjs[objId];
  if (obj.isDead() || obj.isDiscarded() || obj.isDetained() || !obj.isSummoned())
    return false;
  return obj.getCard()->type == CardType::UNIT && obj.getCard()->supType != CardSupType::CHAMPION;
}
void Game::endDeclCast(RSID playerId) {
  for (int i = spellStack.size() - 1; i >= 0; i--) {
    RSID spellId = spellStack[i].args.listArgs.subject;
    auto spell = mObjs[spellId];
    if (spell.isCastable(spellStack[i]))
      spell.cast(spellStack[i]);
    else
      spell.quench();
  }
  for (int i = spellStack.size() - 1; i >= 0; i--) {
    RSID spellId = spellStack[i].args.listArgs.subject;
    Game::game->players[mObjs[spellId].getPlayerId()]->graveyard.push_back(spellId);
  }
}
bool Game::hasCard(RSID playerId, RSID cardId) {
  for(int i = 0; i<players[playerId]->table.size();i++){
    RSID id = players[playerId]->table[i];
    auto obj = mObjs[id];
    if(obj.getPlayerId() != playerId) return false;
    if(obj.getCard()->id != cardId) return false;
  }
  for(int i = 0; i<frontier[playerId].size();i++){
    RSID id = players[playerId]->table[i];
    auto obj = mObjs[id];
    if(obj.getPlayerId() != playerId) return false;
    if(obj.getCard()->id != cardId) return false;
  }
  return true;
}
