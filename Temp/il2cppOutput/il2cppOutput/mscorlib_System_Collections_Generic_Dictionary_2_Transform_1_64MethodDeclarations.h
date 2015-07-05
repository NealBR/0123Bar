#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>
struct Transform_1_t3047;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18360_gshared (Transform_1_t3047 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m18360(__this, ___object, ___method, method) (( void (*) (Transform_1_t3047 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18360_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m18361_gshared (Transform_1_t3047 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m18361(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t3047 *, uint64_t, Object_t *, MethodInfo*))Transform_1_Invoke_m18361_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m18362_gshared (Transform_1_t3047 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m18362(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3047 *, uint64_t, Object_t *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18362_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m18363_gshared (Transform_1_t3047 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m18363(__this, ___result, method) (( Object_t * (*) (Transform_1_t3047 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18363_gshared)(__this, ___result, method)
