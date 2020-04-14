//
// Created by Hengruo Zhang on 4/4/20.
//

#include "app/runesim.h"

using namespace std;

extern umap<RSID, Card *> gallery;

void testBuildDeck(){
  vec<pair<RSID, isize>> deck1(1, {0, 40});
  vec<pair<RSID, isize>> deck2(1, {0, 40});
  auto res = Player::buildDeck(deck1);
  if(res.isErr())
    res.printErr();
  else log("Wrong!");
}

int main() {
  testBuildDeck();
  return 0;
}