#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t509;
struct CacheIndex_t509_marshaled;

void CacheIndex_t509_marshal(const CacheIndex_t509& unmarshaled, CacheIndex_t509_marshaled& marshaled);
void CacheIndex_t509_marshal_back(const CacheIndex_t509_marshaled& marshaled, CacheIndex_t509& unmarshaled);
void CacheIndex_t509_marshal_cleanup(CacheIndex_t509_marshaled& marshaled);
