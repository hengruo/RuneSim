//
// Created by Hengruo Zhang on 2/10/20.
//

#ifndef RUNESIM_GAME_EVENT_H
#define RUNESIM_GAME_EVENT_H
#include "../base/base.h"

#define EVENT_MAX_SIZE 6
// Event can be classified to two categories:
// 1. Player triggered:
// 2. Card triggered:
enum class EventType {
  ATTACK,
  BLOCK,
  CAST,
  DECL_ATTACK,
  DECL_BLOCK,
  DECL_CAST,
  DIE,
  DRAW_CARD,
  END_ROUND,
  ENLIGHTEN,
  GAIN_MANA,
  GAME_END,
  GET_CARD,
  GET_HURT,
  LEVEL_UP,
  NEXUS_STRIKE,
  PLAY,
  RECALL,
  START_ROUND,
  STRIKE,
  STUN,
  SUMMON,
  TARGET,
  USE_MANA
};
struct AnyEvent {
  EventType type;
  i64 data[EVENT_MAX_SIZE];
};
struct DeclAttackEvent {
  EventType type = EventType::DECL_ATTACK;
  RSID playerId;
  RSID attackerId;
  i8 position;
  DeclAttackEvent(RSID PlayerId, RSID AttackerId, i8 Position);
};
struct DeclCastEvent {
  EventType type = EventType::DECL_CAST;
  RSID playerId;
  RSID spellId;
  // 0 - spell; 1 - skill.
  i8 cardType = 0;
  DeclCastEvent(RSID PlayerId, RSID SpellId);
};
struct DieEvent {
  EventType type = EventType::DIE;
  RSID playerId;
  RSID deadId;
  DieEvent(RSID PlayerId, RSID DeadId);
};
struct DrawCardEvent {
  EventType type = EventType::DRAW_CARD;
  RSID playerId;
  RSID indeckCardId;
  DrawCardEvent(RSID PlayerId, RSID IndeckCardId);
};
struct EndRoundEvent{
  EventType type = EventType::END_ROUND;
};
struct EnlightenEvent{
  EventType type = EventType::ENLIGHTEN;
};
struct GetCardEvent {
  EventType type = EventType::GET_CARD;
  RSID playerId;
  RSID cardEntityId;
  GetCardEvent(RSID PlayerId, RSID CardEntityId);
};
struct LevelUpEvent {
  EventType type = EventType::LEVEL_UP;
  RSID playerId;
  RSID championId;
  LevelUpEvent(RSID PlayerId, RSID ChampionId);
};
struct NexusStrikeEvent {
  EventType type = EventType::NEXUS_STRIKE;
  RSID attackingPlayerId;
  RSID attackedNexusId;
  i64 damage;
  NexusStrikeEvent(RSID AttackingPlayerId, RSID AttackedNexusId, i64 Damage);
};
struct PlayEvent {
  EventType type = EventType::PLAY;
  RSID playerId;
  RSID inhandCardId;
  PlayEvent(RSID PlayerId, RSID InhandCardId);
};
struct StartRoundEvent {
  EventType type = EventType::START_ROUND;
  i32 round;
  StartRoundEvent(i32 Round);
};
struct SummonEvent {
  EventType type = EventType::SUMMON;
  RSID playerId;
  RSID summoneeId;
  SummonEvent(RSID PlayerId, RSID SummoneeId);
};
struct TargetEvent {
  EventType type = EventType::TARGET;
  RSID playerId;
  RSID targetedId;
  TargetEvent(RSID PlayerId, RSID TargetedId);
};

union Event {
  AnyEvent any;
  DeclAttackEvent declAttack;
  DeclCastEvent declCast;
  DieEvent die;
  DrawCardEvent drawCard;
  EndRoundEvent endRound;
  EnlightenEvent enlighten;
  GetCardEvent getCard;
  LevelUpEvent levelUp;
  NexusStrikeEvent nexusStrike;
  PlayEvent play;
  StartRoundEvent startRound;
  SummonEvent summon;
  TargetEvent target;
  Event(const AnyEvent &Any);
  Event(const DeclAttackEvent &DeclAttack);
  Event(const DeclCastEvent &DeclCast);
  Event(const DieEvent &Die);
  Event(const DrawCardEvent &DrawCard);
  Event(const EndRoundEvent &EndRound);
  Event(const EnlightenEvent &Enlighten);
  Event(const GetCardEvent &GetCard);
  Event(const LevelUpEvent &LevelUp);
  Event(const NexusStrikeEvent &NexusStrike);
  Event(const PlayEvent &Play);
  Event(const StartRoundEvent &StartRound);
  Event(const SummonEvent &Summon);
  Event(const TargetEvent &Target);
};

#endif //RUNESIM_GAME_EVENT_H
