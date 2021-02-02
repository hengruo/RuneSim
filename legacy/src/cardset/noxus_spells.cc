#include "gallery.h"
#include "initiator.h"
#include "../game/game.h"

void init01NX043() {
  CODE_TO_CARD["01NX043"]->castable = [](Action &action) {
    auto id = action.cast.args[0];
    return GAME_PTR->isStrikableEntity(id);
  };
  CODE_TO_CARD["01NX043"]->onCast = [](Action &action) {
    Entity obj = GAME_PTR->ents[action.cast.args[0]];
    obj.beHurt(1);
  };
}
void init01NX027() {
  CODE_TO_CARD["01NX027"]->castable = [](Action &action) {
    auto id = action.cast.args[0];
    return GAME_PTR->isAlly(action.cast.playerId, id);
  };
  CODE_TO_CARD["01NX027"]->onCast = [](Action &action) {
    Entity obj = GAME_PTR->ents[action.cast.args[0]];
    obj.gainAttackInRound(3);
  };
}
void init01NX049() {
  CODE_TO_CARD["01NX049"]->castable = [](Action &action) {
    auto id = action.cast.args[0];
    return GAME_PTR->isEnemy(action.cast.playerId, id);
  };
  CODE_TO_CARD["01NX049"]->onCast = [](Action &action) {
    Entity obj = GAME_PTR->ents[action.cast.args[0]];
    obj.beStunned();
  };
}
void init01NX025() {
  CODE_TO_CARD["01NX025"]->onCast = [](Action &action) {
    Entity obj1 = GAME_PTR->ents[action.cast.args[0]];
    Entity obj2 = GAME_PTR->ents[action.cast.args[1]];
    obj1.gainAttackInRound(2);
    obj2.gainAttackInRound(2);
  };
}
void init01NX050() {
  CODE_TO_CARD["01NX050"]->onCast = [](Action &action) {
    for (RSID id : GAME_PTR->players[0]->frontier.getUnits())
      GAME_PTR->ents[id].beHurt(1);
    for (RSID id : GAME_PTR->players[1]->frontier.getUnits())
      GAME_PTR->ents[id].beHurt(1);
  };
}