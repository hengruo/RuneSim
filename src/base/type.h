//
// Created by Hengruo Zhang on 2/7/20.
//

#ifndef RUNESIM_TYPE_H
#define RUNESIM_TYPE_H

#include <cinttypes>
#include <cfloat>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <memory>
#include <cstdarg>
#include <utility>
#include <random>
#include <functional>
#include <set>

using namespace std;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
typedef i64 RSID;
typedef size_t isize;

typedef float f32;
typedef double f64;

typedef std::string str;

template <typename T>
using vec = std::vector<T>;

template <typename K, typename V>
using umap = std::unordered_map<K,V>;

template <typename V>
using uset = std::unordered_set<V>;

template <typename T>
using uptr = std::unique_ptr<T>;

template <typename T>
using sptr = std::shared_ptr<T>;

template <typename T>
using wptr = std::weak_ptr<T>;

#endif //RUNESIM_TYPE_H
