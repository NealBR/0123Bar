#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.String>
struct Transform_1_t3184;
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
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.String>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_97MethodDeclarations.h"
#define Transform_1__ctor_m19599(__this, ___object, ___method, method) (( void (*) (Transform_1_t3184 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m19519_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.String>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19600(__this, ___key, ___value, method) (( String_t* (*) (Transform_1_t3184 *, String_t*, KeyValuePair_2_t721 , MethodInfo*))Transform_1_Invoke_m19520_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19601(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3184 *, String_t*, KeyValuePair_2_t721 , AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m19521_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.String>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19602(__this, ___result, method) (( String_t* (*) (Transform_1_t3184 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m19522_gshared)(__this, ___result, method)
