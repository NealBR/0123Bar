#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Object>
struct Transform_1_t3080;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
#define Transform_1__ctor_m18634(__this, ___object, ___method, method) (( void (*) (Transform_1_t3080 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m13876_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Object>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m18635(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t3080 *, String_t*, Object_t *, MethodInfo*))Transform_1_Invoke_m13877_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m18636(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3080 *, String_t*, Object_t *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13878_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m18637(__this, ___result, method) (( Object_t * (*) (Transform_1_t3080 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13879_gshared)(__this, ___result, method)
