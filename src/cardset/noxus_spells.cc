//
// Created by Hengruo Zhang on 4/11/20.
//

#include "gallery.h"
#include "../game/game.h"

bool BladesEdge0192::castable(const Action &action) const {
  auto id = action.objectId;
  return GAME_PTR->isDestructibleObjInGameView(id);
}
void BladesEdge0192::onCast(Action &action) const {
  Entity obj = GAME_PTR->ents[action.arg1];
  obj.beHurt(1);
}

bool ElixirOfWrath0262::castable(const Action &action) const {
  auto id = action.arg1;
  return GAME_PTR->isAlly(action.playerId, id);
}
void ElixirOfWrath0262::onCast(Action &action) const {
  Entity obj = GAME_PTR->ents[action.arg1];
  obj.gainAttackInRound(3);
}

bool Guile0413::castable(const Action &action) const {
  auto id = action.arg1;
  return GAME_PTR->isEnemy(action.playerId, id);
}
void Guile0413::onCast(Action &action) const {
  Entity obj = GAME_PTR->ents[action.arg1];
  obj.beStunned();
}

void BrothersBond0080::onCast(Action &action) const {
  Entity obj1 = GAME_PTR->ents[action.arg1];
  Entity obj2 = GAME_PTR->ents[action.arg2];
  obj1.gainAttackInRound(2);
  obj2.gainAttackInRound(2);
}

void DeathLotus0275::onCast(Action &action) const {
  for (RSID id : GAME_PTR->frontier[0])
    GAME_PTR->ents[id].beHurt(1);
  for (RSID id : GAME_PTR->frontier[1])
    GAME_PTR->ents[id].beHurt(1);
}