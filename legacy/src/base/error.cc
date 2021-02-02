#include "error.h"
Error::Error(ErrorType Type, const str &Message) : type(Type), message(Message) {}
Error::Error() : type(ErrorType::_), message("") {}
