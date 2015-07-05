#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t3408;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m21316_gshared (DefaultComparer_t3408 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m21316(__this, method) (( void (*) (DefaultComparer_t3408 *, MethodInfo*))DefaultComparer__ctor_m21316_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21317_gshared (DefaultComparer_t3408 * __this, DateTimeOffset_t722  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m21317(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3408 *, DateTimeOffset_t722 , MethodInfo*))DefaultComparer_GetHashCode_m21317_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21318_gshared (DefaultComparer_t3408 * __this, DateTimeOffset_t722  ___x, DateTimeOffset_t722  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m21318(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3408 *, DateTimeOffset_t722 , DateTimeOffset_t722 , MethodInfo*))DefaultComparer_Equals_m21318_gshared)(__this, ___x, ___y, method)
