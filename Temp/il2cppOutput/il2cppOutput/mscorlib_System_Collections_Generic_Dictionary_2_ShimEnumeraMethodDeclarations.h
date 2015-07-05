#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2521;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2504;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13015_gshared (ShimEnumerator_t2521 * __this, Dictionary_2_t2504 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m13015(__this, ___host, method) (( void (*) (ShimEnumerator_t2521 *, Dictionary_2_t2504 *, MethodInfo*))ShimEnumerator__ctor_m13015_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13016_gshared (ShimEnumerator_t2521 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m13016(__this, method) (( bool (*) (ShimEnumerator_t2521 *, MethodInfo*))ShimEnumerator_MoveNext_m13016_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t918  ShimEnumerator_get_Entry_m13017_gshared (ShimEnumerator_t2521 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m13017(__this, method) (( DictionaryEntry_t918  (*) (ShimEnumerator_t2521 *, MethodInfo*))ShimEnumerator_get_Entry_m13017_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13018_gshared (ShimEnumerator_t2521 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m13018(__this, method) (( Object_t * (*) (ShimEnumerator_t2521 *, MethodInfo*))ShimEnumerator_get_Key_m13018_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13019_gshared (ShimEnumerator_t2521 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m13019(__this, method) (( Object_t * (*) (ShimEnumerator_t2521 *, MethodInfo*))ShimEnumerator_get_Value_m13019_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13020_gshared (ShimEnumerator_t2521 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m13020(__this, method) (( Object_t * (*) (ShimEnumerator_t2521 *, MethodInfo*))ShimEnumerator_get_Current_m13020_gshared)(__this, method)
