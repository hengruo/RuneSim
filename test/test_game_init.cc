//
// Created by Hengruo Zhang on 4/19/20.
//

#include "test.h"
vec<pair<RSID, isize>> deckSpiderKarma = {
    {50, 3},
    {271,3},
    {176,3},
    {199,3},
    {127,3},
    {360,2},
    {405,3},
    {336,2},
    {27,3},
    {297,2},
    {288,3},
    {306,3},
    {268,3},
    {365,3},
    {411,1}
};

TEST(GAME_INIT, SUCCESS){
  RSID pid1 = 0, pid2= 1;
  Game::build(deckSpiderKarma, deckSpiderKarma, pid2);
  EXPECT_EQ(GAME_PTR->firstPlayer, pid2);
  sptr<Player> p1 = GAME_PTR->players[pid1], p2 = GAME_PTR->players[pid2];
  auto firstDrawRes1 = GAME_PTR->firstDraw(pid1);
  auto firstDrawRes2 = GAME_PTR->firstDraw(pid2);
  GAME_PTR->printEntity(p1->nexusId);
  for(auto eid: firstDrawRes1)
    GAME_PTR->printEntity(eid);
  GAME_PTR->printEntity(p2->nexusId);
  for(auto eid: firstDrawRes2)
    GAME_PTR->printEntity(eid);
}