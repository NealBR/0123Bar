﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t267;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t30;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m11667_gshared (EventFunction_1_t267 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define EventFunction_1__ctor_m11667(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t267 *, Object_t *, IntPtr_t, MethodInfo*))EventFunction_1__ctor_m11667_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m11669_gshared (EventFunction_1_t267 * __this, Object_t * ___handler, BaseEventData_t30 * ___eventData, MethodInfo* method);
#define EventFunction_1_Invoke_m11669(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t267 *, Object_t *, BaseEventData_t30 *, MethodInfo*))EventFunction_1_Invoke_m11669_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m11671_gshared (EventFunction_1_t267 * __this, Object_t * ___handler, BaseEventData_t30 * ___eventData, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define EventFunction_1_BeginInvoke_m11671(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t267 *, Object_t *, BaseEventData_t30 *, AsyncCallback_t171 *, Object_t *, MethodInfo*))EventFunction_1_BeginInvoke_m11671_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m11673_gshared (EventFunction_1_t267 * __this, Object_t * ___result, MethodInfo* method);
#define EventFunction_1_EndInvoke_m11673(__this, ___result, method) (( void (*) (EventFunction_1_t267 *, Object_t *, MethodInfo*))EventFunction_1_EndInvoke_m11673_gshared)(__this, ___result, method)
