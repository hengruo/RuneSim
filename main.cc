//
// Created by Hengruo Zhang on 2/7/20.
//

#include "runesim.h"
#include <iostream>

using namespace std;

extern umap<rsid, Card *> gallery;

int main() {
  // Initialization
  init_gallery();

  u64 iter = 1;
  char end = 'N';
  const char *pName[2] = {"[PLAYER 1]", "[PLAYER 2]"};
  const char *pPrompt[2] = {"PLAYER 1 >", "PLAYER 2 >"};
  vector<pair<rsid, isize>> decks[2];
  bool preset[2];
  rsid indices[2];

  while (true) {
    preset[0] = preset[1] = false;
    log("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\nGAME %d\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n", iter++);

    for (isize i = 0; i < 2; i++) {
      if (iter > 1) {
        log("%s Change deck? (Y/N): ", pPrompt[i]);
        cin >> end;
        if (end == 'Y' || end == 'y')
          preset[i] = true;
      }
      if (iter == 1 || preset[i]) {
        log("%s Please input your deck (INDEX NUM):\n", pPrompt[i]);
        // TODO: read value and reset deck1
        //
      }
    }
    // Initialize game environment
    auto res = Game::build(decks[0], decks[1]);
    if (res.isErr()) {
      res.printErr();
      continue;
    }
    sptr<Game> game = res.val();

    rsid fh = rand(0,1); // First hand player index
    log("%s is the first hand!\n", pName[fh]);
    indices[0] = fh;
    indices[1] = 1 - fh;

    // TODO: Players select and replace their first four cards
    //

    u64 round = 1;
    while (!game->end()) {
      log("-------------------------------------------------\nROUND %d\n-------------------------------------------------\n", round++);
      for (rsid idx : indices) {

      }
    }

    log("END GAME? (Y/N): ");
    cin >> end;
    if (end == 'Y' || end == 'y') {
      clear_gallery();
      return 0;
    }
  }
}