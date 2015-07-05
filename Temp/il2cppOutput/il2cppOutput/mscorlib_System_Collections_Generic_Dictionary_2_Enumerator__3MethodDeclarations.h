#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t2562;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2554;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13401_gshared (Enumerator_t2562 * __this, Dictionary_2_t2554 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m13401(__this, ___dictionary, method) (( void (*) (Enumerator_t2562 *, Dictionary_2_t2554 *, MethodInfo*))Enumerator__ctor_m13401_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13402_gshared (Enumerator_t2562 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13402(__this, method) (( Object_t * (*) (Enumerator_t2562 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13402_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t918  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13403_gshared (Enumerator_t2562 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13403(__this, method) (( DictionaryEntry_t918  (*) (Enumerator_t2562 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13403_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13404_gshared (Enumerator_t2562 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13404(__this, method) (( Object_t * (*) (Enumerator_t2562 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13404_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13405_gshared (Enumerator_t2562 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13405(__this, method) (( Object_t * (*) (Enumerator_t2562 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13405_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13406_gshared (Enumerator_t2562 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m13406(__this, method) (( bool (*) (Enumerator_t2562 *, MethodInfo*))Enumerator_MoveNext_m13406_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2558  Enumerator_get_Current_m13407_gshared (Enumerator_t2562 * __this, MethodInfo* method);
#define Enumerator_get_Current_m13407(__this, method) (( KeyValuePair_2_t2558  (*) (Enumerator_t2562 *, MethodInfo*))Enumerator_get_Current_m13407_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m13408_gshared (Enumerator_t2562 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m13408(__this, method) (( Object_t * (*) (Enumerator_t2562 *, MethodInfo*))Enumerator_get_CurrentKey_m13408_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m13409_gshared (Enumerator_t2562 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m13409(__this, method) (( int32_t (*) (Enumerator_t2562 *, MethodInfo*))Enumerator_get_CurrentValue_m13409_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m13410_gshared (Enumerator_t2562 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m13410(__this, method) (( void (*) (Enumerator_t2562 *, MethodInfo*))Enumerator_VerifyState_m13410_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13411_gshared (Enumerator_t2562 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m13411(__this, method) (( void (*) (Enumerator_t2562 *, MethodInfo*))Enumerator_VerifyCurrent_m13411_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m13412_gshared (Enumerator_t2562 * __this, MethodInfo* method);
#define Enumerator_Dispose_m13412(__this, method) (( void (*) (Enumerator_t2562 *, MethodInfo*))Enumerator_Dispose_m13412_gshared)(__this, method)
