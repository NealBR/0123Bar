#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t3323;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1030;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m20811_gshared (ShimEnumerator_t3323 * __this, Dictionary_2_t1030 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m20811(__this, ___host, method) (( void (*) (ShimEnumerator_t3323 *, Dictionary_2_t1030 *, MethodInfo*))ShimEnumerator__ctor_m20811_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m20812_gshared (ShimEnumerator_t3323 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m20812(__this, method) (( bool (*) (ShimEnumerator_t3323 *, MethodInfo*))ShimEnumerator_MoveNext_m20812_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t918  ShimEnumerator_get_Entry_m20813_gshared (ShimEnumerator_t3323 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m20813(__this, method) (( DictionaryEntry_t918  (*) (ShimEnumerator_t3323 *, MethodInfo*))ShimEnumerator_get_Entry_m20813_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m20814_gshared (ShimEnumerator_t3323 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m20814(__this, method) (( Object_t * (*) (ShimEnumerator_t3323 *, MethodInfo*))ShimEnumerator_get_Key_m20814_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m20815_gshared (ShimEnumerator_t3323 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m20815(__this, method) (( Object_t * (*) (ShimEnumerator_t3323 *, MethodInfo*))ShimEnumerator_get_Value_m20815_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m20816_gshared (ShimEnumerator_t3323 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m20816(__this, method) (( Object_t * (*) (ShimEnumerator_t3323 *, MethodInfo*))ShimEnumerator_get_Current_m20816_gshared)(__this, method)
