//
// Created by Hengruo Zhang on 2/10/20.
//

#include "event.h"
Event::Event(EventType Type) : type(Type) {}

EventRoundStart::EventRoundStart() : Event(EventType::ROUND_START) {}

EventRoundEnd::EventRoundEnd() : Event(EventType::ROUND_END) {}

EventSummon::EventSummon() : Event(EventType::SUMMON) {}
void EventSummon::setPlayerId(const i64 &PlayerId) {
  playerId = PlayerId;
}
void EventSummon::setFollowerId(const i64 &FollowerId) {
  followerId = FollowerId;
}
