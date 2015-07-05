#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct InternalEnumerator_1_t2899;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16734_gshared (InternalEnumerator_1_t2899 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m16734(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2899 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m16734_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16735_gshared (InternalEnumerator_1_t2899 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16735(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2899 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16735_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16736_gshared (InternalEnumerator_1_t2899 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16736(__this, method) (( void (*) (InternalEnumerator_1_t2899 *, MethodInfo*))InternalEnumerator_1_Dispose_m16736_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16737_gshared (InternalEnumerator_1_t2899 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16737(__this, method) (( bool (*) (InternalEnumerator_1_t2899 *, MethodInfo*))InternalEnumerator_1_MoveNext_m16737_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current()
extern "C" KeyValuePair_2_t692  InternalEnumerator_1_get_Current_m16738_gshared (InternalEnumerator_1_t2899 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16738(__this, method) (( KeyValuePair_2_t692  (*) (InternalEnumerator_1_t2899 *, MethodInfo*))InternalEnumerator_1_get_Current_m16738_gshared)(__this, method)
