//
// Created by Hengruo Zhang on 2/9/20.
//

#include "game.h"

Result<sptr<Game>> Game::build(vec<pair<rsid, isize>> v1, vec<pair<rsid, isize>> v2) {
  sptr<Game> game = make_shared<Game>();
  // build decks
  auto p1 = Player::build(game, 1, std::move(v1));
  if (p1.isErr())
    return p1.castErr<sptr<Game>>();
  game->players[0] = p1.val();
  auto p2 = Player::build(game, 2, std::move(v2));
  if (p2.isErr())
    return p2.castErr<sptr<Game>>();
  game->players[1] = p2.val();
  // init frontier
  game->frontier[0].resize(frontierSize);
  game->frontier[1].resize(frontierSize);
  // TODO: Initialize game environment
  //
  return Result<sptr<Game>>::mkVal(game);
}

vec<rsid> Game::firstDraw(rsid pid){
  return players[pid]->firstDraw();
}

Game::~Game() {
  players[0] = nullptr;
  players[1] = nullptr;
}
bool Game::end() {
  return false;
}
void Game::printCW(rsid cwid) {
  auto cw = mWrapper[cwid];
  log("ID: %04d, NAME: %s", cw.getCard()->id, cw.getCard()->name);
}
