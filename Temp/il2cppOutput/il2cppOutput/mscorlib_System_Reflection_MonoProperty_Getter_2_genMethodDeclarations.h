#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t3372;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Getter_2__ctor_m21050_gshared (Getter_2_t3372 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Getter_2__ctor_m21050(__this, ___object, ___method, method) (( void (*) (Getter_2_t3372 *, Object_t *, IntPtr_t, MethodInfo*))Getter_2__ctor_m21050_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Getter_2_Invoke_m21051_gshared (Getter_2_t3372 * __this, Object_t * ____this, MethodInfo* method);
#define Getter_2_Invoke_m21051(__this, ____this, method) (( Object_t * (*) (Getter_2_t3372 *, Object_t *, MethodInfo*))Getter_2_Invoke_m21051_gshared)(__this, ____this, method)
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Getter_2_BeginInvoke_m21052_gshared (Getter_2_t3372 * __this, Object_t * ____this, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Getter_2_BeginInvoke_m21052(__this, ____this, ___callback, ___object, method) (( Object_t * (*) (Getter_2_t3372 *, Object_t *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Getter_2_BeginInvoke_m21052_gshared)(__this, ____this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Getter_2_EndInvoke_m21053_gshared (Getter_2_t3372 * __this, Object_t * ___result, MethodInfo* method);
#define Getter_2_EndInvoke_m21053(__this, ___result, method) (( Object_t * (*) (Getter_2_t3372 *, Object_t *, MethodInfo*))Getter_2_EndInvoke_m21053_gshared)(__this, ___result, method)
