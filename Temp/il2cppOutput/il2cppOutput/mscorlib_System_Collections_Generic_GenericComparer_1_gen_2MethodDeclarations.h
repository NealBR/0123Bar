#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t1875;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m10607_gshared (GenericComparer_1_t1875 * __this, MethodInfo* method);
#define GenericComparer_1__ctor_m10607(__this, method) (( void (*) (GenericComparer_1_t1875 *, MethodInfo*))GenericComparer_1__ctor_m10607_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m21340_gshared (GenericComparer_1_t1875 * __this, TimeSpan_t997  ___x, TimeSpan_t997  ___y, MethodInfo* method);
#define GenericComparer_1_Compare_m21340(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1875 *, TimeSpan_t997 , TimeSpan_t997 , MethodInfo*))GenericComparer_1_Compare_m21340_gshared)(__this, ___x, ___y, method)
