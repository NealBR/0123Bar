#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Transform_1_t3001;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_62MethodDeclarations.h"
#define Transform_1__ctor_m17869(__this, ___object, ___method, method) (( void (*) (Transform_1_t3001 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m17870_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m17871(__this, ___key, ___value, method) (( KeyValuePair_2_t2992  (*) (Transform_1_t3001 *, String_t*, int64_t, MethodInfo*))Transform_1_Invoke_m17872_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m17873(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3001 *, String_t*, int64_t, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m17874_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m17875(__this, ___result, method) (( KeyValuePair_2_t2992  (*) (Transform_1_t3001 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m17876_gshared)(__this, ___result, method)
