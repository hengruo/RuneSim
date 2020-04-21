//
// Created by Hengruo Zhang on 4/20/20.
//

#ifndef RUNESIM_SRC_BASE_RSVEC_H
#define RUNESIM_SRC_BASE_RSVEC_H

#include "type.h"

class rsvec {
public:
  class RSVecIterator : public iterator<input_iterator_tag, RSID> {
  private:
    isize cur = 0;
    isize size = 0;
    rsvec *data = nullptr;
    RSID *ptr = nullptr;
  public:
    RSVecIterator(rsvec &v) {
      cur = 0;
      size = v.size();
      data = &v;
      ptr = size == 0 ? nullptr : const_cast<RSID *>(&((*data)[0]));
    }
    inline bool operator!=(const RSVecIterator &it) {
      return !(data == it.data && ptr == it.ptr);
    }
    inline RSVecIterator &operator++() {
      if (cur < size) {
        cur++;
        ptr = size == 0 ? nullptr : const_cast<RSID *>(&((*data)[cur]));
      }
    }
    inline RSVecIterator operator++(int) {
      if (cur < size) {
        cur++;
        ptr = size == 0 ? nullptr : const_cast<RSID *>(&((*data)[cur]));
      }
    }
    inline void toEnd() {
      cur = size;
      ptr = nullptr;
    }
  };
private:
  const RSID ERR = -1;
  isize sz = 0;
  umap<RSID, isize> rsid2idx;
  umap<isize, RSID> idx2rsid;
public:
  typedef RSVecIterator iterator;
  inline isize size() const {
    return sz;
  }

  inline bool empty() const {
    return sz == 0;
  }

  inline void clear() {
    sz = 0;
    idx2rsid.clear();
    rsid2idx.clear();
  }

  inline const RSID &back() const {
    if (empty())
      return ERR;
    return idx2rsid.find(sz - 1)->second;
  }

  inline void push_back(RSID id) {
    if (rsid2idx.find(id) == rsid2idx.end()) {
      rsid2idx[id] = sz;
      idx2rsid[sz] = id;
      sz++;
    }
  }

  inline void pop_back() {
    if (empty())
      return;
    RSID id = idx2rsid.find(sz - 1)->second;
    erase(id);
  }

  inline void erase(RSID id) {
    if (sz == 0)
      return;
    isize oldSz = rsid2idx.size();
    rsid2idx.erase(id);
    isize newSz = rsid2idx.size();
    sz -= (oldSz - newSz);
    idx2rsid.clear();
    for (auto p: rsid2idx)
      idx2rsid[p.second] = p.first;
  }

  inline void erase(vec<RSID> idList) {
    if (sz == 0)
      return;
    isize oldSz = rsid2idx.size();
    for (auto id: idList)
      rsid2idx.erase(id);
    isize newSz = rsid2idx.size();
    sz -= (oldSz - newSz);
    idx2rsid.clear();
    for (auto p: rsid2idx)
      idx2rsid[p.second] = p.first;
  }

  inline const RSID &operator[](isize i) const {
    auto it = idx2rsid.find(i);
    return it == idx2rsid.end() ? ERR : it->second;
  }

  inline iterator begin() const {
    return iterator(const_cast<rsvec &>(*this));
  }

  inline iterator end() const {
    iterator it(const_cast<rsvec &>(*this));;
    it.toEnd();
    return it;
  }
};

#endif //RUNESIM_SRC_BASE_RSVEC_H
