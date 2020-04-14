//
// Created by Hengruo Zhang on 3/29/20.
//

#ifndef RUNESIM_GAME_OBJECT_H
#define RUNESIM_GAME_OBJECT_H

#include "../card/gallery.h"

class ObjectImpl {
private:
  const Card *card = nullptr;
public:
  RSID objId{};
  RSID cardId{};
  RSID playerId{};
  i8 cost = 0;
  i8 attack = 0;
  i8 health = 0;
  i8 costOffInRound = 0;
  i8 attackOffInRound = 0;
  i8 healthOffInRound = 0;
  u64 keywordsMask = 0;
  bool summoned = false;
  bool purified = false;
  bool detained = false;
  bool barriered = false;
  bool discarded = false;
  bool dead = false;
  bool stunned = false;

  ObjectImpl(RSID ObjId, RSID CardId, RSID PlayerId);

  static ObjectImpl *build(RSID objId, RSID cardId, RSID PlayerId);
  [[nodiscard]] const Card *getCard() const;
};

enum class ObjectType {
  NEXUS,
  CARD
};

class Object {
private:
  ObjectType type;
  sptr<ObjectImpl> content;
public:
  Object();
private:
  Object(RSID objId, RSID cardId, RSID playerId);
public:
  static Result<Object> build(RSID objectId, RSID cardId, RSID playerId);
  static Result<Object> buildForDeck(RSID objectId, RSID cardId, RSID playerId);
  [[nodiscard]] Card *getCard() const;
  RSID getObjectId() const;
  bool isNexus() const;
  bool isCard() const;
  i8 getHealth() const;
  RSID getPlayerId() const;
  void reduceHealth(i8 offset);
  void addAttackInRound(i8 offset);
  void addHealthInRound(i8 offset);
  void clearEffectsInRound();
  void stun();
  void deny();
  void discard();
  bool isDiscarded() const;
  bool isSummoned() const;
  void die();
  void finishCasting();
  bool isDead() const;
  bool isDetained() const;
  bool isCastable(Event event);
  bool isPlayable(Event event);
  void cast(Event event);
  void quench();
};

#endif //RUNESIM_GAME_OBJECT_H
