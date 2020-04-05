//
// Created by Hengruo Zhang on 4/3/20.
//

#ifndef RUNESIM_COMMON_RESULT_H
#define RUNESIM_COMMON_RESULT_H

#include "type.h"
#include "util.h"
#include "error.h"
template<typename R>
class Result final {
private:
  optional<R> value;
  Error *error;
  Result(optional<R> Value, Error *Error) : value(Value), error(Error) {}
public:
  inline bool isErr() { return error != nullptr; }
  inline R val() { return value.value(); }
  inline Error *err() { return error; }
  inline void printErr() {log("ERROR: %s\n", (err()->message).c_str());}

  template<typename T>
  Result<T> castErr() { return Result<T>::mkErr(error); }

  static Result mkVal(R v) {
    return Result(v, nullptr);
  }
  static Result mkErr(const char *format, ...) {
    va_list arg;
    va_start(arg, format);
    vsprintf(buffer, format, arg);
    va_end (arg);
    return Result({}, new Error(string(buffer)));
  }
  static Result mkErr(Error *err) {
    return Result({}, err);
  }

  virtual ~Result() {
    if (isErr())
      delete error;
  }
};

#endif //RUNESIM_COMMON_RESULT_H
