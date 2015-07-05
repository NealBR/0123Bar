#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t3241;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t269;

// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_2__ctor_m20036_gshared (InvokableCall_2_t3241 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_2__ctor_m20036(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_2_t3241 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_2__ctor_m20036_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_2_Invoke_m20037_gshared (InvokableCall_2_t3241 * __this, ObjectU5BU5D_t269* ___args, MethodInfo* method);
#define InvokableCall_2_Invoke_m20037(__this, ___args, method) (( void (*) (InvokableCall_2_t3241 *, ObjectU5BU5D_t269*, MethodInfo*))InvokableCall_2_Invoke_m20037_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_2_Find_m20038_gshared (InvokableCall_2_t3241 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_2_Find_m20038(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_2_t3241 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_2_Find_m20038_gshared)(__this, ___targetObj, ___method, method)
