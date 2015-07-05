#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Transform_1_t2895;
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_49MethodDeclarations.h"
#define Transform_1__ctor_m16671(__this, ___object, ___method, method) (( void (*) (Transform_1_t2895 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m16672_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m16673(__this, ___key, ___value, method) (( KeyValuePair_2_t2886  (*) (Transform_1_t2895 *, String_t*, int32_t, MethodInfo*))Transform_1_Invoke_m16674_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m16675(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2895 *, String_t*, int32_t, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m16676_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m16677(__this, ___result, method) (( KeyValuePair_2_t2886  (*) (Transform_1_t2895 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m16678_gshared)(__this, ___result, method)
