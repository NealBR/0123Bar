#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
struct Transform_1_t2591;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13724_gshared (Transform_1_t2591 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m13724(__this, ___object, ___method, method) (( void (*) (Transform_1_t2591 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m13724_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2581  Transform_1_Invoke_m13726_gshared (Transform_1_t2591 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m13726(__this, ___key, ___value, method) (( KeyValuePair_2_t2581  (*) (Transform_1_t2591 *, Object_t *, int32_t, MethodInfo*))Transform_1_Invoke_m13726_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13728_gshared (Transform_1_t2591 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m13728(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2591 *, Object_t *, int32_t, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13728_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2581  Transform_1_EndInvoke_m13730_gshared (Transform_1_t2591 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m13730(__this, ___result, method) (( KeyValuePair_2_t2581  (*) (Transform_1_t2591 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13730_gshared)(__this, ___result, method)
