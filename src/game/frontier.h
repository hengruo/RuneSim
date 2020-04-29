#ifndef RUNESIM_FRONTIER_H
#define RUNESIM_FRONTIER_H

#define FRONTIER_LIMIT 6

#include "../base/base.h"

class Frontier final {
private:
  const RSID EMPTY = -1;
  vec<RSID> fr;
public:
  Frontier() {
    fr = vec<RSID>(FRONTIER_LIMIT, EMPTY);
  }
  inline i8 size() {
    i8 cnt = 0;
    for (RSID &id: fr)
      cnt += id == EMPTY ? 0 : 1;
    return cnt;
  }
  inline bool full() {
    return size() == FRONTIER_LIMIT;
  }
  inline bool empty() {
    return size() == 0;
  }
  inline void put(RSID id) {
    for (isize i = 0; i < FRONTIER_LIMIT; i++) {
      if (fr[i] == EMPTY)
        fr[i] = id;
    }
  }
  inline void erase(RSID id) {
    for (i8 i = 0; i < FRONTIER_LIMIT; i++) {
      if (fr[i] == id)
        fr[i] = EMPTY;
    }
  }
  inline vec<i8> getUnitIndices(){
    vec<i8> res;
    for (i8 i = 0; i < FRONTIER_LIMIT; i++)
      if (fr[i] != EMPTY)
        res.push_back(i);
    return res;
  }
  inline vec<RSID> getUnits() {
    vec<RSID> res;
    for (i8 i = 0; i < FRONTIER_LIMIT; i++)
      if (fr[i] != EMPTY)
        res.push_back(fr[i]);
    return res;
  }
  inline bool has(RSID id){
    for (i8 i = 0; i < FRONTIER_LIMIT; i++) {
      if (fr[i] == id)
        return true;
    }
    return false;
  }
  inline bool isUnit(i8 i){
    return i < FRONTIER_LIMIT && fr[i] != EMPTY;
  }
  inline i8 getIndex(RSID id){
    for (i8 i = 0; i < FRONTIER_LIMIT; i++) {
      if (fr[i] == id)
        return i;
    }
    return -1;
  }
  inline RSID &operator[](isize i) {
    return fr[i];
  }
  inline i8 firstVacancy(){
    for (i8 i = 0; i < FRONTIER_LIMIT; i++) {
      if (fr[i] == EMPTY)
        return i;
    }
    return -1;
  }
};

#endif //RUNESIM_FRONTIER_H
