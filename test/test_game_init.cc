//
// Created by Hengruo Zhang on 4/19/20.
//
#include "test.h"

TEST(GAME_INIT, TOO_MANY_CARDS){
  vec<pair<RSID, isize>> wrongDeck = {
      {50, 3}, {271, 3}, {176, 4}, {199, 3},
      {127, 3}, {360, 3}, {405, 3}, {336, 2},
      {27, 3}, {297, 2}, {288, 3}, {306, 3},
      {268, 3}, {365, 3}, {411, 1}
  };
  auto res = Game::build(wrongDeck, wrongDeck);
  EXPECT_EQ(res.isErr(), true);
  EXPECT_EQ(res.err()->type, ErrorType::INVALID_DECK);
}
