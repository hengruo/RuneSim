//
// Created by Hengruo Zhang on 4/22/20.
//

#include "action.h"
PlayAction::PlayAction(RSID PlayerId, RSID CardId) : playerId(PlayerId), cardId(CardId) {}
SummonAction::SummonAction(RSID PlayerId, RSID SummoneeId) : playerId(PlayerId), summoneeId(SummoneeId) {}
CastAction::CastAction(RSID PlayerId, RSID SpellId) : playerId(PlayerId), spellId(SpellId) {}
DeclAttackAction::DeclAttackAction(RSID PlayerId, RSID AttackerId, i64 Position, RSID SupportedId)
    : playerId(PlayerId), attackerId(AttackerId), position(Position), supportedId(SupportedId) {}
DeclBlockAction::DeclBlockAction(RSID PlayerId, RSID BlockerId, i64 Position)
    : playerId(PlayerId), blockerId(BlockerId), position(Position) {}
DieAction::DieAction(ActionType Type, RSID PlayerId, RSID DeadId) : type(Type), playerId(PlayerId), deadId(DeadId) {}

Action::Action() {none = NoneAction();}
Action::Action(const CastAction &Cast) : cast(Cast) {}
