#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2967;
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

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17565_gshared (Predicate_1_t2967 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m17565(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2967 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m17565_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17566_gshared (Predicate_1_t2967 * __this, UILineInfo_t305  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m17566(__this, ___obj, method) (( bool (*) (Predicate_1_t2967 *, UILineInfo_t305 , MethodInfo*))Predicate_1_Invoke_m17566_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17567_gshared (Predicate_1_t2967 * __this, UILineInfo_t305  ___obj, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m17567(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2967 *, UILineInfo_t305 , AsyncCallback_t171 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m17567_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17568_gshared (Predicate_1_t2967 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m17568(__this, ___result, method) (( bool (*) (Predicate_1_t2967 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m17568_gshared)(__this, ___result, method)
