//
// Created by Hengruo Zhang on 4/3/20.
//

#include "util.h"

static RSID id = 0;

RSID rsidByTime() {
  return duration_cast<nanoseconds>(std::chrono::high_resolution_clock::now().time_since_epoch()).count();
}

RSID generateId() {
  return id++;
}

isize log(const char *format, ...) {
  va_list arg;
  va_start(arg, format);
  isize n = vprintf(format, arg);
  va_end (arg);
  printf("\n");
  return n;
}

// random number x: l <= x <= r
i32 rand(i32 l, i32 r) {
  std::uniform_int_distribution<> dis(l, r);
  return dis(gen);
}

std::mt19937 getRandomGenerator() {
  return gen;
}
void resetId() {
  id = 0;
}
