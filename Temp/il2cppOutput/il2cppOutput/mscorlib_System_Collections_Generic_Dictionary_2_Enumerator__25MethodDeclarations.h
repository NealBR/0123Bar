#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t3318;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1030;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20768_gshared (Enumerator_t3318 * __this, Dictionary_2_t1030 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m20768(__this, ___dictionary, method) (( void (*) (Enumerator_t3318 *, Dictionary_2_t1030 *, MethodInfo*))Enumerator__ctor_m20768_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20769_gshared (Enumerator_t3318 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20769(__this, method) (( Object_t * (*) (Enumerator_t3318 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20769_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t918  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20770_gshared (Enumerator_t3318 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20770(__this, method) (( DictionaryEntry_t918  (*) (Enumerator_t3318 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20770_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20771_gshared (Enumerator_t3318 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20771(__this, method) (( Object_t * (*) (Enumerator_t3318 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20771_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20772_gshared (Enumerator_t3318 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20772(__this, method) (( Object_t * (*) (Enumerator_t3318 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20772_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20773_gshared (Enumerator_t3318 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m20773(__this, method) (( bool (*) (Enumerator_t3318 *, MethodInfo*))Enumerator_MoveNext_m20773_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t3314  Enumerator_get_Current_m20774_gshared (Enumerator_t3318 * __this, MethodInfo* method);
#define Enumerator_get_Current_m20774(__this, method) (( KeyValuePair_2_t3314  (*) (Enumerator_t3318 *, MethodInfo*))Enumerator_get_Current_m20774_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m20775_gshared (Enumerator_t3318 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m20775(__this, method) (( int32_t (*) (Enumerator_t3318 *, MethodInfo*))Enumerator_get_CurrentKey_m20775_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m20776_gshared (Enumerator_t3318 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m20776(__this, method) (( int32_t (*) (Enumerator_t3318 *, MethodInfo*))Enumerator_get_CurrentValue_m20776_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m20777_gshared (Enumerator_t3318 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m20777(__this, method) (( void (*) (Enumerator_t3318 *, MethodInfo*))Enumerator_VerifyState_m20777_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20778_gshared (Enumerator_t3318 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m20778(__this, method) (( void (*) (Enumerator_t3318 *, MethodInfo*))Enumerator_VerifyCurrent_m20778_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m20779_gshared (Enumerator_t3318 * __this, MethodInfo* method);
#define Enumerator_Dispose_m20779(__this, method) (( void (*) (Enumerator_t3318 *, MethodInfo*))Enumerator_Dispose_m20779_gshared)(__this, method)
