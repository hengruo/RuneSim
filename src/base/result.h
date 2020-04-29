//
// Created by Hengruo Zhang on 4/3/20.
//

#ifndef RUNESIM_RESULT_H
#define RUNESIM_RESULT_H

#include "type.h"
#include "util.h"
#include "error.h"

template<typename R>
class Result final {
private:
  std::optional<R> value;
  sptr<Error> error;
  Result(std::optional<R> Value, sptr<Error> Error) : value(Value), error(Error) {}
public:
  inline bool isErr() { return error != nullptr; }
  inline R val() { return value.value(); }
  inline sptr<Error> err() { return error; }
  inline void printErr() {log("ERROR: %s\n", (err()->message).c_str());}

  template<typename T>
  Result<T> castErr() { return Result<T>::mkErr(error); }

  static Result mkVal(R v) {
    return Result(v, nullptr);
  }
  static Result mkErr(ErrorType type, const char *format, ...) {
    va_list arg;
    va_start(arg, format);
    vsprintf(buffer, format, arg);
    va_end (arg);
    return Result({}, std::make_shared<Error>(type, str(buffer)));
  }
  static Result mkErr(sptr<Error> err) {
    return Result({}, err);
  }
};

#endif //RUNESIM_RESULT_H
