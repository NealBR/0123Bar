#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t1874;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m10597_gshared (GenericEqualityComparer_1_t1874 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m10597(__this, method) (( void (*) (GenericEqualityComparer_1_t1874 *, MethodInfo*))GenericEqualityComparer_1__ctor_m10597_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m21330_gshared (GenericEqualityComparer_1_t1874 * __this, Guid_t723  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m21330(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1874 *, Guid_t723 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m21330_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m21331_gshared (GenericEqualityComparer_1_t1874 * __this, Guid_t723  ___x, Guid_t723  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m21331(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1874 *, Guid_t723 , Guid_t723 , MethodInfo*))GenericEqualityComparer_1_Equals_m21331_gshared)(__this, ___x, ___y, method)
