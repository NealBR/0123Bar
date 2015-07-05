#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t244;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t15;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m1898(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t244 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m11850_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(T0)
#define UnityAction_1_Invoke_m1900(__this, ___arg0, method) (( void (*) (UnityAction_1_t244 *, Component_t15 *, MethodInfo*))UnityAction_1_Invoke_m11851_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Component>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m15822(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t244 *, Component_t15 *, AsyncCallback_t171 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m11852_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m15823(__this, ___result, method) (( void (*) (UnityAction_1_t244 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m11853_gshared)(__this, ___result, method)
