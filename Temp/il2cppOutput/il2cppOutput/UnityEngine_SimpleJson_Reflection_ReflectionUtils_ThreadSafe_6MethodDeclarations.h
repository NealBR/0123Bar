#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t3104;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t596;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t3102;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3469;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3470;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m18767_gshared (ThreadSafeDictionary_2_t3104 * __this, ThreadSafeDictionaryValueFactory_2_t3102 * ___valueFactory, MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m18767(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t3104 *, ThreadSafeDictionaryValueFactory_2_t3102 *, MethodInfo*))ThreadSafeDictionary_2__ctor_m18767_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m18769_gshared (ThreadSafeDictionary_2_t3104 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m18769(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3104 *, MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m18769_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m18771_gshared (ThreadSafeDictionary_2_t3104 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m18771(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3104 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_Get_m18771_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m18773_gshared (ThreadSafeDictionary_2_t3104 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m18773(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3104 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_AddValue_m18773_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m18775_gshared (ThreadSafeDictionary_2_t3104 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m18775(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3104 *, Object_t *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_Add_m18775_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m18777_gshared (ThreadSafeDictionary_2_t3104 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m18777(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3104 *, MethodInfo*))ThreadSafeDictionary_2_get_Keys_m18777_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m18779_gshared (ThreadSafeDictionary_2_t3104 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m18779(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t3104 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_Remove_m18779_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m18781_gshared (ThreadSafeDictionary_2_t3104 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m18781(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t3104 *, Object_t *, Object_t **, MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m18781_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m18783_gshared (ThreadSafeDictionary_2_t3104 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m18783(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3104 *, MethodInfo*))ThreadSafeDictionary_2_get_Values_m18783_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m18785_gshared (ThreadSafeDictionary_2_t3104 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m18785(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3104 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_get_Item_m18785_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m18787_gshared (ThreadSafeDictionary_2_t3104 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m18787(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3104 *, Object_t *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_set_Item_m18787_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m18789_gshared (ThreadSafeDictionary_2_t3104 * __this, KeyValuePair_2_t2599  ___item, MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m18789(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t3104 *, KeyValuePair_2_t2599 , MethodInfo*))ThreadSafeDictionary_2_Add_m18789_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m18791_gshared (ThreadSafeDictionary_2_t3104 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m18791(__this, method) (( void (*) (ThreadSafeDictionary_2_t3104 *, MethodInfo*))ThreadSafeDictionary_2_Clear_m18791_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m18793_gshared (ThreadSafeDictionary_2_t3104 * __this, KeyValuePair_2_t2599  ___item, MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m18793(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3104 *, KeyValuePair_2_t2599 , MethodInfo*))ThreadSafeDictionary_2_Contains_m18793_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m18795_gshared (ThreadSafeDictionary_2_t3104 * __this, KeyValuePair_2U5BU5D_t3469* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m18795(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t3104 *, KeyValuePair_2U5BU5D_t3469*, int32_t, MethodInfo*))ThreadSafeDictionary_2_CopyTo_m18795_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m18797_gshared (ThreadSafeDictionary_2_t3104 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m18797(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t3104 *, MethodInfo*))ThreadSafeDictionary_2_get_Count_m18797_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m18799_gshared (ThreadSafeDictionary_2_t3104 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m18799(__this, method) (( bool (*) (ThreadSafeDictionary_2_t3104 *, MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m18799_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m18801_gshared (ThreadSafeDictionary_2_t3104 * __this, KeyValuePair_2_t2599  ___item, MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m18801(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3104 *, KeyValuePair_2_t2599 , MethodInfo*))ThreadSafeDictionary_2_Remove_m18801_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m18803_gshared (ThreadSafeDictionary_2_t3104 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m18803(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3104 *, MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m18803_gshared)(__this, method)
