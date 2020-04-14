//
// Created by Hengruo Zhang on 4/11/20.
//

#include "gallery.h"
#include "../game/game.h"
#include "../game/event.h"

bool Blade_sEdge::castable(Event event) {
  auto id = event.args.listArgs.objects[0];
  return Game::game->isDestructibleObjInGameView(id);
}
void Blade_sEdge::onCast(Event event) {
  Object obj = Game::game->mObjs[event.args.listArgs.objects[0]];
  obj.reduceHealth(1);
}

bool ElixirOfWrath::castable(Event event) {
  auto id = event.args.listArgs.objects[0];
  return Game::game->isAlly(event.playerId, id);
}
void ElixirOfWrath::onCast(Event event) {
  Object obj = Game::game->mObjs[event.args.listArgs.objects[0]];
  obj.addAttackInRound(3);
}

bool Guile::castable(Event event) {
  auto id = event.args.listArgs.objects[0];
  return Game::game->isEnemy(event.playerId, id);
}
void Guile::onCast(Event event) {
  Object obj = Game::game->mObjs[event.args.listArgs.objects[0]];
  obj.stun();
}

void Brothers_Bond::onCast(Event event) {
  Object obj1 = Game::game->mObjs[event.args.listArgs.objects[0]];
  Object obj2 = Game::game->mObjs[event.args.listArgs.objects[1]];
  obj1.addAttackInRound(2);
  obj2.addAttackInRound(2);
}

void DeathLotus::onCast(Event event) {
  for (RSID id : Game::game->frontier[0])
    Game::game->mObjs[id].reduceHealth(1);
  for (RSID id : Game::game->frontier[1])
    Game::game->mObjs[id].reduceHealth(1);
}