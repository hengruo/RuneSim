//
// Created by Hengruo Zhang on 4/19/20.
//

#include "test.h"

TEST(DECK, DECODE){
  std::map<str, i32> deck = LoRDeckCode::decode("CEAQSAIFBMHREHRAFEVCWMABAYAQKAIUDURSYLIBAEAQKGQ");
  EXPECT_EQ(deck.size(), 16);
  EXPECT_EQ(deck["01SI001"], 2);
}

//TEST(DECK, EXCEED_SINGLE_CARD_LIMIT){
//  umap<RSID, i32> wrongDeck = {
//      {50, 3}, {271, 3}, {176, 2}, {199, 3},
//      {127, 3}, {360, 3}, {405, 3}, {336, 2},
//      {27, 3}, {297, 2}, {288, 3}, {306, 3},
//      {268, 3}, {365, 3}, {176, 2}
//  };
//  auto res = Game::checkDeck(wrongDeck);
//  EXPECT_EQ(res.isErr(), true);
//  EXPECT_EQ(res.err()->message, "Invalid number of card 0176: 4.");
//  EXPECT_EQ(res.err()->type, ErrorType::INVALID_DECK);
//}
//
//TEST(DECK, EXCEED_DECK_SIZE){
//  umap<RSID, i32> wrongDeck = {
//      {50, 3}, {271, 3}, {176, 2}, {199, 3},
//      {127, 3}, {360, 3}, {405, 3}, {336, 2},
//      {27, 3}, {297, 2}, {288, 3}, {306, 3},
//      {268, 3}, {365, 3}, {411, 1},{10,3}
//  };
//  auto res = Game::checkDeck(wrongDeck);
//  EXPECT_EQ(res.isErr(), true);
//  EXPECT_EQ(res.err()->message, "Exceed deck limit.");
//  EXPECT_EQ(res.err()->type, ErrorType::INVALID_DECK);
//}


TEST(EVENT_LISTENER, DATA_MANIPULATE){
  RSID lid = 23;
  EventListener el1(lid, EventType::DRAW_CARD);
  umap<RSID, EventListener> m;
  m[lid] = el1;
  auto func = [&](RSID lid, Event e){
    auto el = m[lid];
    el.data[0] = e.drawCard.playerId;
    el.data[1] = e.drawCard.indeckCardId;
  };
  el1.setListener(lid, func);
  EventListener el2 = el1;
  EXPECT_EQ(el1.getType(), el2.getType());
  EXPECT_EQ(el1.getId(), el2.getId());
  EXPECT_EQ(el2.data[0], 0);
  el2.data[2] = 42;
  EXPECT_EQ(el2.data[2], 42);
  el2(Event(DrawCardEvent(51, 78)));
  EXPECT_EQ(el2.data[0], 51);
  EXPECT_EQ(el2.data[1], 78);
  EXPECT_EQ(el2.data[2], 42);
}

TEST(EVENT, EVENT_TYPE_WILDCARD){
  Event event1(DrawCardEvent(0, 22));
  Event event2(DieEvent(1, 34));
  EXPECT_EQ(event1.any.type, EventType::DRAW_CARD);
  EXPECT_EQ(event2.any.type, EventType::DIE);
}

TEST(STATE, TRANSITION){
  GameState state;
  RSID pid1 = 0;
  RSID pid2 = 1;
  state.reset(pid1);
  EXPECT_EQ(state.canPutSlowSpell(pid1), true);
  state.summoned(pid1);
  state.putSlowSpell(pid1);
  EXPECT_EQ(state.canSummon(pid1), false);
  EXPECT_EQ(state.canPutSlowSpell(pid1), true);
  EXPECT_EQ(state.didNothingRespondable(pid1), false);
  state.finishTurn();
  EXPECT_EQ(state.whoseTurn, pid2);
  EXPECT_EQ(state.canPutSlowSpell(pid1), false);
  EXPECT_EQ(state.canPutSlowSpell(pid2), false);
  EXPECT_EQ(state.canPutFastSpell(pid2), true);
  EXPECT_EQ(state.canSummon(pid2), false);
  EXPECT_EQ(state.didNothingRespondable(pid2), true);
  state.putFastSpell(pid2);
  EXPECT_EQ(state.didNothingRespondable(pid2), false);
  state.finishTurn();
  EXPECT_EQ(state.needsResponse(pid1), true);
  EXPECT_EQ(state.didNothingRespondable(pid1), true);
  EXPECT_EQ(state.needsRespondingSpell(pid1), true);
  EXPECT_EQ(state.needsRespondingAttack(pid1), false);
  state.putFastSpell(pid1);
  state.finishTurn();
  EXPECT_EQ(state.needsResponse(pid2), true);
  EXPECT_EQ(state.canCastBurstSpell(pid2), false);
  state.startCasting();
  state.endCasting();
  state.finishTurn();
  EXPECT_EQ(state.whoseTurn, pid2);
  state.summoned(pid2);
  state.finishTurn();
  EXPECT_EQ(state.whoseTurn, pid1);
  EXPECT_EQ(state.canPutSlowSpell(pid1), true);
  EXPECT_EQ(state.canDeclAttack(pid1), true);
  EXPECT_EQ(state.canDeclBlock(pid1), false);
  state.declAttack(pid1);
  EXPECT_EQ(state.canDeclAttack(pid1), true);
  EXPECT_EQ(state.canPutSlowSpell(pid1), false);
  EXPECT_EQ(state.didNothingRespondable(pid1), false);
  state.declAttack(pid1);
  state.finishTurn();
  EXPECT_EQ(state.whoseTurn, pid2);
  EXPECT_EQ(state.needsResponse(pid2), true);
  EXPECT_EQ(state.canDeclBlock(pid2), true);
  EXPECT_EQ(state.didNothingRespondable(pid2), true);
  state.declBlock(pid2);
  EXPECT_EQ(state.didNothingRespondable(pid2), false);
  state.putFastSpell(pid2);
  state.finishTurn();
  EXPECT_EQ(state.needsResponse(pid1), true);
  state.castedBurstSpell();
  EXPECT_EQ(state.didNothingRespondable(pid1), true);
  state.startCasting();
  state.endCasting();
  state.startBattling();
  state.endBattling();
  state.finishTurn();
  EXPECT_EQ(state.whoseTurn, pid2);
  EXPECT_EQ(state.canSummon(pid2), true);
  EXPECT_EQ(state.canPutFastSpell(pid2), true);
  EXPECT_EQ(state.canPutSlowSpell(pid2), true);
}