#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t430;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_6MethodDeclarations.h"
#define Action_1__ctor_m15886(__this, ___object, ___method, method) (( void (*) (Action_1_t430 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m15887_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
#define Action_1_Invoke_m3319(__this, ___obj, method) (( void (*) (Action_1_t430 *, bool, MethodInfo*))Action_1_Invoke_m15888_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m15889(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t430 *, bool, AsyncCallback_t171 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m15890_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m15891(__this, ___result, method) (( void (*) (Action_1_t430 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m15892_gshared)(__this, ___result, method)
