#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2724;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m14999_gshared (UnityAction_1_t2724 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_1__ctor_m14999(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2724 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m14999_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m15000_gshared (UnityAction_1_t2724 * __this, Vector2_t12  ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m15000(__this, ___arg0, method) (( void (*) (UnityAction_1_t2724 *, Vector2_t12 , MethodInfo*))UnityAction_1_Invoke_m15000_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m15001_gshared (UnityAction_1_t2724 * __this, Vector2_t12  ___arg0, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m15001(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2724 *, Vector2_t12 , AsyncCallback_t171 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m15001_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m15002_gshared (UnityAction_1_t2724 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m15002(__this, ___result, method) (( void (*) (UnityAction_1_t2724 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m15002_gshared)(__this, ___result, method)
