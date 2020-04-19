//
// Created by Hengruo Zhang on 4/14/20.
//

#include "gallery.h"
#include "../game/game.h"

void Sabotage0149::onCast(Event event) const {
  RSID enemy = 1 - event.playerId;
  GAME_PTR->players[enemy];
}