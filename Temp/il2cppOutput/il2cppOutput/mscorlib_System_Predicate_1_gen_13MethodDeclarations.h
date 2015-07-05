#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2654;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14334_gshared (Predicate_1_t2654 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m14334(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2654 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m14334_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14335_gshared (Predicate_1_t2654 * __this, UIVertex_t161  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m14335(__this, ___obj, method) (( bool (*) (Predicate_1_t2654 *, UIVertex_t161 , MethodInfo*))Predicate_1_Invoke_m14335_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m14336_gshared (Predicate_1_t2654 * __this, UIVertex_t161  ___obj, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m14336(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2654 *, UIVertex_t161 , AsyncCallback_t171 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m14336_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14337_gshared (Predicate_1_t2654 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m14337(__this, ___result, method) (( bool (*) (Predicate_1_t2654 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m14337_gshared)(__this, ___result, method)
