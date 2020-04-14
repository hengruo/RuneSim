//
// Created by Hengruo Zhang on 4/12/20.
//


#include "gallery.h"
#include "../game/game.h"
#include "../game/event.h"

bool Deny::castable(Event event) {
  auto id = event.args.listArgs.objects[0];
  if(!(Game::game->isObjInGameView(id)))
    return false;
  auto target = Game::game->mObjs[id];
  if(target.getCard()->type != CardType::SPELL && target.getCard()->type != CardType::ABILITY)
    return false;
  u64 keywords = target.getCard()->keywords;
  if(target.getCard()->type == CardType::SPELL && CHECK_K_BURST(keywords))
    return false;
  return true;
}

void Deny::onCast(Event event) {
  auto id = event.args.listArgs.objects[0];
  if(Game::game->isObjInGameView(id)){
    auto target = Game::game->mObjs[id];
    target.deny();
  }
}