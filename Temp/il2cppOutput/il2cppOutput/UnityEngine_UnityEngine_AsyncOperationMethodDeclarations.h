#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t417;
struct AsyncOperation_t417_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m2627 (AsyncOperation_t417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m2628 (AsyncOperation_t417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m2629 (AsyncOperation_t417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t417_marshal(const AsyncOperation_t417& unmarshaled, AsyncOperation_t417_marshaled& marshaled);
void AsyncOperation_t417_marshal_back(const AsyncOperation_t417_marshaled& marshaled, AsyncOperation_t417& unmarshaled);
void AsyncOperation_t417_marshal_cleanup(AsyncOperation_t417_marshaled& marshaled);
