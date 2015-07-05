#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t301;
struct WaitForSeconds_t301_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m1630 (WaitForSeconds_t301 * __this, float ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t301_marshal(const WaitForSeconds_t301& unmarshaled, WaitForSeconds_t301_marshaled& marshaled);
void WaitForSeconds_t301_marshal_back(const WaitForSeconds_t301_marshaled& marshaled, WaitForSeconds_t301& unmarshaled);
void WaitForSeconds_t301_marshal_cleanup(WaitForSeconds_t301_marshaled& marshaled);
