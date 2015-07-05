#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t3340;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Converter_2__ctor_m20893_gshared (Converter_2_t3340 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Converter_2__ctor_m20893(__this, ___object, ___method, method) (( void (*) (Converter_2_t3340 *, Object_t *, IntPtr_t, MethodInfo*))Converter_2__ctor_m20893_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" Object_t * Converter_2_Invoke_m20894_gshared (Converter_2_t3340 * __this, Object_t * ___input, MethodInfo* method);
#define Converter_2_Invoke_m20894(__this, ___input, method) (( Object_t * (*) (Converter_2_t3340 *, Object_t *, MethodInfo*))Converter_2_Invoke_m20894_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C" Object_t * Converter_2_BeginInvoke_m20895_gshared (Converter_2_t3340 * __this, Object_t * ___input, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method);
#define Converter_2_BeginInvoke_m20895(__this, ___input, ___callback, ___object, method) (( Object_t * (*) (Converter_2_t3340 *, Object_t *, AsyncCallback_t171 *, Object_t *, MethodInfo*))Converter_2_BeginInvoke_m20895_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Converter_2_EndInvoke_m20896_gshared (Converter_2_t3340 * __this, Object_t * ___result, MethodInfo* method);
#define Converter_2_EndInvoke_m20896(__this, ___result, method) (( Object_t * (*) (Converter_2_t3340 *, Object_t *, MethodInfo*))Converter_2_EndInvoke_m20896_gshared)(__this, ___result, method)
