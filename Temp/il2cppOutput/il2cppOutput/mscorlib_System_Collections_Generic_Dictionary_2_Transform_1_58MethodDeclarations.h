#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>
struct Transform_1_t2997;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54MethodDeclarations.h"
#define Transform_1__ctor_m17838(__this, ___object, ___method, method) (( void (*) (Transform_1_t2997 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m17744_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m17839(__this, ___key, ___value, method) (( String_t* (*) (Transform_1_t2997 *, String_t*, int64_t, MethodInfo*))Transform_1_Invoke_m17745_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m17840(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2997 *, String_t*, int64_t, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m17746_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m17841(__this, ___result, method) (( String_t* (*) (Transform_1_t2997 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m17747_gshared)(__this, ___result, method)
