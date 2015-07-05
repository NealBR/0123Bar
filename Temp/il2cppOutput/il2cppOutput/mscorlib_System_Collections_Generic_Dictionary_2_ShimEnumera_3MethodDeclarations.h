#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2608;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2598;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13907_gshared (ShimEnumerator_t2608 * __this, Dictionary_2_t2598 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m13907(__this, ___host, method) (( void (*) (ShimEnumerator_t2608 *, Dictionary_2_t2598 *, MethodInfo*))ShimEnumerator__ctor_m13907_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13908_gshared (ShimEnumerator_t2608 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m13908(__this, method) (( bool (*) (ShimEnumerator_t2608 *, MethodInfo*))ShimEnumerator_MoveNext_m13908_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t918  ShimEnumerator_get_Entry_m13909_gshared (ShimEnumerator_t2608 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m13909(__this, method) (( DictionaryEntry_t918  (*) (ShimEnumerator_t2608 *, MethodInfo*))ShimEnumerator_get_Entry_m13909_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13910_gshared (ShimEnumerator_t2608 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m13910(__this, method) (( Object_t * (*) (ShimEnumerator_t2608 *, MethodInfo*))ShimEnumerator_get_Key_m13910_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13911_gshared (ShimEnumerator_t2608 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m13911(__this, method) (( Object_t * (*) (ShimEnumerator_t2608 *, MethodInfo*))ShimEnumerator_get_Value_m13911_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13912_gshared (ShimEnumerator_t2608 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m13912(__this, method) (( Object_t * (*) (ShimEnumerator_t2608 *, MethodInfo*))ShimEnumerator_get_Current_m13912_gshared)(__this, method)
