#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
struct Transform_1_t2518;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12998_gshared (Transform_1_t2518 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m12998(__this, ___object, ___method, method) (( void (*) (Transform_1_t2518 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m12998_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m12999_gshared (Transform_1_t2518 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m12999(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2518 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m12999_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13000_gshared (Transform_1_t2518 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m13000(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2518 *, int32_t, Object_t *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13000_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m13001_gshared (Transform_1_t2518 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m13001(__this, ___result, method) (( Object_t * (*) (Transform_1_t2518 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13001_gshared)(__this, ___result, method)
