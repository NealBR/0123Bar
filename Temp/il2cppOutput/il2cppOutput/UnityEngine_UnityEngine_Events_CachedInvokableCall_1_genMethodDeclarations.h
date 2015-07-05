#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t741;
// UnityEngine.Object
struct Object_t20;
struct Object_t20_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t269;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3584_gshared (CachedInvokableCall_1_t741 * __this, Object_t20 * ___target, MethodInfo_t * ___theFunction, float ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3584(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t741 *, Object_t20 *, MethodInfo_t *, float, MethodInfo*))CachedInvokableCall_1__ctor_m3584_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m20059_gshared (CachedInvokableCall_1_t741 * __this, ObjectU5BU5D_t269* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m20059(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t741 *, ObjectU5BU5D_t269*, MethodInfo*))CachedInvokableCall_1_Invoke_m20059_gshared)(__this, ___args, method)
