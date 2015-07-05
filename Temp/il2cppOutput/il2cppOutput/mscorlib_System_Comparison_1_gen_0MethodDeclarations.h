#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t102;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1441_gshared (Comparison_1_t102 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m1441(__this, ___object, ___method, method) (( void (*) (Comparison_1_t102 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m1441_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m13278_gshared (Comparison_1_t102 * __this, RaycastHit_t104  ___x, RaycastHit_t104  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m13278(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t102 *, RaycastHit_t104 , RaycastHit_t104 , MethodInfo*))Comparison_1_Invoke_m13278_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m13279_gshared (Comparison_1_t102 * __this, RaycastHit_t104  ___x, RaycastHit_t104  ___y, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m13279(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t102 *, RaycastHit_t104 , RaycastHit_t104 , AsyncCallback_t171 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m13279_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m13280_gshared (Comparison_1_t102 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m13280(__this, ___result, method) (( int32_t (*) (Comparison_1_t102 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m13280_gshared)(__this, ___result, method)
