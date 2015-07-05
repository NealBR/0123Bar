#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Transform_1_t3081;
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_76MethodDeclarations.h"
#define Transform_1__ctor_m18642(__this, ___object, ___method, method) (( void (*) (Transform_1_t3081 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18643_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m18644(__this, ___key, ___value, method) (( KeyValuePair_2_t598  (*) (Transform_1_t3081 *, String_t*, Object_t *, MethodInfo*))Transform_1_Invoke_m18645_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m18646(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3081 *, String_t*, Object_t *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18647_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m18648(__this, ___result, method) (( KeyValuePair_2_t598  (*) (Transform_1_t3081 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18649_gshared)(__this, ___result, method)
