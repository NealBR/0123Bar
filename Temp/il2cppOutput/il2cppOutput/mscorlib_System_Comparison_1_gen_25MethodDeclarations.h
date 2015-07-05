#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2961;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m17433_gshared (Comparison_1_t2961 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m17433(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2961 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m17433_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17434_gshared (Comparison_1_t2961 * __this, UICharInfo_t307  ___x, UICharInfo_t307  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m17434(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2961 *, UICharInfo_t307 , UICharInfo_t307 , MethodInfo*))Comparison_1_Invoke_m17434_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17435_gshared (Comparison_1_t2961 * __this, UICharInfo_t307  ___x, UICharInfo_t307  ___y, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m17435(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2961 *, UICharInfo_t307 , UICharInfo_t307 , AsyncCallback_t171 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m17435_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17436_gshared (Comparison_1_t2961 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m17436(__this, ___result, method) (( int32_t (*) (Comparison_1_t2961 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m17436_gshared)(__this, ___result, method)
