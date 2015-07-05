#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t459;
struct Gradient_t459_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m2236 (Gradient_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m2237 (Gradient_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m2238 (Gradient_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m2239 (Gradient_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t459_marshal(const Gradient_t459& unmarshaled, Gradient_t459_marshaled& marshaled);
void Gradient_t459_marshal_back(const Gradient_t459_marshaled& marshaled, Gradient_t459& unmarshaled);
void Gradient_t459_marshal_cleanup(Gradient_t459_marshaled& marshaled);
