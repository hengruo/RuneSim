//
// Created by Hengruo Zhang on 4/22/20.
//

#ifndef RUNESIM_GAME_ACTION_H
#define RUNESIM_GAME_ACTION_H
#include "../base/base.h"

#define ACTION_ARG_MAX_NUM 6

enum class ActionType {
  CAST,
  DECL_ATTACK,
  DECL_BLOCK,
  DIE,
  PLAY,
  SUMMON,
  SUPPORT
};

struct AnyAction {
  ActionType type;
};

struct PlayAction {
  ActionType type = ActionType::PLAY;
  RSID playerId;
  RSID cardId;
  i64 argc;
  RSID args[ACTION_ARG_MAX_NUM];
  PlayAction(RSID PlayerId, RSID CardId);
};

struct SummonAction {
  ActionType type = ActionType::SUMMON;
  RSID playerId;
  RSID summoneeId;
  i64 argc;
  RSID args[ACTION_ARG_MAX_NUM];
  SummonAction(RSID PlayerId, RSID SummoneeId);
};

struct CastAction {
  ActionType type = ActionType::CAST;
  RSID playerId;
  RSID spellId;
  i64 argc;
  RSID args[ACTION_ARG_MAX_NUM];
  CastAction(RSID PlayerId, RSID SpellId);
};

struct DeclAttackAction {
  ActionType type = ActionType::DECL_ATTACK;
  RSID playerId;
  RSID attackerId;
  DeclAttackAction(RSID PlayerId, RSID AttackerId);
};

struct DeclBlockAction {
  ActionType type = ActionType::DECL_BLOCK;
  RSID playerId;
  RSID blockerId;
  DeclBlockAction(RSID PlayerId, RSID BlockerId);
};

struct DieAction {
  ActionType type = ActionType::DIE;
  RSID playerId;
  RSID deadId;
  DieAction(ActionType Type, RSID PlayerId, RSID DeadId);
};

struct SupportAction {
  ActionType type = ActionType::SUPPORT;
  RSID playerId;
  RSID supporterId;
  RSID supporteeId;
  SupportAction(RSID PlayerId, RSID SupporterId, RSID SupporteeId);
};

union Action {
  AnyAction any;
  PlayAction play;
  SummonAction summon;
  SupportAction support;
  CastAction cast;
  DeclAttackAction declAttack;
  DeclBlockAction declBlock;
  DieAction die;
  Action();
  Action(const CastAction &Cast);
  Action(const DeclAttackAction &DeclAttack);
  Action(const PlayAction &Play);
  Action(const SummonAction &Summon);
  Action(const SupportAction &Support);
};

#endif //RUNESIM_GAME_ACTION_H
