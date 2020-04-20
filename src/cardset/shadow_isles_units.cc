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
    ent.bond(bondee.getId());
  }else{
    bondee.beDiscarded();
  }
}

void Kalista0091::onSummon(Event event) const {
  RSID lid = generateId();
  EventListener listener = EventListener::buildAndReg(lid, EventType::DIE);
  RSID kalistaPlayerId = event.playerId;
  RSID kalistaId = event.args.summonArgs.objectId;
  listener.data[0] = kalistaPlayerId;
  listener.data[1] = kalistaId;
  auto func = [=](RSID lid, Event e) {
    auto el = GAME_PTR->evlsnr[lid];
    if (e.type != EventType::DIE || e.playerId != kalistaPlayerId)
      return;
    el.data[2] += 1;
    if(el.data[2] >= 4){
      GAME_PTR->ents[kalistaId].levelUp(88);
      GAME_PTR->evlsnr.erase(kalistaId);
    }
  };
  GAME_PTR->elByEntId[kalistaId].insert(lid);
}

void Kalista0091::onDie(Event event) const {
  RSID kalistaId = event.args.dieArgs.subjectId;
  set<RSID> lids = GAME_PTR->elByEntId[kalistaId];
  for(auto lid: lids)
    GAME_PTR->evlsnr.erase(lid);
}