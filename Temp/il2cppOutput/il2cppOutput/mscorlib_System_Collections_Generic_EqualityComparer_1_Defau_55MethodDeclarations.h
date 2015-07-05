#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t3416;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m21354_gshared (DefaultComparer_t3416 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m21354(__this, method) (( void (*) (DefaultComparer_t3416 *, MethodInfo*))DefaultComparer__ctor_m21354_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21355_gshared (DefaultComparer_t3416 * __this, TimeSpan_t997  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m21355(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3416 *, TimeSpan_t997 , MethodInfo*))DefaultComparer_GetHashCode_m21355_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21356_gshared (DefaultComparer_t3416 * __this, TimeSpan_t997  ___x, TimeSpan_t997  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m21356(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3416 *, TimeSpan_t997 , TimeSpan_t997 , MethodInfo*))DefaultComparer_Equals_m21356_gshared)(__this, ___x, ___y, method)
