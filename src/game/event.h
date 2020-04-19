//
// Created by Hengruo Zhang on 2/10/20.
//

#ifndef RUNESIM_GAME_EVENT_H
#define RUNESIM_GAME_EVENT_H
#include "../base/base.h"

#define EVENT_ARG_MAX_NUM 6
// Event can be classified to two categories:
// 1. Player triggered:
// 2. Card triggered:
enum class EventType {
  ROUND_START,
  ROUND_END,
  SUMMON,
  GET_CARD,
  DIE,
  DECL_ATTACK,
  ATTACK,
  BLOCK,
  GET_HURT,
  ENLIGHTEN,
  LEVEL_UP,
  USE_MANA,
  GAIN_MANA,
  DECL_CAST,
  CAST,
  STRIKE,
  TARGET,
  STUN,
  RECALL,
  GAME_END
};

struct CastArgs{
  RSID objectId;
  u8 argObjNum;
  RSID argObjIds[EVENT_ARG_MAX_NUM];
};
struct SummonArgs{
  RSID objectId;
  u8 argObjNum;
  RSID argObjIds[EVENT_ARG_MAX_NUM];
};
struct GetCardArgs{
  RSID entityId;
};
struct DieArgs{
  RSID subjectId;
};
struct LevelUpArgs{
  RSID subjectId;
};
struct DeclAttackArgs{
  RSID attackerId;
  i8 position;
};
struct KVArgs{
  RSID subject;
  u8 kvNum;
  RSID keys[EVENT_ARG_MAX_NUM/2];
  i64 vals[EVENT_ARG_MAX_NUM/2];
};
union EventArgs{
  CastArgs castArgs;
  SummonArgs summonArgs;
  DieArgs dieArgs;
  GetCardArgs getCardArgs;
  LevelUpArgs levelUpArgs;
  DeclAttackArgs declAttackArgs;
  KVArgs kvArgs;
};

class Event {
public:
  EventType type;
  RSID playerId;
  EventArgs args;
  Event(EventType Type, RSID PlayerId);
  static Event buildGetCardEvent(RSID PlayerId, RSID entityId);
  static Event buildLevelUpEvent(RSID PlayerId, RSID subjectId);
  static Event buildDeclAttackEvent(RSID PlayerId, RSID attackerId, i8 postion);
};

typedef function<void(Event)> EventListener;

#endif //RUNESIM_GAME_EVENT_H
