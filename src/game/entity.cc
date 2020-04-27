//
// Created by Hengruo Zhang on 3/29/20.
//

#include "entity.h"
#include "game.h"
#include "../cardset/gallery.h"

EntityImpl::EntityImpl(RSID EntId, RSID CardId, RSID PlayerId)
    : entityId(EntId), cardId(CardId), playerId(PlayerId), card(GALLERY[CardId]) {
  currentHealth = maxHealthInRound = maxHealthInGame = card->health;
  cost = card->cost;
  currentAttack = maxAttackInRound = maxAttackInGame = card->attack;
}
EntityImpl::EntityImpl() {}

Entity::Entity() {
  content = make_shared<EntityImpl>();
}
Entity::Entity(RSID entId, RSID cardId, RSID playerId) {
  content = make_shared<EntityImpl>(entId, cardId, playerId);
}
Result<Entity> Entity::buildAndRegCard(RSID entityId, RSID cardId, RSID playerId) {
  if (GALLERY.find(cardId) == GALLERY.end())
    return Result<Entity>::mkErr(ErrorType::NON_EXISTENT_CARD, "Non-existent card ID: %d.", cardId);
  Entity ent(entityId, cardId, playerId);
  ent.type = EntityType::CARD;
  GAME_PTR->ents[ent.getId()] = ent;
  return Result<Entity>::mkVal(ent);
}
Result<Entity> Entity::buildAndRegNexus(RSID entityId, RSID playerId) {
  Entity nexus;
  nexus.content->playerId = playerId;
  nexus.content->entityId = entityId;
  nexus.content->currentHealth = 20;
  nexus.type = EntityType::NEXUS;
  GAME_PTR->ents[nexus.getId()] = nexus;
  return Result<Entity>::mkVal(nexus);
}

const Card *Entity::getCard() const {
  return content->card;
}
RSID Entity::getId() const {
  return content->entityId;
}
bool Entity::isNexus() const {
  return type == EntityType::NEXUS;
}
bool Entity::isCard() const {
  return type == EntityType::CARD;
}
bool Entity::isDiscarded() const {
  return content->discarded;
}
bool Entity::isDead() const {
  return content->dead;
}
bool Entity::isCaptured() const {
  return content->captured;
}
bool Entity::isSummoned() const {
  return content->summoned;
}
bool Entity::isInAttack() const {
  return content->inAttack;
}
bool Entity::isUnit() const {
  return isCard() && content->card->type == CardType::UNIT;
}
bool Entity::isChampion() const {
  return isCard() && content->card->type == CardType::UNIT && content->card->supType == CardSupType::CHAMPION;
}
bool Entity::isFollower() const {
  return isCard() && content->card->type == CardType::UNIT && content->card->supType != CardSupType::CHAMPION;
}

bool Entity::isSpell() const {
  return isCard() && content->card->type == CardType::SPELL;
}
bool Entity::isSkill() const {
  return isCard() && content->card->type == CardType::ABILITY;
}
bool Entity::isTrap() const {
  return isCard() && content->card->type == CardType::TRAP;
}
bool Entity::isBonder() const {
  return content->bonded && content->isBonder;
}
bool Entity::isBondee() const {
  return content->bonded && !content->isBonder;
}
RSID Entity::getBondedId() const {
  return content->bonded ? content->bondedId : -1;
}
RSID Entity::getCapturerId() const {
  return isCaptured() ? content->capturer : -1;
}
i8 Entity::getAttackPosition() const {
  return content->attackPosition;
}
i8 Entity::getCost() const {
  return content->cost;
}
i8 Entity::getHealth() const {
  if (isNexus())
    return content->currentHealth;
  if (isCard())
    return content->currentHealth;
  return 0;
}
Entity Entity::getCopy() {
  Entity ent = Entity::buildAndRegCard(generateId(), content->cardId, getPlayerId()).val();
  ent.content->currentHealth = ent.content->maxHealthInGame = ent.content->maxHealthInRound = content->maxHealthInGame;
  ent.content->dead = false;
  return ent;
}
Entity Entity::getEphemeralCopy() {
  Entity ent = getCopy();
  ent.content->enableMask = K_EPHEMERAL | ent.content->card->keywords;
  return ent;
}
i8 Entity::getAttack() const {
  return content->currentAttack;
}
u64 Entity::getKeywords() const {
  return content->disableMask & (content->enableMask | getCard()->keywords);
}

void Entity::beHurt(i8 damage) {
  content->currentHealth -= damage;
  if (isNexus() && getHealth() <= 0) {
//    GAME_PTR->end(FLIP(getPlayerId()));
  } else if (isCard() && getHealth() <= 0) {
    die();
  }
}
RSID Entity::getPlayerId() const {
  return content->playerId;
}
void Entity::gainAttackInRound(i8 offset) {
  content->maxAttackInRound += offset;
  content->currentAttack += offset;
}
void Entity::gainHealthInRound(i8 offset) {

}
void Entity::loseEffectsInRound() {
  content->maxHealthInRound = content->maxHealthInGame;
  content->currentHealth = min(content->currentHealth, content->maxHealthInGame);
  content->maxAttackInRound = content->maxAttackInGame;
  content->currentAttack = min(content->currentAttack, content->maxAttackInGame);
  // cost
  content->stunned = false;
}
void Entity::beStunned() {
  content->stunned = true;
}
void Entity::beDenied() {
  content->dead = true;
}
void Entity::beDiscarded() {
  content->dead = true;
  content->discarded = true;
}
void Entity::die() {

}

void Entity::quench() {
  content->dead = true;
}
bool Entity::isCastable(Action &action) {
  if (isDead() || getCard()->type != CardType::SPELL || getCard()->type != CardType::ABILITY)
    return false;
  return getCard()->castable(action);
}
bool Entity::isPlayable(Action &action) {
  if (isDead())
    return false;
  return getCard()->playable(action);
}
void Entity::transform(RSID cardId) {
  content->originalCardId = content->cardId;
  content->cardId = cardId;
  content->card = GALLERY[cardId];
}
void Entity::levelUp(RSID cardId) {
  content->cardId = cardId;
  content->card = GALLERY[cardId];
  Action summon(SummonAction(getPlayerId(), getId()));
  content->card->onSummon(summon);
  if (isInAttack()) {
    Action declAttack(DeclAttackAction(getPlayerId(), getId()));
    content->card->onDeclAttack(declAttack);
  }
}
void Entity::prepareAttack(i8 position) {
  content->inAttack = true;
  content->attackPosition = position;
}
void Entity::quitAttack() {
  content->inAttack = false;
  content->attackPosition = -1;
}
void Entity::enableBonder(RSID bondeeId) {
  content->bonded = true;
  content->isBonder = true;
  content->bondedId = bondeeId;
}
void Entity::enableBondee(RSID bonderId) {
  content->bonded = true;
  content->isBonder = false;
  content->bondedId = bonderId;
}
void Entity::bond(RSID bondeeId) {
  enableBonder(bondeeId);
  auto bondee = GAME_PTR->ents[bondeeId];
  bondee.enableBonder(getId());
}
void Entity::enableKeywords(u64 keyword) {
  content->enableMask |= keyword;
}
void Entity::disableKeywords(u64 keyword) {
  content->disableMask &= (~keyword);
}
str Entity::getInfo() const {
  if (isSpell() || isSkill())
    return format("[%02d] S %s", getId(), content->card->name);
  if (isUnit())
    return format("[%02d] U %02d %02d %s", getId(), getAttack(), getHealth(), content->card->name);
  return format("INVALID ENTITY");
}
void Entity::beforeGameStarts(RSID playerId, RSID entityId) {
  content->card->beforeGameStarts(playerId, entityId);
}
void Entity::onPlay(Action &action) {
  if(content->silenced || content->captured) return;
  content->card->onPlay(action);
}
void Entity::onCast(Action &action) {
  content->card->onCast(action);
  content->dead = true;
}
void Entity::onDiscard(Action &action) {
  content->card->onDiscard(action);
}
void Entity::onDie(Action &action) {
  content->card->onDie(action);
}
void Entity::onSummon(Action &action) {
  if(content->silenced || content->captured) return;
  content->card->onSummon(action);
}
void Entity::onDeclAttack(Action &action) {
  if(content->silenced || content->captured) return;
  content->card->onDeclAttack(action);
}
void Entity::onStrike(Action &action) {
  if(content->silenced || content->captured) return;
  content->card->onStrike(action);
}
void Entity::onSupport(Action &action) {
  if(content->silenced || content->captured) return;
  content->card->onSupport(action);
}
