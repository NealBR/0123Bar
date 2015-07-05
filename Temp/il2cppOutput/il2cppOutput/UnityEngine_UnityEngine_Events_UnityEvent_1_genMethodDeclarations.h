#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
struct UnityEvent_1_t38;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t2473;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t662;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t30;

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m1288(__this, method) (( void (*) (UnityEvent_1_t38 *, MethodInfo*))UnityEvent_1__ctor_m12459_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m12460(__this, ___call, method) (( void (*) (UnityEvent_1_t38 *, UnityAction_1_t2473 *, MethodInfo*))UnityEvent_1_AddListener_m12461_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m12462(__this, ___call, method) (( void (*) (UnityEvent_1_t38 *, UnityAction_1_t2473 *, MethodInfo*))UnityEvent_1_RemoveListener_m12463_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m1965(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t38 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m12464_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m1966(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t662 * (*) (UnityEvent_1_t38 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m12465_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m12466(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t662 * (*) (Object_t * /* static, unused */, UnityAction_1_t2473 *, MethodInfo*))UnityEvent_1_GetDelegate_m12467_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
#define UnityEvent_1_Invoke_m1293(__this, ___arg0, method) (( void (*) (UnityEvent_1_t38 *, BaseEventData_t30 *, MethodInfo*))UnityEvent_1_Invoke_m12468_gshared)(__this, ___arg0, method)
