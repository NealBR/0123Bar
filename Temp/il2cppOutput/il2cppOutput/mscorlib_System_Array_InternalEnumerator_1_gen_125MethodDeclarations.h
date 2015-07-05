#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct InternalEnumerator_1_t2976;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17693_gshared (InternalEnumerator_1_t2976 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m17693(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2976 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m17693_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17694_gshared (InternalEnumerator_1_t2976 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17694(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2976 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17694_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17695_gshared (InternalEnumerator_1_t2976 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17695(__this, method) (( void (*) (InternalEnumerator_1_t2976 *, MethodInfo*))InternalEnumerator_1_Dispose_m17695_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17696_gshared (InternalEnumerator_1_t2976 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17696(__this, method) (( bool (*) (InternalEnumerator_1_t2976 *, MethodInfo*))InternalEnumerator_1_MoveNext_m17696_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current()
extern "C" KeyValuePair_2_t2975  InternalEnumerator_1_get_Current_m17697_gshared (InternalEnumerator_1_t2976 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17697(__this, method) (( KeyValuePair_2_t2975  (*) (InternalEnumerator_1_t2976 *, MethodInfo*))InternalEnumerator_1_get_Current_m17697_gshared)(__this, method)
