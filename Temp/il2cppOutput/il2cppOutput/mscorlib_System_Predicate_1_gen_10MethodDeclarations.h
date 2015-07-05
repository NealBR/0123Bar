#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_t2495;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t10;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m12801(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2495 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m11446_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.GameObject>::Invoke(T)
#define Predicate_1_Invoke_m12802(__this, ___obj, method) (( bool (*) (Predicate_1_t2495 *, GameObject_t10 *, MethodInfo*))Predicate_1_Invoke_m11447_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.GameObject>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m12803(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2495 *, GameObject_t10 *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m11448_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.GameObject>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m12804(__this, ___result, method) (( bool (*) (Predicate_1_t2495 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m11449_gshared)(__this, ___result, method)
