//
// Created by Hengruo Zhang on 2/9/20.
//

#ifndef RUNESIM_GAME_GAME_H
#define RUNESIM_GAME_GAME_H

#include "gallery.h"
#include "card_wrapper.h"
#include "player.h"

class Player;

class Game {
  friend class Player;
private:
  umap<rsid, CardWrapper> mWrapper;
  sptr<Player> players[2];
  vec<rsid> frontier[2];
public:
  static const u8 deckSize = 40;
  static const u8 regionSize = 2;
  static const u8 handSize = 10;
  static const u8 tableSize = 6;
  static const u8 frontierSize = 6;
  static Result<sptr<Game>> build(vec<pair<rsid, isize>> v1, vec<pair<rsid, isize>> v2);
  bool end();
  vec<rsid> firstDraw(rsid pid);
  vec<rsid> replaceFirstDraw(vec<rsid>);
  bool canDoSth(rsid pid);
  vec<rsid> showHand(rsid pid);
  Result<bool> summon(rsid pid, rsid handId, vec<rsid> args);
  bool cast(rsid pid, rsid handId, vec<rsid> args);
  bool pass(rsid pid);
  void printCW(rsid cwid);
  virtual ~Game();
};

#endif //RUNESIM_GAME_GAME_H
