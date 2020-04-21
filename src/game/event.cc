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
Event Event::buildStartRoundEvent(RSID PlayerId, i32 round) {
  Event event(EventType::START_ROUND, PlayerId);
  event.args.startRoundArgs = StartRoundArgs();
  event.args.startRoundArgs.round = round;
  return event;
}
Event Event::buildDrawCardEvent(RSID PlayerId, RSID entityId) {
  EventType type = EventType::DRAW_CARD;
  Event event(type, PlayerId);
  event.args.drawCardArgs.entityId = entityId;
  return event;
}
Event Event::buildSummonEvent(RSID PlayerId, RSID summonee, i8 num, RSID args[]) {
  Event event(EventType::SUMMON, PlayerId);
  event.args.summonArgs.objectId = summonee;
  event.args.summonArgs.argObjNum = num;
  memcpy(event.args.summonArgs.argObjIds, args, num * sizeof(RSID));
  return event;
}
