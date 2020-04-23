//
// Created by Hengruo Zhang on 4/15/20.
//

#include "gallery.h"
#include "../game/game.h"

void Kalista0088::onDeclAttack(Action &action) const {
  auto ent = GAME_PTR->ents[action.declAttack.attackerId];
  i8 maxPower = 0;
  Entity strongest;
  for(RSID id : GAME_PTR->players[action.declAttack.playerId]->graveyard){
    if(GAME_PTR->ents[id].isFollower()){
      if(GAME_PTR->ents[id].getAttack() > maxPower){
        maxPower = GAME_PTR->ents[id].getAttack();
        strongest = GAME_PTR->ents[id];
      }
    }
  }
  auto bondee = strongest.getEphemeralCopy();
  auto & front = GAME_PTR->frontier[action.declAttack.playerId];
  if(front.size()<FRONTIER_LIMIT){
    bondee.prepareAttack(front.size()-1);
    ent.bond(bondee.getId());
  }else{
    bondee.beDiscarded();
  }
}

void Kalista0091::onSummon(Action &action) const {
  RSID lid = generateId();
  EventListener listener = EventListener::buildAndReg(lid, EventType::DIE);
  RSID kalistaPlayerId = action.summon.playerId;
  RSID kalistaId = action.summon.summoneeId;
  listener.data[0] = kalistaPlayerId;
  listener.data[1] = kalistaId;
  auto func = [=](RSID lid, Event e) {
    auto el = GAME_PTR->evlsnr[lid];
    if (e.any.type != EventType::DIE || e.die.playerId != kalistaPlayerId)
      return;
    el.data[2] += 1;
    if(el.data[2] >= 4){
      GAME_PTR->ents[kalistaId].levelUp(88);
      GAME_PTR->evlsnr.erase(kalistaId);
    }
  };
  GAME_PTR->elByEntId[kalistaId].insert(lid);
}

void Kalista0091::onDie(Action &action) const {
  RSID kalistaId = action.die.deadId;
  set<RSID> lids = GAME_PTR->elByEntId[kalistaId];
  for(auto lid: lids)
    GAME_PTR->evlsnr.erase(lid);
}