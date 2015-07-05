#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct ShimEnumerator_t3178;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t3169;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19554_gshared (ShimEnumerator_t3178 * __this, Dictionary_2_t3169 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m19554(__this, ___host, method) (( void (*) (ShimEnumerator_t3178 *, Dictionary_2_t3169 *, MethodInfo*))ShimEnumerator__ctor_m19554_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19555_gshared (ShimEnumerator_t3178 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m19555(__this, method) (( bool (*) (ShimEnumerator_t3178 *, MethodInfo*))ShimEnumerator_MoveNext_m19555_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Entry()
extern "C" DictionaryEntry_t918  ShimEnumerator_get_Entry_m19556_gshared (ShimEnumerator_t3178 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m19556(__this, method) (( DictionaryEntry_t918  (*) (ShimEnumerator_t3178 *, MethodInfo*))ShimEnumerator_get_Entry_m19556_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19557_gshared (ShimEnumerator_t3178 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m19557(__this, method) (( Object_t * (*) (ShimEnumerator_t3178 *, MethodInfo*))ShimEnumerator_get_Key_m19557_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19558_gshared (ShimEnumerator_t3178 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m19558(__this, method) (( Object_t * (*) (ShimEnumerator_t3178 *, MethodInfo*))ShimEnumerator_get_Value_m19558_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m19559_gshared (ShimEnumerator_t3178 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m19559(__this, method) (( Object_t * (*) (ShimEnumerator_t3178 *, MethodInfo*))ShimEnumerator_get_Current_m19559_gshared)(__this, method)
