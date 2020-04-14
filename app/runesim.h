//
// Created by Hengruo Zhang on 4/2/20.
//

#ifndef RUNESIM__RUNESIM_H
#define RUNESIM__RUNESIM_H

#include "common.h"
#include "gallery.h"
#include "game.h"
#include "operation.h"
#include "view.h"

class Request {
public:
  RSID playerId;
  Operation op;
};

class Response {
public:
  Operation op;
  View view;
};

#endif //RUNESIM__RUNESIM_H
