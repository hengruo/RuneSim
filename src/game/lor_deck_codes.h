#ifndef LOR_DECK_CODES_H
#define LOR_DECK_CODES_H

#include "../base/base.h"

static umap<char, i32> CHAR_MAP = {
    {'A', 0}, {'B', 1}, {'C', 2}, {'D', 3},
    {'E', 4}, {'F', 5}, {'G', 6}, {'H', 7},
    {'I', 8}, {'J', 9}, {'K', 10}, {'L', 11},
    {'M', 12}, {'N', 13}, {'O', 14}, {'P', 15},
    {'Q', 16}, {'R', 17}, {'S', 18}, {'T', 19},
    {'U', 20}, {'V', 21}, {'W', 22}, {'X', 23},
    {'Y', 24}, {'Z', 25}, {'2', 26}, {'3', 27},
    {'4', 28}, {'5', 29}, {'6', 30}, {'7', 31}
};
static umap<i32, str> FACTION_MAP = {
    {0, "DE"}, {1, "FR"}, {2, "IO"}, {3, "NX"}, {4, "PZ"}, {5, "SI"}, {6, "BW"}
};

static char CHARS[] = {
    65, 66, 67, 68, 69, 70, 71, 72,
    73, 74, 75, 76, 77, 78, 79, 80,
    81, 82, 83, 84, 85, 86, 87, 88,
    89, 90, 50, 51, 52, 53, 54, 55, 0};
static i32 MASK = 31;
static i32 SHIFT = 5;
static i32 allButMSB = 0x7f;
static i32 justMSB = 0x80;

class Base32 {
public:
  static vec<u8> decode(str code) {
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

    i32 encLen = encoded.length();
    i32 outLen = encLen * SHIFT / 8;
    vec<u8> result(outLen, 0);

    i32 buff = 0;
    i32 next = 0;
    i32 bitsLeft = 0;

    for (char c : encoded) {
      if (CHAR_MAP.find(c) == CHAR_MAP.end())
        return vec<u8>();
      buff <<= SHIFT;
      buff |= (CHAR_MAP[c] & MASK);
      bitsLeft += SHIFT;
      if (bitsLeft >= 8) {
        result[next++] = (u8) (buff >> (bitsLeft - 8));
        bitsLeft -= 8;
      }
    }
    return result;
  }

  static str encode(vec<u8> data) {
    if (data.empty())
      return "";

    i32 outLen = (data.size() * 8 + SHIFT - 1) / SHIFT;
    char *res_cs = new char[outLen + 1];
    res_cs[outLen] = 0;

    i32 buff = data[0];
    i32 next = 1;
    i32 bitsLeft = 8;
    i32 ri = 0;
    while (bitsLeft > 0 || next < data.size()) {
      if (bitsLeft < SHIFT) {
        if (next < data.size()) {
          buff <<= 8;
          buff |= (data[next++] & 0xff);
          bitsLeft += 8;
        } else {
          i32 pad = SHIFT - bitsLeft;
          buff <<= pad;
          bitsLeft += pad;
        }
      }
      i32 index = MASK & (buff >> (bitsLeft - SHIFT));
      bitsLeft -= SHIFT;
      res_cs[ri++] = CHARS[index];
    }
    str res(res_cs);
    delete[] res_cs;
    return res;
  }
};

class VarInt {
public:
  static i32 pop(vec<u8> &bytes) {
    i32 result = 0;
    i32 shift = 0;
    i32 popped = 0;
    for (i32 i = 0; i < bytes.size(); i++) {
      popped++;
      i32 current = bytes[i] & allButMSB;
      result |= current << shift;
      if ((bytes[i] & justMSB) != justMSB) {
        bytes.erase(bytes.begin(), bytes.begin() + popped);
        return result;
      }
      shift += 7;
    }
    return INT32_MIN;
  }

  static vec<i32> get(i32 value) {
    vec<i32> buff(10, 0);
    i32 index = 0;
    if (value == 0)
      return {0};
    while (value != 0) {
      i32 byteVal = ((u32) value) & allButMSB;
      value >>= 7;
      if (value != 0)
        byteVal |= justMSB;

      buff[index++] = byteVal;
    }
    return vec<i32>(buff.begin(), buff.begin() + index);
  }
};

class LoRDeckCode {
public:
  static std::map<str, i32> decode(str code) {
    std::map<str, i32> deck;
    vec<u8> bytes = Base32::decode(code);
    u8 firstByte = bytes.front();
    bytes.erase(bytes.begin());
    i32 version = firstByte & 0xF;
    i32 MAX_KNOWN_VERSION = 2;

    if (version > MAX_KNOWN_VERSION)
      return deck;

    for (i32 i = 3; i > 0; i--) {
      i32 groupCount = VarInt::pop(bytes);

      for (i32 j = 0; j < groupCount; j++) {
        i32 itemCount = VarInt::pop(bytes);
        i32 set = VarInt::pop(bytes);
        i32 faction = VarInt::pop(bytes);

        for (i32 k = 0; k < itemCount; k++) {
          i32 card = VarInt::pop(bytes);
          str setStr = format("%02d", set);
          str facStr = FACTION_MAP[faction];
          str numStr = format("%03d", card);
          str cardCode = setStr + facStr + numStr;
          deck[cardCode] = i;
        }
      }
    }

    while (bytes.size() > 0) {
      i32 count = VarInt::pop(bytes);
      i32 set = VarInt::pop(bytes);
      i32 faction = VarInt::pop(bytes);
      i32 number = VarInt::pop(bytes);

      str setStr = padLeft(std::to_string(set), "0", 2);
      str facStr = FACTION_MAP[faction];
      str numStr = padLeft(std::to_string(number), "0", 3);
      str cardCode = setStr + facStr + numStr;
      deck[cardCode] = count;
    }
    return deck;
  }
};

#endif //LOR_DECK_CODES_H
