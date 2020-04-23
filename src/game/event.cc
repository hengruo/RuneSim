//
// Created by Hengruo Zhang on 2/10/20.
//

#include "event.h"
DeclAttackEvent::DeclAttackEvent(RSID PlayerId, RSID AttackerId, i8 Position)
    : playerId(PlayerId), attackerId(AttackerId), position(Position) {}
DeclCastEvent::DeclCastEvent(RSID PlayerId, RSID SpellId) : playerId(PlayerId), spellId(SpellId) {}
DieEvent::DieEvent(RSID PlayerId, RSID DeadId) : playerId(PlayerId), deadId(DeadId) {}
DrawCardEvent::DrawCardEvent(RSID PlayerId, RSID IndeckCardId) : playerId(PlayerId), indeckCardId(IndeckCardId) {}
GetCardEvent::GetCardEvent(RSID PlayerId, RSID CardEntityId) : playerId(PlayerId), cardEntityId(CardEntityId) {}
LevelUpEvent::LevelUpEvent(RSID PlayerId, RSID ChampionId) : playerId(PlayerId), championId(ChampionId) {}
PlayEvent::PlayEvent(RSID PlayerId, RSID InhandCardId) : playerId(PlayerId), inhandCardId(InhandCardId) {}
StartRoundEvent::StartRoundEvent(i32 Round) : round(Round) {}
SummonEvent::SummonEvent(RSID PlayerId, RSID SummoneeId) : playerId(PlayerId), summoneeId(SummoneeId) {}
TargetEvent::TargetEvent(RSID PlayerId, RSID TargetedId) : playerId(PlayerId), targetedId(TargetedId) {}
Event::Event(const LevelUpEvent &LevelUp) : levelUp(LevelUp) {}
Event::Event(const AnyEvent &Any) : any(Any) {}
Event::Event(const DeclAttackEvent &DeclAttack) : declAttack(DeclAttack) {}
Event::Event(const DeclCastEvent &DeclCast) : declCast(DeclCast) {}
Event::Event(const DieEvent &Die) : die(Die) {}
Event::Event(const DrawCardEvent &DrawCard) : drawCard(DrawCard) {}
Event::Event(const GetCardEvent &GetCard) : getCard(GetCard) {}
Event::Event(const PlayEvent &Play) : play(Play) {}
Event::Event(const StartRoundEvent &StartRound) : startRound(StartRound) {}
Event::Event(const SummonEvent &Summon) : summon(Summon) {}
Event::Event(const TargetEvent &Target) : target(Target) {}
