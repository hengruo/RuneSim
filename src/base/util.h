//
// Created by Hengruo Zhang on 4/3/20.
//

#ifndef RUNESIM_UTIL_H
#define RUNESIM_UTIL_H

#include "type.h"
#include <chrono>

using namespace std::chrono;
static char buffer[1024];
static std::random_device rd;
static std::mt19937 gen(rd());
std::mt19937 getRandomGenerator();
i32 rand(i32 l, i32 r);
void resetId();
RSID generateId();
RSID rsidByTime();
isize log(const char *format, ...);
str format(const char *fmt, ...);

#endif //RUNESIM_UTIL_H
