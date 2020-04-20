//
// Created by Hengruo Zhang on 4/19/20.
//

#include "test.h"
vec<pair<RSID, isize>> deckSpiderKarma = {
    {50, 3},
    {271, 3},
    {176, 3},
    {199, 3},
    {127, 3},
    {360, 2},
    {405, 3},
    {336, 2},
    {27, 3},
    {297, 2},
    {288, 3},
    {306, 3},
    {268, 3},
    {365, 3},
    {411, 1}
};

vec<pair<RSID, isize>> deckThreshLux = {
    {141, 3},
    {372, 3},
    {176, 3},
    {403, 2},
    {399, 2},
    {360, 2},
    {368, 1},
    {27, 3},
    {405, 3},
    {246, 3},
    {306, 3},
    {268, 3},
    {351, 3},
    {180, 3},
    {203, 2},
    {411, 1}
};

TEST(GAME_WORKFLOW, SUCCESS) {
  RSID pid1 = 0, pid2 = 1;
  Game::build(deckSpiderKarma, deckThreshLux, pid2);
  EXPECT_EQ(GAME_PTR->firstPlayer, pid2);
  sptr<Player> p1 = GAME_PTR->players[pid1], p2 = GAME_PTR->players[pid2];
  auto firstDrawRes1 = GAME_PTR->firstDraw(pid1);
  auto firstDrawRes2 = GAME_PTR->firstDraw(pid2);
  GAME_PTR->printEntity(p1->nexusId);
  for (auto eid: firstDrawRes1)
    GAME_PTR->printEntity(eid);
  GAME_PTR->printEntity(p2->nexusId);
  for (auto eid: firstDrawRes2)
    GAME_PTR->printEntity(eid);
  log("Player 0 doesn't replace cards.");
  log("Player 1 replaced cards in position: 0, 2.");
  GAME_PTR->replaceFirstDraw(pid2, firstDrawRes2, {true, false, true, false});
  for (auto eid: firstDrawRes2)
    GAME_PTR->printEntity(eid);
  GAME_PTR->putFirstDrawInHandAndShuffleDeck(pid1, firstDrawRes1);
  GAME_PTR->putFirstDrawInHandAndShuffleDeck(pid2, firstDrawRes2);
  for (isize i = 0; i < firstDrawRes1.size(); i++)
    EXPECT_EQ(firstDrawRes1[i], p1->hand[i]);
  for (isize i = 0; i < firstDrawRes2.size(); i++)
    EXPECT_EQ(firstDrawRes2[i], p2->hand[i]);
  EXPECT_EQ(p1->deck.size(), DECK_LIMIT - 4);
  EXPECT_EQ(p2->deck.size(), DECK_LIMIT - 4);
}