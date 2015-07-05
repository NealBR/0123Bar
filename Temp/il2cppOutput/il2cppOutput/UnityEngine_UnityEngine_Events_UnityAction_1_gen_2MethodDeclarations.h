#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t313;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m1762_gshared (UnityAction_1_t313 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_1__ctor_m1762(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t313 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m1762_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m14984_gshared (UnityAction_1_t313 * __this, float ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m14984(__this, ___arg0, method) (( void (*) (UnityAction_1_t313 *, float, MethodInfo*))UnityAction_1_Invoke_m14984_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m14985_gshared (UnityAction_1_t313 * __this, float ___arg0, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m14985(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t313 *, float, AsyncCallback_t171 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m14985_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m14986_gshared (UnityAction_1_t313 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m14986(__this, ___result, method) (( void (*) (UnityAction_1_t313 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m14986_gshared)(__this, ___result, method)
