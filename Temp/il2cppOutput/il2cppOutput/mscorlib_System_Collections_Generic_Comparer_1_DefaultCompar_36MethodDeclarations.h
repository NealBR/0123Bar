#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t3414;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m21345_gshared (DefaultComparer_t3414 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m21345(__this, method) (( void (*) (DefaultComparer_t3414 *, MethodInfo*))DefaultComparer__ctor_m21345_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m21346_gshared (DefaultComparer_t3414 * __this, TimeSpan_t997  ___x, TimeSpan_t997  ___y, MethodInfo* method);
#define DefaultComparer_Compare_m21346(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3414 *, TimeSpan_t997 , TimeSpan_t997 , MethodInfo*))DefaultComparer_Compare_m21346_gshared)(__this, ___x, ___y, method)
