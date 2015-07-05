#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
struct Transform_1_t2877;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m16516_gshared (Transform_1_t2877 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m16516(__this, ___object, ___method, method) (( void (*) (Transform_1_t2877 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m16516_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2869  Transform_1_Invoke_m16518_gshared (Transform_1_t2877 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m16518(__this, ___key, ___value, method) (( KeyValuePair_2_t2869  (*) (Transform_1_t2877 *, Object_t *, Object_t *, MethodInfo*))Transform_1_Invoke_m16518_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m16520_gshared (Transform_1_t2877 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m16520(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2877 *, Object_t *, Object_t *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m16520_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2869  Transform_1_EndInvoke_m16522_gshared (Transform_1_t2877 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m16522(__this, ___result, method) (( KeyValuePair_2_t2869  (*) (Transform_1_t2877 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m16522_gshared)(__this, ___result, method)
