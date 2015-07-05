#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Object>
struct Func_2_t3275;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m20365_gshared (Func_2_t3275 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Func_2__ctor_m20365(__this, ___object, ___method, method) (( void (*) (Func_2_t3275 *, Object_t *, IntPtr_t, MethodInfo*))Func_2__ctor_m20365_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m20366_gshared (Func_2_t3275 * __this, Object_t * ___arg1, MethodInfo* method);
#define Func_2_Invoke_m20366(__this, ___arg1, method) (( Object_t * (*) (Func_2_t3275 *, Object_t *, MethodInfo*))Func_2_Invoke_m20366_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m20367_gshared (Func_2_t3275 * __this, Object_t * ___arg1, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_2_BeginInvoke_m20367(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t3275 *, Object_t *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m20367_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m20368_gshared (Func_2_t3275 * __this, Object_t * ___result, MethodInfo* method);
#define Func_2_EndInvoke_m20368(__this, ___result, method) (( Object_t * (*) (Func_2_t3275 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m20368_gshared)(__this, ___result, method)
