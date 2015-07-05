﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Byte>
struct Action_1_t2816;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m15887_gshared (Action_1_t2816 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Action_1__ctor_m15887(__this, ___object, ___method, method) (( void (*) (Action_1_t2816 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m15887_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Byte>::Invoke(T)
extern "C" void Action_1_Invoke_m15888_gshared (Action_1_t2816 * __this, uint8_t ___obj, MethodInfo* method);
#define Action_1_Invoke_m15888(__this, ___obj, method) (( void (*) (Action_1_t2816 *, uint8_t, MethodInfo*))Action_1_Invoke_m15888_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m15890_gshared (Action_1_t2816 * __this, uint8_t ___obj, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Action_1_BeginInvoke_m15890(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t2816 *, uint8_t, AsyncCallback_t171 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m15890_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m15892_gshared (Action_1_t2816 * __this, Object_t * ___result, MethodInfo* method);
#define Action_1_EndInvoke_m15892(__this, ___result, method) (( void (*) (Action_1_t2816 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m15892_gshared)(__this, ___result, method)
