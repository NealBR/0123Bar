#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_t3244;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_4__ctor_m20053_gshared (UnityAction_4_t3244 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_4__ctor_m20053(__this, ___object, ___method, method) (( void (*) (UnityAction_4_t3244 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_4__ctor_m20053_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C" void UnityAction_4_Invoke_m20054_gshared (UnityAction_4_t3244 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method);
#define UnityAction_4_Invoke_m20054(__this, ___arg0, ___arg1, ___arg2, ___arg3, method) (( void (*) (UnityAction_4_t3244 *, Object_t *, Object_t *, Object_t *, Object_t *, MethodInfo*))UnityAction_4_Invoke_m20054_gshared)(__this, ___arg0, ___arg1, ___arg2, ___arg3, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_4_BeginInvoke_m20055_gshared (UnityAction_4_t3244 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_4_BeginInvoke_m20055(__this, ___arg0, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) (( Object_t * (*) (UnityAction_4_t3244 *, Object_t *, Object_t *, Object_t *, Object_t *, AsyncCallback_t171 *, Object_t *, MethodInfo*))UnityAction_4_BeginInvoke_m20055_gshared)(__this, ___arg0, ___arg1, ___arg2, ___arg3, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_4_EndInvoke_m20056_gshared (UnityAction_4_t3244 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_4_EndInvoke_m20056(__this, ___result, method) (( void (*) (UnityAction_4_t3244 *, Object_t *, MethodInfo*))UnityAction_4_EndInvoke_m20056_gshared)(__this, ___result, method)
