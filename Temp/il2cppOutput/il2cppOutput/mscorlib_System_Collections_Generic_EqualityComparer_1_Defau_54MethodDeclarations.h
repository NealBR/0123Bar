#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t3412;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m21337_gshared (DefaultComparer_t3412 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m21337(__this, method) (( void (*) (DefaultComparer_t3412 *, MethodInfo*))DefaultComparer__ctor_m21337_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21338_gshared (DefaultComparer_t3412 * __this, Guid_t723  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m21338(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3412 *, Guid_t723 , MethodInfo*))DefaultComparer_GetHashCode_m21338_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21339_gshared (DefaultComparer_t3412 * __this, Guid_t723  ___x, Guid_t723  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m21339(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3412 *, Guid_t723 , Guid_t723 , MethodInfo*))DefaultComparer_Equals_m21339_gshared)(__this, ___x, ___y, method)
