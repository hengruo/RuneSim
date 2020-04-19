//
// Created by Hengruo Zhang on 4/15/20.
//

#include "gallery.h"
#include "../game/game.h"

void Kalista0088::onDeclAttack(Event event) const {
  auto ent = GAME_PTR->ents[event.args.declAttackArgs.attackerId];
  i8 maxPower = 0;
  Entity strongest;
  for(RSID id : GAME_PTR->players[event.playerId]->graveyard){
    if(GAME_PTR->ents[id].isFollower()){
      if(GAME_PTR->ents[id].getAttack() > maxPower){
        maxPower = GAME_PTR->ents[id].getAttack();
        strongest = GAME_PTR->ents[id];
      }
    }
  }
  auto bondee = strongest.getEphemeralCopy();
  auto & front = GAME_PTR->frontier[event.playerId];
  if(front.size()<FRONTIER_LIMIT){
    bondee.prepareAttack(front.size()-1);
    ent.bond(bondee.getEntityId());
  }else{
    bondee.beDiscarded();
  }
}

void Kalista0091::onSummon(Event event) const {
  static i32 counter = 0;
  static RSID kalistaId = event.args.summonArgs.objectId;
  static RSID kalistaPlayerId = event.playerId;
  auto func = [](Event e) {
    if (e.type != EventType::DIE || e.playerId != kalistaPlayerId)
      return;
    counter += 1;
    if(counter >= 4){
      GAME_PTR->ents[kalistaId].levelUp(88);
      auto l = GAME_PTR->listeners[EventType::DIE];
      auto p = GAME_PTR->entityListeners[kalistaId];
      l.erase(l.begin() + p.second);
      GAME_PTR->entityListeners.erase(kalistaId);
    }
  };
  GAME_PTR->listeners[EventType::DIE].push_back(func);
  isize pos = GAME_PTR->listeners[EventType::DIE].size();
  GAME_PTR->entityListeners[kalistaId] = {EventType::DIE, pos};
}

void Kalista0091::onDie(Event event) const {
  auto l = GAME_PTR->listeners[EventType::DIE];
  auto p = GAME_PTR->entityListeners[event.args.dieArgs.subjectId];
  l.erase(l.begin() + p.second);
  GAME_PTR->entityListeners.erase(event.args.dieArgs.subjectId);
}