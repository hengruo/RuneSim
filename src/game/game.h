//
// Created by Hengruo Zhang on 2/9/20.
//

#ifndef RUNESIM_GAME_GAME_H
#define RUNESIM_GAME_GAME_H

#include "entity.h"
#include "event.h"
#include "event_listener.h"

#define SINGLE_CARD_LIMIT 3
#define REGION_LIMIT 2
#define CHAMPION_LIMIT 6
#define DECK_LIMIT 40
#define HAND_LIMIT 10
#define TABLE_LIMIT 6
#define FRONTIER_LIMIT 6
#define SPELL_STACK_LIMIT 10
#define MAX_MANA 10
#define MAX_SPELL_MANA 3

extern umap<RSID, Card *> GALLERY;

class Player {
public:
  RSID playerId{};
  RSID nexusId;
  i8 nexusHealth = 20;
  i8 unitMana = 0;
  i8 spellMana = 0;
  i8 targetCnt = 0;
  i8 deadAllyCnt = 0;
  i8 deadAllyInRoundCnt = 0;
  bool hasToken = false;
  vec<RSID> deck;
  vec<RSID> hand;
  vec<RSID> table;
  vec<RSID> graveyard;

  static Result<vec<RSID>> buildDeck(const vec<pair<RSID, isize>> &v, RSID pid);
  static Result<sptr<Player>> build(RSID pid, vec<pair<RSID, isize>> &v);
};

enum class GameState{
  INIT,
  AFTER_FIRST_DRAW,
  START_OF_ROUND,
  END_OF_ROUND,
  IN_SLOW_SPELL,
  IN_FAST_SPELL,
  IN_ATTACK_DECLARATION,
  FREE
};

class Game final {
public:
  umap<RSID, Entity> ents;
  umap<RSID, EventListener> evlsnr;
  umap<EventType, set<RSID>> elByType;
  umap<RSID, set<RSID>> elByEntId;
  umap<RSID, set<RSID>> elByCardId;
  sptr<Player> players[2];
  vec<RSID> frontier[2];
  vec<Event> spellStack;
  i32 round = 0;
  GameState state;
  bool attackDone = false;
  RSID winner = -1;
  RSID startingHand = -1;
  RSID starterInRound = -1;
  RSID whosTurn = -1;

  static Result<Game *> build(vec<pair<RSID, isize>> &v1, vec<pair<RSID, isize>> &v2, RSID firstPlayer);
  static Result<void *> checkDeck(vec<pair<RSID, isize>> &v);

  vec<RSID> firstDraw(RSID pid);
  void replaceFirstDraw(RSID pid, vec<RSID> &draw, vec<bool> toRep);
  void putFirstDrawInHandAndShuffleDeck(RSID pid, vec<RSID> &draw);
  void startRound();
  void drawACard(RSID pid);
  bool canSummon(Event event);
  void summon(RSID playerId, RSID entityId);
//  void castBurst(RSID playerId);
//  void declCast(RSID playerId, vec<Event> events);
//  void declAttack(RSID playerId);
//  void declBlock(RSID playerId);
//  void endDeclBlock(RSID playerId);
  void endDeclCast(RSID playerId);
//  void endRound(RSID playerId);

  bool isEnded();
  void end(RSID Winner);

  bool isInHand(RSID playerId, RSID entityId);
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
