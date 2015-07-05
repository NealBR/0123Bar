#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Decimal>
struct InternalEnumerator_1_t3380;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m21088_gshared (InternalEnumerator_1_t3380 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m21088(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3380 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m21088_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21089_gshared (InternalEnumerator_1_t3380 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21089(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3380 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21089_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m21090_gshared (InternalEnumerator_1_t3380 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m21090(__this, method) (( void (*) (InternalEnumerator_1_t3380 *, MethodInfo*))InternalEnumerator_1_Dispose_m21090_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m21091_gshared (InternalEnumerator_1_t3380 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m21091(__this, method) (( bool (*) (InternalEnumerator_1_t3380 *, MethodInfo*))InternalEnumerator_1_MoveNext_m21091_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t709  InternalEnumerator_1_get_Current_m21092_gshared (InternalEnumerator_1_t3380 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m21092(__this, method) (( Decimal_t709  (*) (InternalEnumerator_1_t3380 *, MethodInfo*))InternalEnumerator_1_get_Current_m21092_gshared)(__this, method)
