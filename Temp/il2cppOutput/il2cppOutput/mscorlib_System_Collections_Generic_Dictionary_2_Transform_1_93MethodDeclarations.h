#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct Transform_1_t3160;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t610;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
#define Transform_1__ctor_m19359(__this, ___object, ___method, method) (( void (*) (Transform_1_t3160 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m13876_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19360(__this, ___key, ___value, method) (( GetDelegate_t610 * (*) (Transform_1_t3160 *, String_t*, GetDelegate_t610 *, MethodInfo*))Transform_1_Invoke_m13877_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19361(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3160 *, String_t*, GetDelegate_t610 *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13878_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19362(__this, ___result, method) (( GetDelegate_t610 * (*) (Transform_1_t3160 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13879_gshared)(__this, ___result, method)
