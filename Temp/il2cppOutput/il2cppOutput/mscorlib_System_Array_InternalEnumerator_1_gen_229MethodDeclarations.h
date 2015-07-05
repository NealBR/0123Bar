#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.DateTime>
struct InternalEnumerator_1_t3377;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m21073_gshared (InternalEnumerator_1_t3377 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m21073(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3377 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m21073_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21074_gshared (InternalEnumerator_1_t3377 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21074(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3377 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21074_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m21075_gshared (InternalEnumerator_1_t3377 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m21075(__this, method) (( void (*) (InternalEnumerator_1_t3377 *, MethodInfo*))InternalEnumerator_1_Dispose_m21075_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m21076_gshared (InternalEnumerator_1_t3377 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m21076(__this, method) (( bool (*) (InternalEnumerator_1_t3377 *, MethodInfo*))InternalEnumerator_1_MoveNext_m21076_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t465  InternalEnumerator_1_get_Current_m21077_gshared (InternalEnumerator_1_t3377 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m21077(__this, method) (( DateTime_t465  (*) (InternalEnumerator_1_t3377 *, MethodInfo*))InternalEnumerator_1_get_Current_m21077_gshared)(__this, method)
