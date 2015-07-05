#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t2982;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2974;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17732_gshared (Enumerator_t2982 * __this, Dictionary_2_t2974 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m17732(__this, ___dictionary, method) (( void (*) (Enumerator_t2982 *, Dictionary_2_t2974 *, MethodInfo*))Enumerator__ctor_m17732_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17733_gshared (Enumerator_t2982 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17733(__this, method) (( Object_t * (*) (Enumerator_t2982 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17733_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t918  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17734_gshared (Enumerator_t2982 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17734(__this, method) (( DictionaryEntry_t918  (*) (Enumerator_t2982 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17734_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17735_gshared (Enumerator_t2982 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17735(__this, method) (( Object_t * (*) (Enumerator_t2982 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17735_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17736_gshared (Enumerator_t2982 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17736(__this, method) (( Object_t * (*) (Enumerator_t2982 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17736_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17737_gshared (Enumerator_t2982 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m17737(__this, method) (( bool (*) (Enumerator_t2982 *, MethodInfo*))Enumerator_MoveNext_m17737_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t2975  Enumerator_get_Current_m17738_gshared (Enumerator_t2982 * __this, MethodInfo* method);
#define Enumerator_get_Current_m17738(__this, method) (( KeyValuePair_2_t2975  (*) (Enumerator_t2982 *, MethodInfo*))Enumerator_get_Current_m17738_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m17739_gshared (Enumerator_t2982 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m17739(__this, method) (( Object_t * (*) (Enumerator_t2982 *, MethodInfo*))Enumerator_get_CurrentKey_m17739_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m17740_gshared (Enumerator_t2982 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m17740(__this, method) (( int64_t (*) (Enumerator_t2982 *, MethodInfo*))Enumerator_get_CurrentValue_m17740_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m17741_gshared (Enumerator_t2982 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m17741(__this, method) (( void (*) (Enumerator_t2982 *, MethodInfo*))Enumerator_VerifyState_m17741_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17742_gshared (Enumerator_t2982 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m17742(__this, method) (( void (*) (Enumerator_t2982 *, MethodInfo*))Enumerator_VerifyCurrent_m17742_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m17743_gshared (Enumerator_t2982 * __this, MethodInfo* method);
#define Enumerator_Dispose_m17743(__this, method) (( void (*) (Enumerator_t2982 *, MethodInfo*))Enumerator_Dispose_m17743_gshared)(__this, method)
