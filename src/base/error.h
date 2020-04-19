//
// Created by Hengruo Zhang on 4/3/20.
//

#ifndef RUNESIM_COMMON_ERROR_H
#define RUNESIM_COMMON_ERROR_H

#include "type.h"

enum class ErrorType {
  _,
  INVALID_DECK,
  NON_EXISTENT_CARD,
  NON_COLLECTIBLE_CARD
};

class Error {
public:
  ErrorType type;
  str message;
  Error();
  Error(ErrorType Type, const str &Message);
};

#endif //RUNESIM_COMMON_ERROR_H
