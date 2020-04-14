//
// Created by Hengruo Zhang on 3/29/20.
//

#include "object.h"
#include "game.h"
ObjectImpl *ObjectImpl::build(RSID objId, RSID cardId, RSID playerId) {
  auto c = new ObjectImpl(objId, cardId, playerId);
  return c;
}
ObjectImpl::ObjectImpl(RSID ObjId, RSID CardId, RSID PlayerId)
    : objId(ObjId), cardId(CardId), playerId(PlayerId), card(gallery[CardId]) {}
const Card *ObjectImpl::getCard() const {
  return card;
}

Object::Object(RSID objId, RSID cardId, RSID playerId) {
  content = make_shared<ObjectImpl>(objId, cardId, playerId);
}
Result<Object> Object::build(RSID objectId, RSID cardId, RSID playerId) {
  if (gallery.find(cardId) == gallery.end())
    return Result<Object>::mkErr(ErrorType::NON_EXISTENT_CARD, "Non-existent card ID: %d.", cardId);
  return Result<Object>::mkVal(Object(objectId, cardId, playerId));
}
Card *Object::getCard() const {
  return const_cast<Card *>(content->getCard());
}
RSID Object::getObjectId() const {
  return content->objId;
}
Object::Object() {}
Result<Object> Object::buildForDeck(RSID objectId, RSID cardId, RSID playerId) {
  if (collectible.find(cardId) == collectible.end())
    return Result<Object>::mkErr(ErrorType::NON_COLLECTIBLE_CARD,
                                 "Card with ID %d is non-existent or non-collectible.",
                                 cardId);
  return Result<Object>::mkVal(Object(objectId, cardId, playerId));
}
bool Object::isNexus() const {
  return type == ObjectType::NEXUS;
}
bool Object::isCard() const {
  return type == ObjectType::CARD;
}
i8 Object::getHealth() const {
  if (isNexus())
    return content->health;
  if (isCard())
    return content->health + content->healthOffInRound;
}
void Object::reduceHealth(i8 offset) {
  if (offset <= content->healthOffInRound)
    content->healthOffInRound -= offset;
  else
    content->health = content->health + content->healthOffInRound - offset;
  if (isNexus() && content->health <= 0) {
    Game::game->end(1 - content->playerId);
  }
}
RSID Object::getPlayerId() const {
  return content->playerId;
}
void Object::addAttackInRound(i8 offset) {
  content->healthOffInRound += offset;
}
void Object::addHealthInRound(i8 offset) {

}
void Object::clearEffectsInRound() {
  content->healthOffInRound = 0;
  content->attackOffInRound = 0;
  content->costOffInRound = 0;
  content->stunned = false;
}
void Object::stun() {
  content->stunned = true;
}
void Object::deny() {
  content->dead = true;
}
void Object::discard() {

}
void Object::die() {

}
bool Object::isDiscarded() const {
  return content->discarded;
}
bool Object::isDead() const {
  return content->dead;
}
bool Object::isDetained() const {
  return content->detained;
}
void Object::finishCasting() {
  content->dead = true;
}
bool Object::isSummoned() const {
  return content->summoned;
}
void Object::cast(Event event) {
  getCard()->onCast(event);
  content->dead = true;
  auto player = Game::game->players[getPlayerId()];
}
void Object::quench() {
  content->dead = true;
}
bool Object::isCastable(Event event) {
  if(isDead() || getCard()->type != CardType::SPELL || getCard()->type != CardType::ABILITY)
    return false;
  return getCard()->castable(event);
}
bool Object::isPlayable(Event event) {
  if(isDead())
    return false;
  return getCard()->playable(event);
}
