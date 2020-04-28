//
// Created by Hengruo Zhang on 4/12/20.
//


#include "gallery.h"
#include "initiator.h"
#include "../game/game.h"

void init01IO049() {
  CODE_TO_CARD["01IO049"]->castable =
      [](Action &action) -> bool {
        auto id = action.play.args[0];
        if (!(GAME_PTR->isInPlay(id)))
          return false;
        auto target = GAME_PTR->ents[id];
        if (target.getCard()->type != CardType::SPELL && target.getCard()->type != CardType::ABILITY)
          return false;
        u64 keywords = target.getCard()->keywords;
        if (target.getCard()->type == CardType::SPELL && CHECK_K_BURST(keywords))
          return false;
        return true;
      };

  CODE_TO_CARD["01IO049"]->onCast = [](Action &action) {
    auto id = action.cast.args[0];
    if (GAME_PTR->isInPlay(id)) {
      auto target = GAME_PTR->ents[id];
      target.beDenied();
    }
  };
}