//
// Created by Hengruo Zhang on 4/4/20.
//

#include "runesim.h"

using namespace std;

extern umap<rsid, Card *> gallery;

void testBuildDeck(){
  vec<pair<rsid, isize>> deck1(1, {0, 40});
  vec<pair<rsid, isize>> deck2(1, {0, 40});
  auto res = Player::buildDeck(deck1);
  if(res.isErr())
    res.printErr();
  else log("Wrong!");
}

int main() {
  testBuildDeck();
  return 0;
}