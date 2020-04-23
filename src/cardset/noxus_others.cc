//
// Created by Hengruo Zhang on 4/14/20.
//

#include "gallery.h"
#include "../game/game.h"

void Sabotage0149::onCast(Action &action) const {
  RSID enemy = FLIP(action.cast.playerId);
  GAME_PTR->players[enemy];
}