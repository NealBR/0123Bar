#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Object>
struct Predicate_1_t2368;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m11446_gshared (Predicate_1_t2368 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m11446(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2368 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m11446_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m11447_gshared (Predicate_1_t2368 * __this, Object_t * ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m11447(__this, ___obj, method) (( bool (*) (Predicate_1_t2368 *, Object_t *, MethodInfo*))Predicate_1_Invoke_m11447_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m11448_gshared (Predicate_1_t2368 * __this, Object_t * ___obj, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m11448(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2368 *, Object_t *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m11448_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m11449_gshared (Predicate_1_t2368 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m11449(__this, ___result, method) (( bool (*) (Predicate_1_t2368 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m11449_gshared)(__this, ___result, method)
