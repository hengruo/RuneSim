//
// Created by Hengruo Zhang on 2/9/20.
//

#ifndef RUNESIM_GAME_GAME_H
#define RUNESIM_GAME_GAME_H

#include "entity.h"
#include "event.h"

#define SINGLE_CARD_LIMIT 3
#define REGION_LIMIT 2
#define CHAMPION_LIMIT 6
#define DECK_LIMIT 40
#define HAND_LIMIT 10
#define TABLE_LIMIT 6
#define FRONTIER_LIMIT 6
#define SPELL_STACK_LIMIT 10

extern umap<RSID, Card *> GALLERY;

class Player {
public:
  RSID playerId{};
  RSID nexusId;
  i8 nexusHealth = 20;
  u8 unitMana = 0;
  u8 spellMana = 0;
  u8 targetCnt = 0;
  u8 deadAllyCnt = 0;
  u8 deadAllyInRoundCnt = 0;
  bool inAttack = false;
  vec<RSID> deck;
  vec<RSID> hand;
  vec<RSID> table;
  vec<RSID> graveyard;

  static Result<vec<RSID>> buildDeck(const vec<pair<RSID, isize>> &v, RSID pid);
  static Result<sptr<Player>> build(RSID pid, vec<pair<RSID, isize>> &v);
};

class Game final {
public:
  umap<RSID, Entity> ents;
  umap<EventType, vec<EventListener>> listeners;
  umap<RSID, pair<EventType, isize>> entityListeners;
  sptr<Player> players[2];
  vec<RSID> frontier[2];
  vec<Event> spellStack;
  RSID winner = -1;
  RSID firstPlayer = -1;

  static Result<Game *> build(vec<pair<RSID, isize>> &v1, vec<pair<RSID, isize>> &v2, RSID firstPlayer);
  static Result<void *> checkDeck(vec<pair<RSID, isize>> &v);

//  void castBurst(RSID playerId);
//  void declCast(RSID playerId, vec<Event> events);
//  void declAttack(RSID playerId);
//  void declBlock(RSID playerId);
//  void endDeclBlock(RSID playerId);
  void endDeclCast(RSID playerId);
//  void endRound(RSID playerId);
//  void summon(RSID playerId);

  bool isEnded();
  void end(RSID Winner);
  vec<RSID> firstDraw(RSID pid);
  void replaceFirstDraw(RSID pid, vec<RSID> &draw, vec<bool> toRep);
  void putFirstDrawInHand(RSID pid, vec<RSID> &draw);
  void startRound();
  bool canDoSth(RSID pid);
  vec<RSID> showHand(RSID pid);

  bool cast(RSID pid, RSID handId, vec<RSID> args);
  bool pass(RSID pid);
  bool isObjInGameView(RSID entityId);
  bool isDestructibleObjInGameView(RSID entityId);
  bool isAlly(RSID playerId, RSID entityId);
  bool isEnemy(RSID playerId, RSID entityId);
  bool isUnitInGameView(RSID entityId);
  bool isFollowerInGameView(RSID entityId);
  bool hasSummonedCard(RSID playerId, RSID cardId);
  bool hasCardInHand(RSID playerId, RSID cardId);
  bool hasCardInDeck(RSID playerId, RSID cardId);
  void moveFirstAppearingCardToTop(RSID playerId, RSID cardId);

  // Return the entityId
  RSID putCardInHand(RSID playerId, RSID cardId);
  RSID summonAUnitOnTable(RSID playerId, RSID cardId);
  RSID summonAUnitInAttack(RSID playerId, RSID cardId);

  void trigger(Event event);

  void printEntity(RSID entityId);

  virtual ~Game();
};

#endif //RUNESIM_GAME_GAME_H
