//
// Created by Hengruo Zhang on 2/8/20.
//

#include "gallery.h"
#include "card.h"
#include "../game/event.h"

void Card::regWhenGameStarts() {

}
void Card::regWhenPlayed() {

}
void Card::regWhenSummoned() {

}
bool Card::playable(Event event) {
  return castable(event);
}
void Card::onCast(Event event) {

}
void Card::onDiscard(Event event) {

}
void Card::onDie(Event event) {

}
void Card::onSummon(Event event) {

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
           const bool Collectible)
    : id(Id), name(Name), description(Description), levelUpDescription(LevelUpDescription), code(Code), region(Region),
      rarity(Rarity), type(Type), supType(SupType), subType(SubType), keywords(Keywords), cost(Cost), attack(Attack),
      health(Health), collectible(Collectible) {}
bool Card::castable(Event event) {
  return true;
}
void Card::onPlay(Event event) {
  onSummon(event);
}
