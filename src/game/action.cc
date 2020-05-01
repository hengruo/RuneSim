//
// Created by Hengruo Zhang on 4/22/20.
//

#include "action.h"
CastAction::CastAction(RSID PlayerId, RSID SpellId) : playerId(PlayerId), spellId(SpellId) {}
DeclAttackAction::DeclAttackAction(RSID PlayerId, RSID AttackerId) : playerId(PlayerId), attackerId(AttackerId) {}
DeclBlockAction::DeclBlockAction(RSID PlayerId, RSID BlockerId, i8 Pos) : playerId(PlayerId), blockerId(BlockerId), pos(Pos) {}
DieAction::DieAction(RSID PlayerId, RSID DeadId) : playerId(PlayerId), deadId(DeadId) {}
PlayAction::PlayAction(RSID PlayerId, RSID CardId) : playerId(PlayerId), cardId(CardId) {}
SummonAction::SummonAction(RSID PlayerId, RSID SummoneeId) : playerId(PlayerId), summoneeId(SummoneeId) { argc = 0; }
SupportAction::SupportAction(RSID PlayerId, RSID SupporterId, RSID SupporteeId)
    : playerId(PlayerId), supporterId(SupporterId), supporteeId(SupporteeId) {}
StrikeAction::StrikeAction(RSID PlayerId, RSID StrikerId) : playerId(PlayerId), strikerId(StrikerId) {}

Action::Action() { any = AnyAction(); }
Action::Action(const CastAction &Cast) : cast(Cast) {}
Action::Action(const DeclAttackAction &DeclAttack) : declAttack(DeclAttack) {}
Action::Action(const DieAction &Die) : die(Die) {}
Action::Action(const PlayAction &Play) : play(Play) {}
Action::Action(const SummonAction &Summon) : summon(Summon) {}
Action::Action(const SupportAction &Support) : support(Support) {}
Action::Action(const StrikeAction &Strike) : strike(Strike) {}
