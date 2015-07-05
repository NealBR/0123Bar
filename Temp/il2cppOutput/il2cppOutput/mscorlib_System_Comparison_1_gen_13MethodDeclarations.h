#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2657;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14344_gshared (Comparison_1_t2657 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m14344(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2657 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m14344_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14345_gshared (Comparison_1_t2657 * __this, UIVertex_t161  ___x, UIVertex_t161  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m14345(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2657 *, UIVertex_t161 , UIVertex_t161 , MethodInfo*))Comparison_1_Invoke_m14345_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14346_gshared (Comparison_1_t2657 * __this, UIVertex_t161  ___x, UIVertex_t161  ___y, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m14346(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2657 *, UIVertex_t161 , UIVertex_t161 , AsyncCallback_t171 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m14346_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14347_gshared (Comparison_1_t2657 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m14347(__this, ___result, method) (( int32_t (*) (Comparison_1_t2657 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m14347_gshared)(__this, ___result, method)
