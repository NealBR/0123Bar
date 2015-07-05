#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t2472;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2417;
// System.Object[]
struct ObjectU5BU5D_t269;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m12469_gshared (InvokableCall_1_t2472 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m12469(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2472 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m12469_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m12470_gshared (InvokableCall_1_t2472 * __this, UnityAction_1_t2417 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m12470(__this, ___callback, method) (( void (*) (InvokableCall_1_t2472 *, UnityAction_1_t2417 *, MethodInfo*))InvokableCall_1__ctor_m12470_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m12471_gshared (InvokableCall_1_t2472 * __this, ObjectU5BU5D_t269* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m12471(__this, ___args, method) (( void (*) (InvokableCall_1_t2472 *, ObjectU5BU5D_t269*, MethodInfo*))InvokableCall_1_Invoke_m12471_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m12472_gshared (InvokableCall_1_t2472 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m12472(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2472 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m12472_gshared)(__this, ___targetObj, ___method, method)
