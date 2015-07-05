#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2568;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2554;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13448_gshared (ShimEnumerator_t2568 * __this, Dictionary_2_t2554 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m13448(__this, ___host, method) (( void (*) (ShimEnumerator_t2568 *, Dictionary_2_t2554 *, MethodInfo*))ShimEnumerator__ctor_m13448_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13449_gshared (ShimEnumerator_t2568 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m13449(__this, method) (( bool (*) (ShimEnumerator_t2568 *, MethodInfo*))ShimEnumerator_MoveNext_m13449_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t918  ShimEnumerator_get_Entry_m13450_gshared (ShimEnumerator_t2568 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m13450(__this, method) (( DictionaryEntry_t918  (*) (ShimEnumerator_t2568 *, MethodInfo*))ShimEnumerator_get_Entry_m13450_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13451_gshared (ShimEnumerator_t2568 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m13451(__this, method) (( Object_t * (*) (ShimEnumerator_t2568 *, MethodInfo*))ShimEnumerator_get_Key_m13451_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13452_gshared (ShimEnumerator_t2568 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m13452(__this, method) (( Object_t * (*) (ShimEnumerator_t2568 *, MethodInfo*))ShimEnumerator_get_Value_m13452_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13453_gshared (ShimEnumerator_t2568 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m13453(__this, method) (( Object_t * (*) (ShimEnumerator_t2568 *, MethodInfo*))ShimEnumerator_get_Current_m13453_gshared)(__this, method)
