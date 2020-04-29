#ifndef LOR_DECK_CODES_H
#define LOR_DECK_CODES_H

#include "../base/base.h"

class Base32 {
private:
  const char *CHARS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567";
  int MASK = 31;
  int SHIFT = 5;
  umap<char, i32> CHAR_MAP;
public:
  Base32() {
    for (i32 i = 0; i < 32; i++)
      CHAR_MAP[CHARS[i]] = i;
  }

  vec<u8> decode(str code) {
    str encoded = code;
    std::regex p1("-");
    std::regex p2("^\\s+");
    std::regex p3("\\s+$");
    std::regex p4("[=]*$");
    encoded = std::regex_replace(encoded, p1, "");
    encoded = std::regex_replace(encoded, p2, "");
    encoded = std::regex_replace(encoded, p3, "");
    encoded = std::regex_replace(encoded, p4, "");
    for (i32 i = 0; i < encoded.size(); i++)
      if (encoded[i] >= 97 && encoded[i] <= 122)
        encoded[i] -= 32;

    if (encoded.size() == 0)
      return vec<u8>();

    i32 encodedLength = encoded.length();
    i32 outLength = encodedLength * SHIFT / 8;
    vec<u8> result(outLength, 0);

    i32 buffer = 0;
    i32 next = 0;
    i32 bitsLeft = 0;

    for (char c : encoded) {
      if (CHAR_MAP.find(c) == CHAR_MAP.end())
        return vec<u8>();
      buffer <<= SHIFT;
      buffer |= (CHAR_MAP[c] & MASK);
      bitsLeft += SHIFT;
      if (bitsLeft >= 8) {
        result[next++] = (u8) (buffer >> (bitsLeft - 8));
        bitsLeft -= 8;
      }
    }

    return result;
  }
};

#endif //LOR_DECK_CODES_H
