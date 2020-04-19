//
// Created by Hengruo Zhang on 2/10/20.
//

#include "event.h"
Event::Event(EventType Type, RSID PlayerId) : type(Type), playerId(PlayerId) {}
Event Event::buildGetCardEvent(RSID PlayerId, RSID entityId) {
  EventType type = EventType::GET_CARD;
  Event event(type, PlayerId);
  event.args.getCardArgs.entityId = entityId;
  return event;
}
Event Event::buildLevelUpEvent(RSID PlayerId, RSID subjectId) {
  Event event(EventType::LEVEL_UP, PlayerId);
  event.args.levelUpArgs = LevelUpArgs();
  event.args.levelUpArgs.subjectId = subjectId;
  return event;
}
Event Event::buildDeclAttackEvent(RSID PlayerId, RSID attackerId, i8 postion) {
  Event event(EventType::DECL_ATTACK, PlayerId);
  event.args.declAttackArgs = DeclAttackArgs();
  event.args.declAttackArgs.attackerId = attackerId;
  event.args.declAttackArgs.position = postion;
  return event;
}
