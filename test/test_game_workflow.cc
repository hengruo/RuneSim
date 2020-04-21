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

TEST(GAME_WORKFLOW, GAME_INIT_SUCCESS) {
  resetId();
  log("====================================");
  log("PREPARE");
  log("====================================");
  RSID pid1 = 0, pid2 = 1;
  Game::build(deckSpiderKarma, deckThreshLux, pid2);
  EXPECT_EQ(GAME_PTR->startingHand, pid2);
  log("Player %d is the starting hand.", pid2 + 1);
  sptr<Player> p1 = GAME_PTR->players[pid1], p2 = GAME_PTR->players[pid2];
  auto firstDrawRes1 = GAME_PTR->firstDraw(pid1);
  auto firstDrawRes2 = GAME_PTR->firstDraw(pid2);
  log("------------------------------------");
  GAME_PTR->printEntity(p1->nexusId);
  for (auto eid: firstDrawRes1)
    GAME_PTR->printEntity(eid);
  log("------------------------------------");
  GAME_PTR->printEntity(p2->nexusId);
  for (auto eid: firstDrawRes2)
    GAME_PTR->printEntity(eid);
  log("------------------------------------");
  log("Player 1 doesn't replace cards.");
  log("------------------------------------");
  log("Player 2 replaced cards at positions: 0 2.");
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

TEST(GAME_WORKFLOW, WALK_THROUGH_SUCCESS) {
  resetId();
  RSID pid1 = 0, pid2 = 1;
  Game::build(deckSpiderKarma, deckThreshLux, pid2);
  sptr<Player> p1 = GAME_PTR->players[pid1], p2 = GAME_PTR->players[pid2];
  vec<RSID> firstDrawRes1 = {1, 2, 7, 13};
  vec<RSID> firstDrawRes2 = {45, 49, 58, 61};
  GAME_PTR->putFirstDrawInHandAndShuffleDeck(pid1, firstDrawRes1);
  GAME_PTR->putFirstDrawInHandAndShuffleDeck(pid2, firstDrawRes2);

  p1->deck =
      {8, 15, 19, 6, 11, 22, 12, 24, 5, 32, 38, 16, 39, 14, 27, 31, 26, 17, 28, 33, 25, 40, 29, 18, 3, 34, 21, 37, 36,
       9, 23, 4, 20, 35, 10, 30};
  p2->deck =
      {47, 54, 59, 46, 51, 63, 52, 65, 44, 73, 79, 55, 80, 53, 68, 72, 67, 56, 69, 74, 66, 81, 70, 57, 42, 75, 62, 78,
       77, 48, 64, 43, 60, 76, 50, 71};

  log("====================================");
  log("ROUND 01");
  log("====================================");
  GAME_PTR->startRound();
  EXPECT_EQ(GAME_PTR->state, GameState::FREE);
  EXPECT_EQ(p1->deck.size(), 35);
  EXPECT_EQ(p2->deck.size(), 35);
  EXPECT_EQ(p1->hand.size(), 5);
  EXPECT_EQ(p2->hand.size(), 5);
  EXPECT_EQ(p1->unitMana, 1);
  EXPECT_EQ(p2->unitMana, 1);
  log("------------------------------------");
  log("Player %d's hand:", pid1 + 1);
  for (auto eid: p1->hand)
    GAME_PTR->printEntity(eid);
  log("------------------------------------");
  log("Player %d's hand:", pid2 + 1);
  for (auto eid: p2->hand)
    GAME_PTR->printEntity(eid);
  RSID args[EVENT_ARG_MAX_NUM];
  Event event = Event::buildSummonEvent(pid2, 49, 0, args);
  EXPECT_EQ(GAME_PTR->canSummonFromHand(event), true);
  if(GAME_PTR->canSummonFromHand(event))
    GAME_PTR->summonFromHand(event);
  EXPECT_EQ(p2->unitMana, 0);
  EXPECT_EQ(GAME_PTR->whosTurn, pid1);
}