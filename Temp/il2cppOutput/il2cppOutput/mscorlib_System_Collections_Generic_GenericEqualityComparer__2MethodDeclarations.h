#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
struct GenericEqualityComparer_1_t1876;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m10608_gshared (GenericEqualityComparer_1_t1876 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m10608(__this, method) (( void (*) (GenericEqualityComparer_1_t1876 *, MethodInfo*))GenericEqualityComparer_1__ctor_m10608_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m21347_gshared (GenericEqualityComparer_1_t1876 * __this, TimeSpan_t997  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m21347(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1876 *, TimeSpan_t997 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m21347_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m21348_gshared (GenericEqualityComparer_1_t1876 * __this, TimeSpan_t997  ___x, TimeSpan_t997  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m21348(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1876 *, TimeSpan_t997 , TimeSpan_t997 , MethodInfo*))GenericEqualityComparer_1_Equals_m21348_gshared)(__this, ___x, ___y, method)
