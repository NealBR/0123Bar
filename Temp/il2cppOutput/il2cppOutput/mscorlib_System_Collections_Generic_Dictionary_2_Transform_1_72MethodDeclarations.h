﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.String>
struct Transform_1_t3078;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.String>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
#define Transform_1__ctor_m18611(__this, ___object, ___method, method) (( void (*) (Transform_1_t3078 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m13876_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.String>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m18612(__this, ___key, ___value, method) (( String_t* (*) (Transform_1_t3078 *, String_t*, Object_t *, MethodInfo*))Transform_1_Invoke_m13877_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m18613(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3078 *, String_t*, Object_t *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13878_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.String>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m18614(__this, ___result, method) (( String_t* (*) (Transform_1_t3078 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13879_gshared)(__this, ___result, method)
