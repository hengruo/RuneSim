#include "util.h"
#include <cstdio>

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

str format(const char *fmt, ...) {
  va_list arg;
  va_start(arg, fmt);
  vsprintf(buffer, fmt, arg);
  va_end (arg);
  return str(buffer);
}

str padLeft(str input, str val, int objLen) {
  isize inLen = input.size();
  isize valLen = input.size();
  i32 times = (objLen - inLen) % valLen == 0 ? (objLen - inLen) / valLen : (objLen - inLen) / valLen + 1;
  isize outLen = times * valLen + inLen;
  const char *input_cstr = input.c_str();
  const char *val_cstr = val.c_str();
  char *buffer = new char[outLen + 1];
  for (i32 i = 0; i < times; i++)
    std::memcpy(buffer + i * valLen, val_cstr, valLen);
  std::memcpy(buffer + times * valLen, input_cstr, inLen + 1);
  str res(buffer);
  delete[] buffer;
  return res;
}