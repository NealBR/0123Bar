﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t2471;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2417;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t662;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m12459_gshared (UnityEvent_1_t2471 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m12459(__this, method) (( void (*) (UnityEvent_1_t2471 *, MethodInfo*))UnityEvent_1__ctor_m12459_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m12461_gshared (UnityEvent_1_t2471 * __this, UnityAction_1_t2417 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m12461(__this, ___call, method) (( void (*) (UnityEvent_1_t2471 *, UnityAction_1_t2417 *, MethodInfo*))UnityEvent_1_AddListener_m12461_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m12463_gshared (UnityEvent_1_t2471 * __this, UnityAction_1_t2417 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m12463(__this, ___call, method) (( void (*) (UnityEvent_1_t2471 *, UnityAction_1_t2417 *, MethodInfo*))UnityEvent_1_RemoveListener_m12463_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12464_gshared (UnityEvent_1_t2471 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m12464(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t2471 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m12464_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t662 * UnityEvent_1_GetDelegate_m12465_gshared (UnityEvent_1_t2471 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12465(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t662 * (*) (UnityEvent_1_t2471 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m12465_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t662 * UnityEvent_1_GetDelegate_m12467_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2417 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12467(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t662 * (*) (Object_t * /* static, unused */, UnityAction_1_t2417 *, MethodInfo*))UnityEvent_1_GetDelegate_m12467_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m12468_gshared (UnityEvent_1_t2471 * __this, Object_t * ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m12468(__this, ___arg0, method) (( void (*) (UnityEvent_1_t2471 *, Object_t *, MethodInfo*))UnityEvent_1_Invoke_m12468_gshared)(__this, ___arg0, method)
