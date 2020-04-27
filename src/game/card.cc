//
// Created by Hengruo Zhang on 2/8/20.
//

#include "card.h"
#include "event.h"
#include "action.h"

void Card::beforeGameStarts(RSID playerId, RSID entityId) const {

}
bool Card::playable(const Action &action) const {
  return castable(action);
}
void Card::onCast(Action &action) const {

}
void Card::onDiscard(Action &action) const {

}
void Card::onDie(Action &action) const {

}
void Card::onSummon(Action &action) const {

}
Card::Card(const RSID Id,
           const char *const Name,
           const char *const Description,
           const char *const LevelUpDescription,
           const char *const Code,
           const CardRegion Region,
           const CardRarity Rarity,
           const CardType Type,
           const CardSupType SupType,
           const CardSubType SubType,
           const u64 Keywords,
           const u8 Cost,
           const u8 Attack,
           const u8 Health,
           const bool Collectible,
           const vec<RSID> &AssociatedCards)
    : id(Id), name(Name), description(Description), levelUpDescription(LevelUpDescription), code(Code), region(Region),
      rarity(Rarity), type(Type), supType(SupType), subType(SubType), keywords(Keywords), cost(Cost), attack(Attack),
      health(Health), collectible(Collectible), associatedCards(AssociatedCards) {}

bool Card::castable(const Action &action) const {
  return true;
}
void Card::onPlay(Action &action) const {
  if (type == CardType::UNIT) {
    action.any.type = ActionType::SUMMON;
    onSummon(action);
  }else if(type == CardType::SPELL)
    action.any.type = ActionType::CAST;
}
void Card::onDeclAttack(Action &action) const {

}
void Card::onStrike(Action &action) const {

}
void Card::onSupport(Action &action) const {

}
