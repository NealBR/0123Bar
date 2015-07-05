#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>
struct Transform_1_t3116;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18917_gshared (Transform_1_t3116 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m18917(__this, ___object, ___method, method) (( void (*) (Transform_1_t3116 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18917_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3084  Transform_1_Invoke_m18919_gshared (Transform_1_t3116 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m18919(__this, ___key, ___value, method) (( KeyValuePair_2_t3084  (*) (Transform_1_t3116 *, Object_t *, Object_t *, MethodInfo*))Transform_1_Invoke_m18919_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m18921_gshared (Transform_1_t3116 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m18921(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3116 *, Object_t *, Object_t *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18921_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3084  Transform_1_EndInvoke_m18923_gshared (Transform_1_t3116 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m18923(__this, ___result, method) (( KeyValuePair_2_t3084  (*) (Transform_1_t3116 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18923_gshared)(__this, ___result, method)
