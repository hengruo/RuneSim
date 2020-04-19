//
// Created by Hengruo Zhang on 2/9/20.
//

#ifndef RUNESIM_GAME_GAME_H
#define RUNESIM_GAME_GAME_H

#include "entity.h"
#include "event.h"

#define DECK_SIZE 40
#define REGION_SIZE 2
#define HAND_SIZE 10
#define TABLE_SIZE 6
#define FRONTIER_SIZE 6
#define SPELL_SIZE 10

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

  vec<RSID> firstDraw();
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

  static Result<Game *> build(vec<pair<RSID, isize>> &v1, vec<pair<RSID, isize>> &v2);

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
  vec<RSID> replaceFirstDraw(vec<RSID>);
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

  void printObj(RSID entityId);

  virtual ~Game();
};

#endif //RUNESIM_GAME_GAME_H
