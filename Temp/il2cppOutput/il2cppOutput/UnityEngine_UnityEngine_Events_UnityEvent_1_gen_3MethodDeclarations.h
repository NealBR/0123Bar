#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t198;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2724;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t662;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" void UnityEvent_1__ctor_m1761_gshared (UnityEvent_1_t198 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m1761(__this, method) (( void (*) (UnityEvent_1_t198 *, MethodInfo*))UnityEvent_1__ctor_m1761_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m14996_gshared (UnityEvent_1_t198 * __this, UnityAction_1_t2724 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m14996(__this, ___call, method) (( void (*) (UnityEvent_1_t198 *, UnityAction_1_t2724 *, MethodInfo*))UnityEvent_1_AddListener_m14996_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m14997_gshared (UnityEvent_1_t198 * __this, UnityAction_1_t2724 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m14997(__this, ___call, method) (( void (*) (UnityEvent_1_t198 *, UnityAction_1_t2724 *, MethodInfo*))UnityEvent_1_RemoveListener_m14997_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2028_gshared (UnityEvent_1_t198 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m2028(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t198 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m2028_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t662 * UnityEvent_1_GetDelegate_m2029_gshared (UnityEvent_1_t198 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2029(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t662 * (*) (UnityEvent_1_t198 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m2029_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t662 * UnityEvent_1_GetDelegate_m14998_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2724 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m14998(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t662 * (*) (Object_t * /* static, unused */, UnityAction_1_t2724 *, MethodInfo*))UnityEvent_1_GetDelegate_m14998_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1786_gshared (UnityEvent_1_t198 * __this, Vector2_t12  ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m1786(__this, ___arg0, method) (( void (*) (UnityEvent_1_t198 *, Vector2_t12 , MethodInfo*))UnityEvent_1_Invoke_m1786_gshared)(__this, ___arg0, method)
