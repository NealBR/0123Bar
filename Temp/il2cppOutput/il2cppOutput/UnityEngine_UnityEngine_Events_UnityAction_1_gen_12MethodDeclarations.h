#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t3248;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m20065_gshared (UnityAction_1_t3248 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_1__ctor_m20065(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t3248 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m20065_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m20066_gshared (UnityAction_1_t3248 * __this, int32_t ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m20066(__this, ___arg0, method) (( void (*) (UnityAction_1_t3248 *, int32_t, MethodInfo*))UnityAction_1_Invoke_m20066_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m20067_gshared (UnityAction_1_t3248 * __this, int32_t ___arg0, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m20067(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t3248 *, int32_t, AsyncCallback_t171 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m20067_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m20068_gshared (UnityAction_1_t3248 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m20068(__this, ___result, method) (( void (*) (UnityAction_1_t3248 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m20068_gshared)(__this, ___result, method)
