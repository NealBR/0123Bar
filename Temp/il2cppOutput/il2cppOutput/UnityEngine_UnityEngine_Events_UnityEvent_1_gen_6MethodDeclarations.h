#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Byte>
struct UnityEvent_1_t2773;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t2774;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t662;

// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::.ctor()
extern "C" void UnityEvent_1__ctor_m15478_gshared (UnityEvent_1_t2773 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m15478(__this, method) (( void (*) (UnityEvent_1_t2773 *, MethodInfo*))UnityEvent_1__ctor_m15478_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m15480_gshared (UnityEvent_1_t2773 * __this, UnityAction_1_t2774 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m15480(__this, ___call, method) (( void (*) (UnityEvent_1_t2773 *, UnityAction_1_t2774 *, MethodInfo*))UnityEvent_1_AddListener_m15480_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m15482_gshared (UnityEvent_1_t2773 * __this, UnityAction_1_t2774 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m15482(__this, ___call, method) (( void (*) (UnityEvent_1_t2773 *, UnityAction_1_t2774 *, MethodInfo*))UnityEvent_1_RemoveListener_m15482_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Byte>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m15483_gshared (UnityEvent_1_t2773 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m15483(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t2773 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m15483_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t662 * UnityEvent_1_GetDelegate_m15484_gshared (UnityEvent_1_t2773 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m15484(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t662 * (*) (UnityEvent_1_t2773 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m15484_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t662 * UnityEvent_1_GetDelegate_m15486_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2774 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m15486(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t662 * (*) (Object_t * /* static, unused */, UnityAction_1_t2774 *, MethodInfo*))UnityEvent_1_GetDelegate_m15486_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m15487_gshared (UnityEvent_1_t2773 * __this, uint8_t ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m15487(__this, ___arg0, method) (( void (*) (UnityEvent_1_t2773 *, uint8_t, MethodInfo*))UnityEvent_1_Invoke_m15487_gshared)(__this, ___arg0, method)
