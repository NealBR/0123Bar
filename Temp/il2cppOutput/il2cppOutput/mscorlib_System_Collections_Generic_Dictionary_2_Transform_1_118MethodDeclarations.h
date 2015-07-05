#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct Transform_1_t3302;
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_119MethodDeclarations.h"
#define Transform_1__ctor_m20638(__this, ___object, ___method, method) (( void (*) (Transform_1_t3302 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m20639_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m20640(__this, ___key, ___value, method) (( KeyValuePair_2_t3290  (*) (Transform_1_t3302 *, String_t*, bool, MethodInfo*))Transform_1_Invoke_m20641_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m20642(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3302 *, String_t*, bool, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m20643_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m20644(__this, ___result, method) (( KeyValuePair_2_t3290  (*) (Transform_1_t3302 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m20645_gshared)(__this, ___result, method)
