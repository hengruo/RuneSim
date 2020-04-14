//
// Created by Hengruo Zhang on 2/10/20.
//

#ifndef RUNESIM_GAME_EVENT_H
#define RUNESIM_GAME_EVENT_H
#include "../card/card.h"
#include <functional>

#define EVENT_OBJ_MAX_NUM 6

enum class EventType {
  ROUND_START,
  ROUND_END,
  SUMMON,
  DIE,
  ATTACK,
  BLOCK,
  GET_HURT,
  ENLIGHTEN,
  USE_MANA,
  GAIN_MANA,
  CAST_SPELL,
  STRIKE,
  TARGET,
  STUN,
  RECALL,
  GAME_END
};

struct ListArgs{
  RSID subject;
  u8 objNum;
  RSID objects[EVENT_OBJ_MAX_NUM];
};
struct KVArgs{
  RSID subject;
  u8 kvNum;
  RSID keys[EVENT_OBJ_MAX_NUM/2];
  i64 vals[EVENT_OBJ_MAX_NUM/2];
};
union EventArgs{
  ListArgs listArgs;
  KVArgs kvArgs;
};

class Event {
public:
  EventType type;
  RSID playerId;
  EventArgs args;
  explicit Event(EventType Type);
};

typedef function<void(Event)> EventListener;

#endif //RUNESIM_GAME_EVENT_H
