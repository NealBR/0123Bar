#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Object>
struct Transform_1_t3173;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19519_gshared (Transform_1_t3173 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m19519(__this, ___object, ___method, method) (( void (*) (Transform_1_t3173 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m19519_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m19520_gshared (Transform_1_t3173 * __this, Object_t * ___key, KeyValuePair_2_t721  ___value, MethodInfo* method);
#define Transform_1_Invoke_m19520(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t3173 *, Object_t *, KeyValuePair_2_t721 , MethodInfo*))Transform_1_Invoke_m19520_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m19521_gshared (Transform_1_t3173 * __this, Object_t * ___key, KeyValuePair_2_t721  ___value, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m19521(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3173 *, Object_t *, KeyValuePair_2_t721 , AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m19521_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m19522_gshared (Transform_1_t3173 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m19522(__this, ___result, method) (( Object_t * (*) (Transform_1_t3173 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m19522_gshared)(__this, ___result, method)
