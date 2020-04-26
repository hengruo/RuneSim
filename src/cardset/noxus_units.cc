//
// Created by Hengruo Zhang on 4/13/20.
//

#include "gallery.h"
#include "../game/game.h"

void DravensBiggestFan0374::onSummon(Action &action) const {
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
}

void LegionSaboteur0056::onDeclAttack(Action &action) const {
  RSID pid = action.summon.playerId;
  Entity sabotage = Entity::buildAndRegCard(generateId(), Sabotage0149().id, pid).val();
  GAME_PTR->ents[sabotage.getId()] = sabotage;
  Action cast(CastAction(pid, sabotage.getId()));
  GAME_PTR->putSkill(cast);
}

void LonelyPoro0270::onSummon(Action &action) const {
  isize poroId = PORO_WITH_1_COST.at(rand(0, PORO_WITH_1_COST.size() - 1));
  RSID objId = GAME_PTR->putCardInHand(action.summon.playerId, poroId);

}