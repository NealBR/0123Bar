#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t2514;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2504;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12963_gshared (Enumerator_t2514 * __this, Dictionary_2_t2504 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m12963(__this, ___dictionary, method) (( void (*) (Enumerator_t2514 *, Dictionary_2_t2504 *, MethodInfo*))Enumerator__ctor_m12963_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12964_gshared (Enumerator_t2514 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12964(__this, method) (( Object_t * (*) (Enumerator_t2514 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12964_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t918  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12965_gshared (Enumerator_t2514 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12965(__this, method) (( DictionaryEntry_t918  (*) (Enumerator_t2514 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12965_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12966_gshared (Enumerator_t2514 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12966(__this, method) (( Object_t * (*) (Enumerator_t2514 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12966_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12967_gshared (Enumerator_t2514 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12967(__this, method) (( Object_t * (*) (Enumerator_t2514 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12967_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12968_gshared (Enumerator_t2514 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m12968(__this, method) (( bool (*) (Enumerator_t2514 *, MethodInfo*))Enumerator_MoveNext_m12968_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2505  Enumerator_get_Current_m12969_gshared (Enumerator_t2514 * __this, MethodInfo* method);
#define Enumerator_get_Current_m12969(__this, method) (( KeyValuePair_2_t2505  (*) (Enumerator_t2514 *, MethodInfo*))Enumerator_get_Current_m12969_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m12970_gshared (Enumerator_t2514 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m12970(__this, method) (( int32_t (*) (Enumerator_t2514 *, MethodInfo*))Enumerator_get_CurrentKey_m12970_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12971_gshared (Enumerator_t2514 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m12971(__this, method) (( Object_t * (*) (Enumerator_t2514 *, MethodInfo*))Enumerator_get_CurrentValue_m12971_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12972_gshared (Enumerator_t2514 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m12972(__this, method) (( void (*) (Enumerator_t2514 *, MethodInfo*))Enumerator_VerifyState_m12972_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12973_gshared (Enumerator_t2514 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m12973(__this, method) (( void (*) (Enumerator_t2514 *, MethodInfo*))Enumerator_VerifyCurrent_m12973_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12974_gshared (Enumerator_t2514 * __this, MethodInfo* method);
#define Enumerator_Dispose_m12974(__this, method) (( void (*) (Enumerator_t2514 *, MethodInfo*))Enumerator_Dispose_m12974_gshared)(__this, method)
