#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t107;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t110;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t662;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m1447_gshared (UnityEvent_1_t107 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m1447(__this, method) (( void (*) (UnityEvent_1_t107 *, MethodInfo*))UnityEvent_1__ctor_m1447_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m1450_gshared (UnityEvent_1_t107 * __this, UnityAction_1_t110 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m1450(__this, ___call, method) (( void (*) (UnityEvent_1_t107 *, UnityAction_1_t110 *, MethodInfo*))UnityEvent_1_AddListener_m1450_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m13286_gshared (UnityEvent_1_t107 * __this, UnityAction_1_t110 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m13286(__this, ___call, method) (( void (*) (UnityEvent_1_t107 *, UnityAction_1_t110 *, MethodInfo*))UnityEvent_1_RemoveListener_m13286_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2000_gshared (UnityEvent_1_t107 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m2000(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t107 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m2000_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t662 * UnityEvent_1_GetDelegate_m2001_gshared (UnityEvent_1_t107 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2001(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t662 * (*) (UnityEvent_1_t107 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m2001_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t662 * UnityEvent_1_GetDelegate_m13287_gshared (Object_t * __this /* static, unused */, UnityAction_1_t110 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13287(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t662 * (*) (Object_t * /* static, unused */, UnityAction_1_t110 *, MethodInfo*))UnityEvent_1_GetDelegate_m13287_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1449_gshared (UnityEvent_1_t107 * __this, Color_t109  ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m1449(__this, ___arg0, method) (( void (*) (UnityEvent_1_t107 *, Color_t109 , MethodInfo*))UnityEvent_1_Invoke_m1449_gshared)(__this, ___arg0, method)
