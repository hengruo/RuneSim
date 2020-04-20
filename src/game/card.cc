//
// Created by Hengruo Zhang on 2/8/20.
//

#include "card.h"
#include "event.h"

void Card::beforeGameStarts(RSID playerId, RSID entityId) {

}
bool Card::playable(Event event) const {
  return castable(event);
}
void Card::onCast(Event event) const {

}
void Card::onDiscard(Event event) const {

}
void Card::onDie(Event event) const {

}
void Card::onSummon(Event event) const {

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

bool Card::castable(Event event) const {
  return true;
}
void Card::onPlay(Event event) const {
  if (type == CardType::UNIT)
    onSummon(event);
}
void Card::onDeclAttack(Event event) const {

}
