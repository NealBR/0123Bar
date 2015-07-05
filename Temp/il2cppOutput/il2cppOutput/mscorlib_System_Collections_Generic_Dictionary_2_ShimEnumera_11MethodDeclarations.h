#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2988;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2974;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17779_gshared (ShimEnumerator_t2988 * __this, Dictionary_2_t2974 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m17779(__this, ___host, method) (( void (*) (ShimEnumerator_t2988 *, Dictionary_2_t2974 *, MethodInfo*))ShimEnumerator__ctor_m17779_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17780_gshared (ShimEnumerator_t2988 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m17780(__this, method) (( bool (*) (ShimEnumerator_t2988 *, MethodInfo*))ShimEnumerator_MoveNext_m17780_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t918  ShimEnumerator_get_Entry_m17781_gshared (ShimEnumerator_t2988 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m17781(__this, method) (( DictionaryEntry_t918  (*) (ShimEnumerator_t2988 *, MethodInfo*))ShimEnumerator_get_Entry_m17781_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17782_gshared (ShimEnumerator_t2988 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m17782(__this, method) (( Object_t * (*) (ShimEnumerator_t2988 *, MethodInfo*))ShimEnumerator_get_Key_m17782_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17783_gshared (ShimEnumerator_t2988 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m17783(__this, method) (( Object_t * (*) (ShimEnumerator_t2988 *, MethodInfo*))ShimEnumerator_get_Value_m17783_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17784_gshared (ShimEnumerator_t2988 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m17784(__this, method) (( Object_t * (*) (ShimEnumerator_t2988 *, MethodInfo*))ShimEnumerator_get_Current_m17784_gshared)(__this, method)
