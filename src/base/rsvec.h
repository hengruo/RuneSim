//
// Created by Hengruo Zhang on 4/20/20.
//

#ifndef RUNESIM_BASE_RSVEC_H
#define RUNESIM_BASE_RSVEC_H

#include "type.h"
#include <initializer_list>

class rsvec {
public:
  class RSVecIterator : public iterator<input_iterator_tag, RSID> {
  private:
    isize cur = 0;
    isize size = 0;
    rsvec *data = nullptr;
    RSID *ptr = nullptr;
  public:
    RSVecIterator() {}
    RSVecIterator(rsvec &v) {
      cur = 0;
      size = v.size();
      data = &v;
      ptr = size == 0 ? nullptr : const_cast<RSID *>(&((*data)[0]));
    }
    RSVecIterator(const RSVecIterator &it) {
      cur = it.cur;
      size = it.size;
      data = it.data;
      ptr = it.ptr;
    }
    inline bool operator!=(const RSVecIterator &it) {
      return !(data == it.data && ptr == it.ptr);
    }
    inline bool operator==(const RSVecIterator &it) {
      return data == it.data && ptr == it.ptr;
    }
    inline RSVecIterator &operator++() {
      if (cur < size) {
        cur++;
        ptr = cur >= size ? nullptr : const_cast<RSID *>(&((*data)[cur]));
      }
      return *this;
    }
    inline RSVecIterator operator++(int) {
      if (cur < size) {
        cur++;
        ptr = cur >= size ? nullptr : const_cast<RSID *>(&((*data)[cur]));
      }
      return *this;
    }
    inline RSVecIterator &operator--() {
      if (cur > 0) {
        cur--;
        ptr = cur >= size || cur < 0 ? nullptr : const_cast<RSID *>(&((*data)[cur]));
      }
      return *this;
    }
    inline RSVecIterator operator--(int) {
      if (cur > 0) {
        cur--;
        ptr = cur >= size || cur < 0 ? nullptr : const_cast<RSID *>(&((*data)[cur]));
      }
      return *this;
    }
    inline RSID &operator*() {
      return *ptr;
    }
    inline RSID *operator->() {
      return ptr;
    }
    inline isize operator-(const RSVecIterator &it) {
      return cur - it.cur;
    }
    inline RSVecIterator operator+(const isize &i) {
      RSVecIterator it = *this;
      if (cur + i < size) {
        it.cur += i;
        it.ptr = const_cast<RSID *>(&((*data)[it.cur]));
      } else
        it.toEnd();
      return it;
    }
    inline bool operator<(const RSVecIterator &it) {
      return data == it.data && cur < it.cur;
    }
    inline RSVecIterator &operator=(const RSVecIterator &it) {
      cur = it.cur;
      size = it.size;
      data = it.data;
      ptr = it.ptr;
      return *this;
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
  map<isize, RSID> idx2rsid;
public:
  typedef RSVecIterator iterator;
  rsvec() {}
  rsvec(initializer_list<RSID> l) {
    isize i = 0;
    for (auto it = l.begin(); it != l.end(); it++, i++) {
      idx2rsid[i] = *it;
      rsid2idx[*it] = i;
    }
    sz = i;
  }
  rsvec(const rsvec &other) {
    sz = other.sz;
    idx2rsid = other.idx2rsid;
    rsid2idx = other.rsid2idx;
  }

  static rsvec fromVec(const vec<RSID> &_v) {
    rsvec v;
    for (RSID id: _v)
      v.push_back(id);
    return v;
  }

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

  inline void add(vec<RSID> v) {
    for (auto id: v)
      this->push_back(id);
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
    isize i = 0;
    for (auto p:idx2rsid)
      idx2rsid[i++] = p.second;
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
    isize i = 0;
    for (auto p:idx2rsid)
      idx2rsid[i++] = p.second;
  }

  inline const RSID &operator[](isize i) const {
    auto it = idx2rsid.find(i);
    return it == idx2rsid.end() ? ERR : it->second;
  }

  inline rsvec &operator=(const rsvec &other) {
    if (this == &other)
      return *this;
    sz = other.sz;
    idx2rsid = other.idx2rsid;
    rsid2idx = other.rsid2idx;
    return *this;
  }

  inline iterator begin() const {
    return iterator(const_cast<rsvec &>(*this));
  }

  inline iterator end() const {
    iterator it(const_cast<rsvec &>(*this));;
    it.toEnd();
    return it;
  }

  inline void swap(isize idx1, isize idx2) {
    if (idx1 < sz && idx1 >= 0 && idx2 < sz && idx2 >= 0) {
      RSID v1 = idx2rsid[idx1];
      RSID v2 = idx2rsid[idx2];
      rsid2idx[v1] = idx2;
      rsid2idx[v2] = idx1;
      idx2rsid[idx1] = v2;
      idx2rsid[idx2] = v1;
    }
  }

  inline vec<RSID> toVec() const {
    vec<RSID> res(sz, 0);
    for (isize i = 0; i < sz; i++)
      res[i] = (*this)[i];
    return res;
  }

  inline iterator find(RSID id) {
    if (rsid2idx.find(id) == rsid2idx.end())
      return end();
    return begin() + rsid2idx[id];
  }
};

#endif //RUNESIM_BASE_RSVEC_H
