#ifndef RUNESIM_ENTITY_H
#define RUNESIM_ENTITY_H

// Methods in Entity class only modify the internal data instead of fields in other classes.

#include "card.h"
class Entity;
class EntityImpl {
  friend Entity;
private:
  RSID entityId = -1;
  RSID cardId = -1;
  RSID playerId = -1;
  const Card *card = nullptr;
  i8 cost = 0;
  i8 maxHealthInGame = 0;
  i8 maxHealthInRound = 0;
  i8 currentHealth = 0;
  i8 maxAttackInGame = 0;
  i8 maxAttackInRound = 0;
  i8 currentAttack = 0;
  i8 attackPosition = -1;
  u64 enableMask = 0;
  u64 disableMask = 0xFFFFFFFFFFFFFFFF;
  bool silenced = false;
  bool captured = false;
  bool barriered = false;
  bool summoned = false;
  bool discarded = false;
  bool dead = false;
  bool stunned = false;
  bool bonded = false;
  bool isBonder = false;
  RSID capturerId = -1;
  RSID bondedId = -1;
  RSID originalCardId = -1;
public:
  EntityImpl();
  EntityImpl(RSID EntId, RSID CardId, RSID PlayerId);
};

enum class EntityType {
  NEXUS,
  CARD
};

class Entity {
private:
  EntityType type;
  sptr<EntityImpl> content;
  Entity(RSID entId, RSID cardId, RSID playerId);
  void enableBonder(RSID bondeeId);
  void enableBondee(RSID bonderId);
public:
  Entity();
  static Result<Entity> buildAndRegNexus(RSID entityId, RSID playerId);
  static Result<Entity> buildAndRegCard(RSID entityId, RSID cardId, RSID playerId);
  // ================================
  // get the value of a member
  // ================================
  const Card *getCard() const;
  RSID getId() const;
  RSID getPlayerId() const;
  bool isNexus() const;
  bool isCard() const;
  bool isFollower() const;
  bool isChampion() const;
  bool isSpell() const;
  bool isSkill() const;
  bool isTrap() const;
  i8 getHealth() const;
  i8 getAttack() const;
  i8 getAttackPosition() const;
  i8 getCost() const;
  bool isDead() const;
  bool isCaptured() const;
  bool isDiscarded() const;
  bool isSummoned() const;
  bool isStunned() const;
  bool isUnit() const;
  bool isBonder() const;
  bool isBondee() const;
  RSID getBondedId() const;
  RSID getCapturerId() const;
  u64 getKeywords() const;
  str getInfo() const;

  // ================================
  // perform an action
  // methods of Entity class can only modify Entity itself
  // ================================
  Entity getCopy();
  Entity getEphemeralCopy();
  void beHurt(i8 damage);
  void beStunned();
  void beDenied();
  void beDiscarded();
  void gainAttackInRound(i8 offset);
  void gainHealthInRound(i8 offset);
  void loseEffectsInRound();
  void transform(RSID cardId);
  void die();
  void levelUp(RSID cardId);
  bool isCastable(Action &action);
  bool isPlayable(Action &action);
  void bond(RSID bondeeId);
  void quench();
  void enableKeywords(u64 keyword);
  void disableKeywords(u64 keyword);

  void onStartGame(RSID playerId, RSID entityId);
  void onPlay(Action &action);
  void onCast(Action &action);
  void onDiscard(Action &action);
  void onDie(Action &action);
  void onSummon(Action &action);
  void onDeclAttack(Action &action);
  void onStrike(Action &action);
  void onSupport(Action &action);
};

#endif //RUNESIM_ENTITY_H
