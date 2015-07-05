#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t3049;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3035;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18372_gshared (ShimEnumerator_t3049 * __this, Dictionary_2_t3035 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m18372(__this, ___host, method) (( void (*) (ShimEnumerator_t3049 *, Dictionary_2_t3035 *, MethodInfo*))ShimEnumerator__ctor_m18372_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18373_gshared (ShimEnumerator_t3049 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m18373(__this, method) (( bool (*) (ShimEnumerator_t3049 *, MethodInfo*))ShimEnumerator_MoveNext_m18373_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t918  ShimEnumerator_get_Entry_m18374_gshared (ShimEnumerator_t3049 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m18374(__this, method) (( DictionaryEntry_t918  (*) (ShimEnumerator_t3049 *, MethodInfo*))ShimEnumerator_get_Entry_m18374_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18375_gshared (ShimEnumerator_t3049 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m18375(__this, method) (( Object_t * (*) (ShimEnumerator_t3049 *, MethodInfo*))ShimEnumerator_get_Key_m18375_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18376_gshared (ShimEnumerator_t3049 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m18376(__this, method) (( Object_t * (*) (ShimEnumerator_t3049 *, MethodInfo*))ShimEnumerator_get_Value_m18376_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18377_gshared (ShimEnumerator_t3049 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m18377(__this, method) (( Object_t * (*) (ShimEnumerator_t3049 *, MethodInfo*))ShimEnumerator_get_Current_m18377_gshared)(__this, method)
