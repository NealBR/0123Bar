#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t3289;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3278;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m20544_gshared (ShimEnumerator_t3289 * __this, Dictionary_2_t3278 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m20544(__this, ___host, method) (( void (*) (ShimEnumerator_t3289 *, Dictionary_2_t3278 *, MethodInfo*))ShimEnumerator__ctor_m20544_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m20545_gshared (ShimEnumerator_t3289 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m20545(__this, method) (( bool (*) (ShimEnumerator_t3289 *, MethodInfo*))ShimEnumerator_MoveNext_m20545_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t918  ShimEnumerator_get_Entry_m20546_gshared (ShimEnumerator_t3289 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m20546(__this, method) (( DictionaryEntry_t918  (*) (ShimEnumerator_t3289 *, MethodInfo*))ShimEnumerator_get_Entry_m20546_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m20547_gshared (ShimEnumerator_t3289 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m20547(__this, method) (( Object_t * (*) (ShimEnumerator_t3289 *, MethodInfo*))ShimEnumerator_get_Key_m20547_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m20548_gshared (ShimEnumerator_t3289 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m20548(__this, method) (( Object_t * (*) (ShimEnumerator_t3289 *, MethodInfo*))ShimEnumerator_get_Value_m20548_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m20549_gshared (ShimEnumerator_t3289 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m20549(__this, method) (( Object_t * (*) (ShimEnumerator_t3289 *, MethodInfo*))ShimEnumerator_get_Current_m20549_gshared)(__this, method)
