//
// Created by Hengruo Zhang on 4/12/20.
//


#include "gallery.h"
#include "../game/game.h"

bool Deny0336::castable(const Action &action) const {
  auto id = action.play.args[0];
  if(!(GAME_PTR->isObjInGameView(id)))
    return false;
  auto target = GAME_PTR->ents[id];
  if(target.getCard()->type != CardType::SPELL && target.getCard()->type != CardType::ABILITY)
    return false;
  u64 keywords = target.getCard()->keywords;
  if(target.getCard()->type == CardType::SPELL && CHECK_K_BURST(keywords))
    return false;
  return true;
}

void Deny0336::onCast(Action &action) const {
  auto id = action.cast.args[0];
  if(GAME_PTR->isObjInGameView(id)){
    auto target = GAME_PTR->ents[id];
    target.beDenied();
  }
}