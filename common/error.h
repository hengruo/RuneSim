//
// Created by Hengruo Zhang on 4/3/20.
//

#ifndef RUNESIM_COMMON_ERROR_H
#define RUNESIM_COMMON_ERROR_H

#include "type.h"
class Error {
public:
  str message;
  explicit Error(const str &Message);
};

#endif //RUNESIM_COMMON_ERROR_H
