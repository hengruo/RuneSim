//
// Created by Hengruo Zhang on 4/19/20.
//

#include "test.h"

TEST(EVENT_LISTENER, DATA_MANIPULATE){
  RSID lid = 23;
  EventListener el1(lid, EventType::DRAW_CARD);
  umap<RSID, EventListener> m;
  m[lid] = el1;
  auto func = [&](RSID lid, Event e){
    auto el = m[lid];
    el.data[0] = e.playerId;
    el.data[1] = e.args.drawCardArgs.entityId;
  };
  el1.setListener(lid, func);
  EventListener el2 = el1;
  EXPECT_EQ(el1.getType(), el2.getType());
  EXPECT_EQ(el1.getId(), el2.getId());
  EXPECT_EQ(el2.data[0], 0);
  el2.data[2] = 42;
  EXPECT_EQ(el2.data[2], 42);
  el2(Event::buildDrawCardEvent(51, 78));
  EXPECT_EQ(el2.data[0], 51);
  EXPECT_EQ(el2.data[1], 78);
  EXPECT_EQ(el2.data[2], 42);
}