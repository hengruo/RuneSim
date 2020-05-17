#include "../runesim.h"
#include <iostream>

using namespace std;

extern umap<RSID, Card *> GALLERY;

void afterGame(RSID winner) {
  if (winner == 2)
    log("Tied!");
  else
    log("Winner is P%d", winner + 1);
}

int main() {
  // Initialization
  init_gallery();

  u64 iter = 1;
  char end = 'N';
  const char *pName[2] = {"[PLAYER 1]", "[PLAYER 2]"};
  const char *pPrompt[2] = {"PLAYER 1 >", "PLAYER 2 >"};
  str decks[2];
  bool preset[2];
  RSID indices[2];

  while (true) {
    preset[0] = preset[1] = false;
    log("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\nGAME %d\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n",
        iter++);

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

    RSID former = rand(0, 1); // starting hand player index
    log("%s is the starting hand!\n", pName[former]);
    indices[0] = former;
    indices[1] = FLIP(former);
    // Skip 0 and 1
    generateId();
    generateId();
    // Initialize game environment
    auto res = Game::build(decks[0], decks[1], former, afterGame);
    if (res.isErr()) {
      res.printErr();
      continue;
    }
    Game *game = res.val();

    // TODO: Players select and replace their first four cards
    //

    u64 round = 1;
    while (!game->isEnded()) {
      log("-------------------------------------------------\nROUND %d\n-------------------------------------------------\n",
          round++);
      former = FLIP(former);
    }

    log("END GAME? (Y/N): ");
    cin >> end;
    if (end == 'Y' || end == 'y') {
      delete game;
      clear_gallery();
      return 0;
    }
  }
}