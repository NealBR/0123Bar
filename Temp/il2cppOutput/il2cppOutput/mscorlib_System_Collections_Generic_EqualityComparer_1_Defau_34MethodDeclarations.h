#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>
struct DefaultComparer_t2991;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::.ctor()
extern "C" void DefaultComparer__ctor_m17793_gshared (DefaultComparer_t2991 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m17793(__this, method) (( void (*) (DefaultComparer_t2991 *, MethodInfo*))DefaultComparer__ctor_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17794_gshared (DefaultComparer_t2991 * __this, int64_t ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m17794(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2991 *, int64_t, MethodInfo*))DefaultComparer_GetHashCode_m17794_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17795_gshared (DefaultComparer_t2991 * __this, int64_t ___x, int64_t ___y, MethodInfo* method);
#define DefaultComparer_Equals_m17795(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2991 *, int64_t, int64_t, MethodInfo*))DefaultComparer_Equals_m17795_gshared)(__this, ___x, ___y, method)
