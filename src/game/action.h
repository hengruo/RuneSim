//
// Created by Hengruo Zhang on 4/22/20.
//

#ifndef RUNESIM_SRC_GAME_ACTION_H
#define RUNESIM_SRC_GAME_ACTION_H
#include "../base/base.h"

#define ACTION_ARG_MAX_NUM 6

enum class ActionType {
  NONE,
  PLAY,
  SUMMON,
  CAST,
  DECL_ATTACK,
  DECL_BLOCK,
  DIE
};

struct NoneAction {
  i64 data[10];
};

struct PlayAction {
  ActionType type = ActionType::PLAY;
  RSID playerId;
  RSID cardId;
  i8 argc;
  RSID args[ACTION_ARG_MAX_NUM];
  PlayAction(RSID PlayerId, RSID CardId);
};

struct SummonAction {
  ActionType type = ActionType::SUMMON;
  RSID playerId;
  RSID summoneeId;
  i8 argc;
  RSID args[ACTION_ARG_MAX_NUM];
  SummonAction(RSID PlayerId, RSID SummoneeId);
};

struct CastAction {
  ActionType type = ActionType::CAST;
  RSID playerId;
  RSID spellId;
  i8 argc;
  RSID args[ACTION_ARG_MAX_NUM];
  CastAction(RSID PlayerId, RSID SpellId);
};

struct DeclAttackAction {
  ActionType type = ActionType::DECL_ATTACK;
  RSID playerId;
  RSID attackerId;
  i64 position;
  RSID supportedId;
  DeclAttackAction(RSID PlayerId, RSID AttackerId, i64 Position, RSID SupportedId);
};

struct DeclBlockAction {
  ActionType type = ActionType::DECL_BLOCK;
  RSID playerId;
  RSID blockerId;
  i64 position;
  DeclBlockAction(RSID PlayerId, RSID BlockerId, i64 Position);
};

struct DieAction {
  ActionType type = ActionType::DIE;
  RSID playerId;
  RSID deadId;
  DieAction(ActionType Type, RSID PlayerId, RSID DeadId);
};

union Action {
  NoneAction none;
  PlayAction play;
  SummonAction summon;
  CastAction cast;
  DeclAttackAction declAttack;
  DeclBlockAction declBlock;
  DieAction die;
  Action();
  Action(const CastAction &Cast);
};

#endif //RUNESIM_SRC_GAME_ACTION_H
