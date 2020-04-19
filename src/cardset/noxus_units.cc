//
// Created by Hengruo Zhang on 4/13/20.
//

#include "gallery.h"
#include "../game/game.h"

void DravensBiggestFan0374::onSummon(Event event) const {
  RSID dravenId = DRAVEN[0];
  RSID dravenId2 = DRAVEN[1];
  if (GAME_PTR->hasSummonedCard(event.playerId, dravenId) || GAME_PTR->hasSummonedCard(event.playerId, dravenId2))
    return;
  if (GAME_PTR->hasCardInHand(event.playerId, dravenId) || GAME_PTR->hasCardInHand(event.playerId, dravenId2))
    return;
  if (GAME_PTR->hasCardInDeck(event.playerId, dravenId))
    GAME_PTR->moveFirstAppearingCardToTop(event.playerId, dravenId);
  else if (GAME_PTR->hasCardInDeck(event.playerId, dravenId2))
    GAME_PTR->moveFirstAppearingCardToTop(event.playerId, dravenId2);
}

void LegionSaboteur0056::onDeclAttack(Event event) const {
  if(GAME_PTR->spellStack.size() < SPELL_SIZE){
    RSID pid = event.playerId;
    Entity sabotage = Entity::buildCard(generateId(), Sabotage0149().id, pid).val();
    GAME_PTR->ents[sabotage.getEntityId()] = sabotage;
    Event castSabotage(EventType::DECL_CAST, pid);
    GAME_PTR->spellStack.push_back(castSabotage);
  }
}

void LonelyPoro0270::onSummon(Event event) const {
  isize poroId = PORO_WITH_1_COST.at(rand(0, PORO_WITH_1_COST.size()-1));
  RSID objId = GAME_PTR->putCardInHand(event.playerId, poroId);

}