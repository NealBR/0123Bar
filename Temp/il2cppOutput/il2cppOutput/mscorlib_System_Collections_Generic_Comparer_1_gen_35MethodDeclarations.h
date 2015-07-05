#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1<System.Guid>
struct Comparer_1_t3409;
// System.Object
struct Object_t;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.ctor()
extern "C" void Comparer_1__ctor_m21324_gshared (Comparer_1_t3409 * __this, MethodInfo* method);
#define Comparer_1__ctor_m21324(__this, method) (( void (*) (Comparer_1_t3409 *, MethodInfo*))Comparer_1__ctor_m21324_gshared)(__this, method)
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.cctor()
extern "C" void Comparer_1__cctor_m21325_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define Comparer_1__cctor_m21325(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))Comparer_1__cctor_m21325_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m21326_gshared (Comparer_1_t3409 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method);
#define Comparer_1_System_Collections_IComparer_Compare_m21326(__this, ___x, ___y, method) (( int32_t (*) (Comparer_1_t3409 *, Object_t *, Object_t *, MethodInfo*))Comparer_1_System_Collections_IComparer_Compare_m21326_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Guid>::get_Default()
extern "C" Comparer_1_t3409 * Comparer_1_get_Default_m21327_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define Comparer_1_get_Default_m21327(__this /* static, unused */, method) (( Comparer_1_t3409 * (*) (Object_t * /* static, unused */, MethodInfo*))Comparer_1_get_Default_m21327_gshared)(__this /* static, unused */, method)
