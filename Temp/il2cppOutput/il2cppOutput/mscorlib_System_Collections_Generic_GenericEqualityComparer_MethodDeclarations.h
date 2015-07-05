#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
struct GenericEqualityComparer_1_t1870;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m10584_gshared (GenericEqualityComparer_1_t1870 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m10584(__this, method) (( void (*) (GenericEqualityComparer_1_t1870 *, MethodInfo*))GenericEqualityComparer_1__ctor_m10584_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m21292_gshared (GenericEqualityComparer_1_t1870 * __this, DateTime_t465  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m21292(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1870 *, DateTime_t465 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m21292_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m21293_gshared (GenericEqualityComparer_1_t1870 * __this, DateTime_t465  ___x, DateTime_t465  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m21293(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1870 *, DateTime_t465 , DateTime_t465 , MethodInfo*))GenericEqualityComparer_1_Equals_m21293_gshared)(__this, ___x, ___y, method)
