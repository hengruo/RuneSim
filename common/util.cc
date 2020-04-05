//
// Created by Hengruo Zhang on 4/3/20.
//

#include "util.h"

rsid rsidByTime() {
  return duration_cast<nanoseconds>(std::chrono::high_resolution_clock::now().time_since_epoch()).count();
}

isize log(const char *format, ...) {
  va_list arg;
  va_start(arg, format);
  isize n = vprintf(format, arg);
  va_end (arg);
  return n;
}
i32 rand(i32 l, i32 r) {
  std::uniform_int_distribution<> dis(l, r);
  return dis(gen);
}
