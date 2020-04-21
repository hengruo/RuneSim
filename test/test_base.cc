//
// Created by Hengruo Zhang on 4/20/20.
//

#include "test.h"

TEST(RSVEC, ADD_ELEMS){
  rsvec v;
  EXPECT_EQ(v.size(), 0);
  v.push_back(1);
  v.push_back(2);
  v.push_back(7);
  v.push_back(9);
  EXPECT_EQ(v[2], 7);
  EXPECT_EQ(v.size(), 4);
  v.push_back(7);
  EXPECT_EQ(v[2], 7);
  EXPECT_EQ(v.size(), 4);
}

TEST(RSVEC, ERASE_ELEMS){
  rsvec v;
  EXPECT_EQ(v.size(), 0);
  v.add({1,12,7,19,6,5});
  EXPECT_EQ(v[2], 7);
  EXPECT_EQ(v.size(), 6);
  v.erase({2,19});
  vec<RSID> res{1,12,7,6,5};
  EXPECT_EQ(v.toVec() == res, true);
}

TEST(RSVEC, POP_EMPTY){
  rsvec v;
  EXPECT_EQ(v.size(), 0);
  EXPECT_EQ(v.back(), -1);
  v.pop_back();
  EXPECT_EQ(v.back(), -1);
}

TEST(RSVEC, SWAP){
  rsvec v;
  v.add({1,12,7,19,6,5});
  v.swap(3,5);
  vec<RSID> res{1,12,7,5,6,19};
  EXPECT_EQ(v.toVec() == res, true);
}

TEST(RSVEC, FOR_LOOP){
  rsvec v;
  v.add({1,12,7,19,6,5});
  vec<RSID> v_{1, 12, 7, 19, 6, 5};
  isize i = 0;
  for(auto it = v.begin(); it != v.end(); it++, i++)
    EXPECT_EQ(*it, v_[i]);
}

TEST(RSVEC, SHUFFLE){
  rsvec v;
  v.add({1,12,7,19,6,5});
  std::shuffle(v.begin(), v.end(), getRandomGenerator());
  EXPECT_EQ(v.size(), 6);
}