#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t3402;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m21290_gshared (DefaultComparer_t3402 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m21290(__this, method) (( void (*) (DefaultComparer_t3402 *, MethodInfo*))DefaultComparer__ctor_m21290_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m21291_gshared (DefaultComparer_t3402 * __this, DateTime_t465  ___x, DateTime_t465  ___y, MethodInfo* method);
#define DefaultComparer_Compare_m21291(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3402 *, DateTime_t465 , DateTime_t465 , MethodInfo*))DefaultComparer_Compare_m21291_gshared)(__this, ___x, ___y, method)
