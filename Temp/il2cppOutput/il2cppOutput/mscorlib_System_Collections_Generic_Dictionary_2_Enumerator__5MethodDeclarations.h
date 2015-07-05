#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t2603;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2598;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13864_gshared (Enumerator_t2603 * __this, Dictionary_2_t2598 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m13864(__this, ___dictionary, method) (( void (*) (Enumerator_t2603 *, Dictionary_2_t2598 *, MethodInfo*))Enumerator__ctor_m13864_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13865_gshared (Enumerator_t2603 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13865(__this, method) (( Object_t * (*) (Enumerator_t2603 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13865_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t918  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13866_gshared (Enumerator_t2603 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13866(__this, method) (( DictionaryEntry_t918  (*) (Enumerator_t2603 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13866_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13867_gshared (Enumerator_t2603 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13867(__this, method) (( Object_t * (*) (Enumerator_t2603 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13867_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13868_gshared (Enumerator_t2603 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13868(__this, method) (( Object_t * (*) (Enumerator_t2603 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13868_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13869_gshared (Enumerator_t2603 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m13869(__this, method) (( bool (*) (Enumerator_t2603 *, MethodInfo*))Enumerator_MoveNext_m13869_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2599  Enumerator_get_Current_m13870_gshared (Enumerator_t2603 * __this, MethodInfo* method);
#define Enumerator_get_Current_m13870(__this, method) (( KeyValuePair_2_t2599  (*) (Enumerator_t2603 *, MethodInfo*))Enumerator_get_Current_m13870_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m13871_gshared (Enumerator_t2603 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m13871(__this, method) (( Object_t * (*) (Enumerator_t2603 *, MethodInfo*))Enumerator_get_CurrentKey_m13871_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m13872_gshared (Enumerator_t2603 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m13872(__this, method) (( Object_t * (*) (Enumerator_t2603 *, MethodInfo*))Enumerator_get_CurrentValue_m13872_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m13873_gshared (Enumerator_t2603 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m13873(__this, method) (( void (*) (Enumerator_t2603 *, MethodInfo*))Enumerator_VerifyState_m13873_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13874_gshared (Enumerator_t2603 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m13874(__this, method) (( void (*) (Enumerator_t2603 *, MethodInfo*))Enumerator_VerifyCurrent_m13874_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13875_gshared (Enumerator_t2603 * __this, MethodInfo* method);
#define Enumerator_Dispose_m13875(__this, method) (( void (*) (Enumerator_t2603 *, MethodInfo*))Enumerator_Dispose_m13875_gshared)(__this, method)
