//
// Created by Hengruo Zhang on 4/15/20.
//

#include "gallery.h"
#include "initiator.h"
#include "../game/game.h"

void init01SI030T2() {
  CODE_TO_CARD["01SI030T2"]->onDeclAttack = [](Action &action) {
    auto ent = GAME_PTR->ents[action.declAttack.attackerId];
    i8 maxPower = 0;
    Entity strongest;
    for (RSID id : GAME_PTR->players[action.declAttack.playerId]->graveyard) {
      if (GAME_PTR->ents[id].isFollower()) {
        if (GAME_PTR->ents[id].getAttack() > maxPower) {
          maxPower = GAME_PTR->ents[id].getAttack();
          strongest = GAME_PTR->ents[id];
        }
      }
    }
    auto bondee = strongest.getEphemeralCopy();
    // TODO: revive bondee
    auto &front = GAME_PTR->players[action.declAttack.playerId]->frontier;
    if (front.size() < FRONTIER_LIMIT) {
      ent.bond(bondee.getId());
      front.put(bondee.getId());
    } else {
      bondee.beDiscarded();
    }
  };
}
void init01SI030() {
  CODE_TO_CARD["01SI030"]->onSummon = [](Action &action) {
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
      if (el.data[2] >= 4) {
        GAME_PTR->ents[kalistaId].levelUp(88);
        GAME_PTR->evlsnr.erase(kalistaId);
      }
    };
    GAME_PTR->elByEntId[kalistaId].push_back(lid);
  };
  CODE_TO_CARD["01SI030"]->onDie = [](Action &action) {
    RSID kalistaId = action.die.deadId;
    vec<RSID> lids = GAME_PTR->elByEntId[kalistaId].toVec();
    for (auto lid: lids)
      GAME_PTR->evlsnr.erase(lid);
    GAME_PTR->elByEntId.erase(kalistaId);
  };
}