#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Transform_1_t3002;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17870_gshared (Transform_1_t3002 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m17870(__this, ___object, ___method, method) (( void (*) (Transform_1_t3002 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m17870_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2992  Transform_1_Invoke_m17872_gshared (Transform_1_t3002 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m17872(__this, ___key, ___value, method) (( KeyValuePair_2_t2992  (*) (Transform_1_t3002 *, Object_t *, int64_t, MethodInfo*))Transform_1_Invoke_m17872_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m17874_gshared (Transform_1_t3002 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m17874(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3002 *, Object_t *, int64_t, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m17874_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2992  Transform_1_EndInvoke_m17876_gshared (Transform_1_t3002 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m17876(__this, ___result, method) (( KeyValuePair_2_t2992  (*) (Transform_1_t3002 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m17876_gshared)(__this, ___result, method)
