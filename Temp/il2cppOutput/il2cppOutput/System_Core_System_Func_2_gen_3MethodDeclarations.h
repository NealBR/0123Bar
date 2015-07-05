#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Single>
struct Func_2_t2807;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m15824_gshared (Func_2_t2807 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Func_2__ctor_m15824(__this, ___object, ___method, method) (( void (*) (Func_2_t2807 *, Object_t *, IntPtr_t, MethodInfo*))Func_2__ctor_m15824_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m15825_gshared (Func_2_t2807 * __this, Object_t * ___arg1, MethodInfo* method);
#define Func_2_Invoke_m15825(__this, ___arg1, method) (( float (*) (Func_2_t2807 *, Object_t *, MethodInfo*))Func_2_Invoke_m15825_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m15827_gshared (Func_2_t2807 * __this, Object_t * ___arg1, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_2_BeginInvoke_m15827(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2807 *, Object_t *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m15827_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m15829_gshared (Func_2_t2807 * __this, Object_t * ___result, MethodInfo* method);
#define Func_2_EndInvoke_m15829(__this, ___result, method) (( float (*) (Func_2_t2807 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m15829_gshared)(__this, ___result, method)
