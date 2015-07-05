#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Enumerator_t3175;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t3169;
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19537_gshared (Enumerator_t3175 * __this, Dictionary_2_t3169 * ___host, MethodInfo* method);
#define Enumerator__ctor_m19537(__this, ___host, method) (( void (*) (Enumerator_t3175 *, Dictionary_2_t3169 *, MethodInfo*))Enumerator__ctor_m19537_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19538_gshared (Enumerator_t3175 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m19538(__this, method) (( Object_t * (*) (Enumerator_t3175 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m19538_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Dispose()
extern "C" void Enumerator_Dispose_m19539_gshared (Enumerator_t3175 * __this, MethodInfo* method);
#define Enumerator_Dispose_m19539(__this, method) (( void (*) (Enumerator_t3175 *, MethodInfo*))Enumerator_Dispose_m19539_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19540_gshared (Enumerator_t3175 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m19540(__this, method) (( bool (*) (Enumerator_t3175 *, MethodInfo*))Enumerator_MoveNext_m19540_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Current()
extern "C" KeyValuePair_2_t721  Enumerator_get_Current_m19541_gshared (Enumerator_t3175 * __this, MethodInfo* method);
#define Enumerator_get_Current_m19541(__this, method) (( KeyValuePair_2_t721  (*) (Enumerator_t3175 *, MethodInfo*))Enumerator_get_Current_m19541_gshared)(__this, method)
