#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Events.PersistentCall>
struct Predicate_1_t3257;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t665;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m20203(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3257 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m11446_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.PersistentCall>::Invoke(T)
#define Predicate_1_Invoke_m20204(__this, ___obj, method) (( bool (*) (Predicate_1_t3257 *, PersistentCall_t665 *, MethodInfo*))Predicate_1_Invoke_m11447_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m20205(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3257 *, PersistentCall_t665 *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m11448_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m20206(__this, ___result, method) (( bool (*) (Predicate_1_t3257 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m11449_gshared)(__this, ___result, method)
