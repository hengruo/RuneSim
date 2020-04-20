//
// Created by Hengruo Zhang on 4/19/20.
//
#include "test.h"

TEST(DECK, EXCEED_SINGLE_CARD_LIMIT){
  vec<pair<RSID, isize>> wrongDeck = {
      {50, 3}, {271, 3}, {176, 2}, {199, 3},
      {127, 3}, {360, 3}, {405, 3}, {336, 2},
      {27, 3}, {297, 2}, {288, 3}, {306, 3},
      {268, 3}, {365, 3}, {176, 2}
  };
  auto res = Game::checkDeck(wrongDeck);
  EXPECT_EQ(res.isErr(), true);
  EXPECT_EQ(res.err()->message, "Invalid number of card 0176: 4.");
  EXPECT_EQ(res.err()->type, ErrorType::INVALID_DECK);
}

TEST(DECK, EXCEED_DECK_SIZE){
  vec<pair<RSID, isize>> wrongDeck = {
      {50, 3}, {271, 3}, {176, 2}, {199, 3},
      {127, 3}, {360, 3}, {405, 3}, {336, 2},
      {27, 3}, {297, 2}, {288, 3}, {306, 3},
      {268, 3}, {365, 3}, {411, 1},{10,3}
  };
  auto res = Game::checkDeck(wrongDeck);
  EXPECT_EQ(res.isErr(), true);
  EXPECT_EQ(res.err()->message, "Exceed deck limit.");
  EXPECT_EQ(res.err()->type, ErrorType::INVALID_DECK);
}
