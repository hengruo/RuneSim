//
// Created by Hengruo Zhang on 4/3/20.
//

#include "error.h"
Error::Error(ErrorType Type, const str &Message) : type(Type), message(Message) {}
Error::Error() : type(ErrorType::NONE), message("") {}
