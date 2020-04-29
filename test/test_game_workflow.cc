#include "test.h"
//vec<std::pair<RSID, isize>> deckSpiderKarma = {
//    {50, 3},
//    {271, 3},
//    {176, 3},
//    {199, 3},
//    {127, 3},
//    {360, 2},
//    {405, 3},
//    {336, 2},
//    {27, 3},
//    {297, 2},
//    {288, 3},
//    {306, 3},
//    {268, 3},
//    {365, 3},
//    {411, 1}
//};
//
//vec<std::pair<RSID, isize>> deckThreshLux = {
//    {141, 3},
//    {372, 3},
//    {176, 3},
//    {403, 2},
//    {399, 2},
//    {360, 2},
//    {368, 1},
//    {27, 3},
//    {405, 3},
//    {246, 3},
//    {306, 3},
//    {268, 3},
//    {351, 3},
//    {180, 3},
//    {203, 2},
//    {411, 1}
//};

str deckSpiderKarma = "CEBAGAICAIUTSCABAUOSQKZRGI2TMOACAEAQEMICAECRILQBAEAQKDY";
str deckThreshLux = "CEBAIAIAEESSSKQGAECR2KBLGEZDIAQCAEABONQCAECQCFABAIAQKDZD";

void afterGame(RSID winner) {
  if (winner == 2)
    log("Tied!");
  else
    log("Winner is P%d", winner + 1);
}

TEST(GAME_WORKFLOW, GAME_INIT_SUCCESS) {
  resetId();
  log("====================================");
  log("PREPARE");
  log("====================================");
  RSID pid1 = 0, pid2 = 1;
  Game::build(deckSpiderKarma, deckThreshLux, pid2, afterGame);
  EXPECT_EQ(GAME_PTR->firstPlayerId, pid2);
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
  delete GAME_PTR;
}

TEST(GAME_WORKFLOW, WALK_THROUGH_SUCCESS) {
  resetId();
  RSID pid1 = 0, pid2 = 1;
  Game::build(deckSpiderKarma, deckThreshLux, pid2, afterGame);
  sptr<Player> p1 = GAME_PTR->players[pid1], p2 = GAME_PTR->players[pid2];
  vec<RSID> firstDrawRes1 = {6, 7, 13, 16};
  vec<RSID> firstDrawRes2 = {45, 75, 78, 64};
  GAME_PTR->putFirstDrawInHandAndShuffleDeck(pid1, firstDrawRes1);
  GAME_PTR->putFirstDrawInHandAndShuffleDeck(pid2, firstDrawRes2);

  p1->deck =
      {24, 31, 14, 11, 9, 26, 12, 22, 28, 8, 37, 3, 27, 25, 34, 29, 23, 15, 36, 5, 18, 41, 17, 20, 4, 32, 38, 40, 19,
       39, 42, 30, 35, 21, 33, 10};
  p2->deck =
      {56, 74, 67, 81, 80, 70, 60, 52, 73, 77, 63, 47, 69, 79, 59, 66, 61, 48, 49, 57, 51, 76, 54, 82, 55, 50, 53, 83,
       72, 62, 58, 65, 71, 44, 46, 68};

  // Round 1
  GAME_PTR->startRound();
  EXPECT_EQ(p1->deck.size(), 35);
  EXPECT_EQ(p2->deck.size(), 35);
  EXPECT_EQ(p1->hand.size(), 5);
  EXPECT_EQ(p2->hand.size(), 5);
  EXPECT_EQ(p1->unitMana, 1);
  EXPECT_EQ(p2->unitMana, 1);
  // P2 passes
  GAME_PTR->hitButton(pid2);
  // P1 summons 'Hapless Aristocrat'
  Action action(PlayAction(pid1, 13));
  action.play.argc = 0;
  EXPECT_EQ(GAME_PTR->canPlayUnit(action), true);
  if (GAME_PTR->canPlayUnit(action))
    GAME_PTR->playUnit(action);
  EXPECT_EQ(p1->unitMana, 0);
  GAME_PTR->hitButton(pid1);
  // P2 passes.
  EXPECT_EQ(GAME_PTR->state.whoseTurn, pid2);
  GAME_PTR->hitButton(pid2);
  // P1 passes. End round.
  GAME_PTR->hitButton(pid1);

  // Round 2
  EXPECT_EQ(GAME_PTR->starterInRound, pid1);
  action.play = PlayAction(pid1, 10);
  EXPECT_EQ(GAME_PTR->canPlayUnit(action), false);
  action.play = PlayAction(pid1, 6);
  // P1 summons Elise
  if (GAME_PTR->canPlayUnit(action))
    GAME_PTR->playUnit(action);
  EXPECT_EQ(GAME_PTR->ents[p1->hand[0]].getCard()->id, CODE_TO_CARD["01SI053T1"]->id);
  // P2 passes
  GAME_PTR->hitButton(pid2);
  // P1 declares attack

  delete GAME_PTR;
}