//
// Created by Hengruo Zhang on 4/24/20.
//

#ifndef RUNESIM_GAME_GAMESTATE_H
#define RUNESIM_GAME_GAMESTATE_H
#include "../base/base.h"

#define FLIP(X) (1 - (X))

struct GameState {
public:
  RSID whoseTurn = -1;
private:
  RSID initiator = -1;
  bool summonedInTurn = false;
  bool putSpellInTurn = false;
  bool respondingSpell = false;
  bool respondingAttack = false;
  bool isAnyBurstSpellCasted = false;
  bool isSlowSpellInStack = false;
  // 0 - no spells or skills in spell stack
  // 1 - putting spells
  // 2 - finish putting spells and wait for the opponent's response.
  // 3 - casting
  i8 castMode = 0;
  // 0 - no units in the frontier
  // 1 - declaring attack
  // 2 - finish declaring attack
  // 3 - declaring blocking
  // 4 - finish declaring blocking
  // 5 - battling
  i8 attackMode = 0;
  i8 passCnt = 0;
public:
  inline bool canSummon(RSID pid) {
    return pid == whoseTurn && !respondingSpell && !summonedInTurn && attackMode == 0;
  }
  inline bool canPutSlowSpell(RSID pid) {
    return pid == whoseTurn && !respondingSpell && attackMode == 0;
  }
  inline bool canPutFastSpell(RSID pid) {
    return pid == whoseTurn;
  }
  inline bool canCastBurstSpell(RSID pid) {
    return pid == whoseTurn && !respondingSpell;
  }
  inline bool canDeclAttack(RSID pid) {
    return pid == whoseTurn && !respondingSpell && !respondingAttack && !isSlowSpellInStack;
  }
  inline bool canDeclBlock(RSID pid) {
    return pid == whoseTurn && !respondingSpell && !isSlowSpellInStack && (attackMode == 2 || attackMode == 3);
  }
  inline bool needsResponse(RSID pid) {
    return pid == whoseTurn && (respondingSpell || respondingAttack);
  }
  inline bool needsRespondingAttack(RSID pid) {
    return pid == whoseTurn && respondingAttack;
  }
  inline bool needsRespondingSpell(RSID pid) {
    return pid == whoseTurn && respondingSpell;
  }
  inline bool didNothingRespondable(RSID pid) {
    if (putSpellInTurn)
      return false;
    if (!respondingSpell && !respondingAttack)
      return !summonedInTurn && attackMode != 1;
    if (respondingAttack)
      return !putSpellInTurn && attackMode != 3;
    return true;
  }
  inline bool declaredAttack(RSID pid){
    return pid == whoseTurn && !respondingAttack && attackMode == 1;
  }
  inline bool declaredBlock(RSID pid){
    return pid == whoseTurn && respondingAttack && attackMode == 3;
  }
  inline bool passedTwice() {
    return passCnt >= 2;
  }
  inline void reset(RSID pid) {
    initiator = -1;
    whoseTurn = pid;
    summonedInTurn = putSpellInTurn = isAnyBurstSpellCasted = isSlowSpellInStack = false;
    respondingSpell = respondingAttack = false;
    castMode = attackMode = 0;
    passCnt = 0;
  }
  inline void pass() {
    isAnyBurstSpellCasted = false;
    summonedInTurn = false;
    passCnt += 1;
    whoseTurn = FLIP(whoseTurn);
  }
  inline void finishTurn() {
    isAnyBurstSpellCasted = false;
    summonedInTurn = false;
    putSpellInTurn = false;
    // just ended battling or casting
    if ((respondingAttack && attackMode == 0) || (respondingSpell && castMode == 0)) {
      respondingSpell = respondingAttack = false;
      passCnt = 0;
      isSlowSpellInStack = false;
      whoseTurn = FLIP(initiator);
      return;
    }
    // just init a spell chain
    if (!respondingSpell && castMode == 1) {
      respondingSpell = true;
      castMode = 2;
    }
    // just declared attack
    if (!respondingAttack && attackMode == 1) {
      respondingAttack = true;
      attackMode = 2;
    }
    // just declared block
    if (respondingAttack && attackMode == 3)
      attackMode = 4;
    // just responded a spell
    if (respondingSpell && castMode == 1)
      castMode = 2;
    whoseTurn = FLIP(whoseTurn);
  }
  inline void summoned(RSID pid) {
    initiator = pid;
    summonedInTurn = true;
  }
  inline void putSkill(RSID pid) {
    putSpellInTurn = true;
    castMode = 1;
  }
  inline void putSlowSpell(RSID pid) {
    initiator = pid;
    putSpellInTurn = true;
    isSlowSpellInStack = true;
    castMode = 1;
  }
  inline void putFastSpell(RSID pid) {
    if (!respondingAttack && !respondingSpell)
      initiator = pid;
    putSpellInTurn = true;
    castMode = 1;
  }
  inline void startCasting() {
    castMode = 3;
  }
  inline void endCasting() {
    castMode = 0;
  }
  inline void startBattling() {
    attackMode = 5;
  }
  inline void endBattling() {
    attackMode = 0;
  }
  inline void castedBurstSpell() {
    isAnyBurstSpellCasted = true;
  }
  inline void declAttack(RSID pid) {
    initiator = pid;
    attackMode = 1;
  }
  inline void declBlock(RSID pid) {
    attackMode = 3;
  }
};

#endif //RUNESIM_GAME_GAMESTATE_H
