#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2970;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m17575_gshared (Comparison_1_t2970 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m17575(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2970 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m17575_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17576_gshared (Comparison_1_t2970 * __this, UILineInfo_t305  ___x, UILineInfo_t305  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m17576(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2970 *, UILineInfo_t305 , UILineInfo_t305 , MethodInfo*))Comparison_1_Invoke_m17576_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17577_gshared (Comparison_1_t2970 * __this, UILineInfo_t305  ___x, UILineInfo_t305  ___y, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m17577(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2970 *, UILineInfo_t305 , UILineInfo_t305 , AsyncCallback_t171 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m17577_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17578_gshared (Comparison_1_t2970 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m17578(__this, ___result, method) (( int32_t (*) (Comparison_1_t2970 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m17578_gshared)(__this, ___result, method)
