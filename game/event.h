//
// Created by Hengruo Zhang on 2/10/20.
//

#ifndef RUNESIM_GAME_EVENT_H
#define RUNESIM_GAME_EVENT_H

#include "event_type.h"
#include "type.h"
class Event {
public:
  EventType type;
  explicit Event(EventType Type);
};

class EventRoundStart:Event{
public:
  EventRoundStart();
};

class EventRoundEnd:Event{
public:
  EventRoundEnd();
};

class EventSummon:Event{
public:
  i64 playerId;
  i64 followerId;
  EventSummon();
  void setPlayerId(const i64 &PlayerId);
  void setFollowerId(const i64 &FollowerId);
};

#endif //RUNESIM_GAME_EVENT_H
