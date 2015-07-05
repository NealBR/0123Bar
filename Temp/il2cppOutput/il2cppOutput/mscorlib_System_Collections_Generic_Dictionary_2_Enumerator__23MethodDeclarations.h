#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t3283;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3278;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20497_gshared (Enumerator_t3283 * __this, Dictionary_2_t3278 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m20497(__this, ___dictionary, method) (( void (*) (Enumerator_t3283 *, Dictionary_2_t3278 *, MethodInfo*))Enumerator__ctor_m20497_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20498_gshared (Enumerator_t3283 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20498(__this, method) (( Object_t * (*) (Enumerator_t3283 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20498_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t918  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20499_gshared (Enumerator_t3283 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20499(__this, method) (( DictionaryEntry_t918  (*) (Enumerator_t3283 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20499_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20500_gshared (Enumerator_t3283 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20500(__this, method) (( Object_t * (*) (Enumerator_t3283 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20500_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20501_gshared (Enumerator_t3283 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20501(__this, method) (( Object_t * (*) (Enumerator_t3283 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20502_gshared (Enumerator_t3283 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m20502(__this, method) (( bool (*) (Enumerator_t3283 *, MethodInfo*))Enumerator_MoveNext_m20502_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t3279  Enumerator_get_Current_m20503_gshared (Enumerator_t3283 * __this, MethodInfo* method);
#define Enumerator_get_Current_m20503(__this, method) (( KeyValuePair_2_t3279  (*) (Enumerator_t3283 *, MethodInfo*))Enumerator_get_Current_m20503_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m20504_gshared (Enumerator_t3283 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m20504(__this, method) (( Object_t * (*) (Enumerator_t3283 *, MethodInfo*))Enumerator_get_CurrentKey_m20504_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m20505_gshared (Enumerator_t3283 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m20505(__this, method) (( uint8_t (*) (Enumerator_t3283 *, MethodInfo*))Enumerator_get_CurrentValue_m20505_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m20506_gshared (Enumerator_t3283 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m20506(__this, method) (( void (*) (Enumerator_t3283 *, MethodInfo*))Enumerator_VerifyState_m20506_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20507_gshared (Enumerator_t3283 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m20507(__this, method) (( void (*) (Enumerator_t3283 *, MethodInfo*))Enumerator_VerifyCurrent_m20507_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m20508_gshared (Enumerator_t3283 * __this, MethodInfo* method);
#define Enumerator_Dispose_m20508(__this, method) (( void (*) (Enumerator_t3283 *, MethodInfo*))Enumerator_Dispose_m20508_gshared)(__this, method)
