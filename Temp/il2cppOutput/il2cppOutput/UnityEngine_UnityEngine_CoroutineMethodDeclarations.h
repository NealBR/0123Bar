#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t182;
struct Coroutine_t182_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2123 (Coroutine_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2124 (Coroutine_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2125 (Coroutine_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t182_marshal(const Coroutine_t182& unmarshaled, Coroutine_t182_marshaled& marshaled);
void Coroutine_t182_marshal_back(const Coroutine_t182_marshaled& marshaled, Coroutine_t182& unmarshaled);
void Coroutine_t182_marshal_cleanup(Coroutine_t182_marshaled& marshaled);
