#include "event.h"
CastEvent::CastEvent(RSID PlayerId, RSID SpellId) : playerId(PlayerId), spellId(SpellId) {}
DeclAttackEvent::DeclAttackEvent(RSID PlayerId, RSID AttackerId, i8 Position)
    : playerId(PlayerId), attackerId(AttackerId), position(Position) {}
DeclBlockEvent::DeclBlockEvent(RSID PlayerId, RSID AttackerId, i8 Position)
    : playerId(PlayerId), attackerId(AttackerId), position(Position) {}
DieEvent::DieEvent(RSID PlayerId, RSID DeadId) : playerId(PlayerId), deadId(DeadId) {}
DrawCardEvent::DrawCardEvent(RSID PlayerId, RSID IndeckCardId) : playerId(PlayerId), indeckCardId(IndeckCardId) {}
GetCardEvent::GetCardEvent(RSID PlayerId, RSID CardEntityId) : playerId(PlayerId), cardEntityId(CardEntityId) {}
LevelUpEvent::LevelUpEvent(RSID PlayerId, RSID ChampionId) : playerId(PlayerId), championId(ChampionId) {}
NexusStrikeEvent::NexusStrikeEvent(RSID AttackingPlayerId, RSID AttackedNexusId, i64 Damage) : attackingPlayerId(
    AttackingPlayerId), attackedNexusId(AttackedNexusId), damage(Damage) {}
PlayEvent::PlayEvent(RSID PlayerId, RSID InhandCardId) : playerId(PlayerId), inhandCardId(InhandCardId) {}
PutSpell::PutSpell(RSID PlayerId, RSID SpellId) : playerId(PlayerId), spellId(SpellId) {}
StartRoundEvent::StartRoundEvent(i32 Round) : round(Round) {}
StrikeEvent::StrikeEvent(RSID PlayerId, RSID StrikerId) : playerId(PlayerId), strikerId(StrikerId) {}
SummonEvent::SummonEvent(RSID PlayerId, RSID SummoneeId) : playerId(PlayerId), summoneeId(SummoneeId) {}
TargetEvent::TargetEvent(RSID PlayerId, RSID TargetedId) : playerId(PlayerId), targetedId(TargetedId) {}
Event::Event(const LevelUpEvent &LevelUp) : levelUp(LevelUp) {}
Event::Event(const AnyEvent &Any) : any(Any) {}
Event::Event(const CastEvent &Cast) : cast(Cast) {}
Event::Event(const DeclAttackEvent &DeclAttack) : declAttack(DeclAttack) {}
Event::Event(const DeclBlockEvent &DeclBlock) : declBlock(DeclBlock) {}
Event::Event(const DieEvent &Die) : die(Die) {}
Event::Event(const DrawCardEvent &DrawCard) : drawCard(DrawCard) {}
Event::Event(const EndRoundEvent &EndRound) : endRound(EndRound) {}
Event::Event(const EnlightenEvent &Enlighten) : enlighten(Enlighten) {}
Event::Event(const GetCardEvent &GetCard) : getCard(GetCard) {}
Event::Event(const NexusStrikeEvent &NexusStrike) : nexusStrike(NexusStrike) {}
Event::Event(const PlayEvent &Play) : play(Play) {}
Event::Event(const PutSpell &PutSpell) : putSpell(PutSpell) {}
Event::Event(const StartRoundEvent &StartRound) : startRound(StartRound) {}
Event::Event(const StrikeEvent &Strike) : strike(Strike) {}
Event::Event(const SummonEvent &Summon) : summon(Summon) {}
Event::Event(const TargetEvent &Target) : target(Target) {}
