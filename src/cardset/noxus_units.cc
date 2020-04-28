//
// Created by Hengruo Zhang on 4/13/20.
//

#include "gallery.h"
#include "initiator.h"
#include "../game/game.h"

void init01NX035() {
  CODE_TO_CARD["01NX035"]->onSummon = [](Action &action) {
    RSID dravenId = DRAVEN[0];
    RSID dravenId2 = DRAVEN[1];
    if (GAME_PTR->hasSummonedCard(action.summon.playerId, dravenId)
        || GAME_PTR->hasSummonedCard(action.summon.playerId, dravenId2))
      return;
    if (GAME_PTR->hasCardInHand(action.summon.playerId, dravenId)
        || GAME_PTR->hasCardInHand(action.summon.playerId, dravenId2))
      return;
    if (GAME_PTR->hasCardInDeck(action.summon.playerId, dravenId))
      GAME_PTR->moveFirstAppearingCardToTop(action.summon.playerId, dravenId);
    else if (GAME_PTR->hasCardInDeck(action.summon.playerId, dravenId2))
      GAME_PTR->moveFirstAppearingCardToTop(action.summon.playerId, dravenId2);
  };
}

void init01FR008() {
  CODE_TO_CARD["01FR008"]->onSummon = [](Action &action) {
    isize poroId = PORO_WITH_1_COST.at(rand(0, PORO_WITH_1_COST.size() - 1));
    RSID objId = GAME_PTR->putCardInHand(action.summon.playerId, poroId);
    // TODO: replace me with Jubilant Poro
  };
}