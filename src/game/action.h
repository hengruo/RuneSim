//
// Created by Hengruo Zhang on 4/22/20.
//

#ifndef RUNESIM_SRC_GAME_ACTION_H
#define RUNESIM_SRC_GAME_ACTION_H
#include "../base/base.h"

#define ACTION_ARG_MAX_NUM 6

enum class ActionType {
  SUMMON,
  CAST,
  DECL_ATTACK,
  DECL_BLOCK
};

class Action {
  ActionType type;

};

#endif //RUNESIM_SRC_GAME_ACTION_H
