#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>
struct Transform_1_t3115;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t607;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_81MethodDeclarations.h"
#define Transform_1__ctor_m18916(__this, ___object, ___method, method) (( void (*) (Transform_1_t3115 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18917_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m18918(__this, ___key, ___value, method) (( KeyValuePair_2_t3084  (*) (Transform_1_t3115 *, Type_t *, ConstructorDelegate_t607 *, MethodInfo*))Transform_1_Invoke_m18919_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m18920(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3115 *, Type_t *, ConstructorDelegate_t607 *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18921_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m18922(__this, ___result, method) (( KeyValuePair_2_t3084  (*) (Transform_1_t3115 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18923_gshared)(__this, ___result, method)
