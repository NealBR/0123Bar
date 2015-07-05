#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2504;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3441;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t596;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2512;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2516;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2501;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t3446;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t3447;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t3448;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t915;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12815_gshared (Dictionary_2_t2504 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m12815(__this, method) (( void (*) (Dictionary_2_t2504 *, MethodInfo*))Dictionary_2__ctor_m12815_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12817_gshared (Dictionary_2_t2504 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m12817(__this, ___comparer, method) (( void (*) (Dictionary_2_t2504 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12817_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m12819_gshared (Dictionary_2_t2504 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m12819(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2504 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12819_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12821_gshared (Dictionary_2_t2504 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m12821(__this, ___capacity, method) (( void (*) (Dictionary_2_t2504 *, int32_t, MethodInfo*))Dictionary_2__ctor_m12821_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12823_gshared (Dictionary_2_t2504 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m12823(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2504 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m12823_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12825_gshared (Dictionary_2_t2504 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m12825(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2504 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2__ctor_m12825_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12827_gshared (Dictionary_2_t2504 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12827(__this, method) (( Object_t* (*) (Dictionary_2_t2504 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12827_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12829_gshared (Dictionary_2_t2504 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12829(__this, method) (( Object_t* (*) (Dictionary_2_t2504 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12829_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12831_gshared (Dictionary_2_t2504 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12831(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2504 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12831_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12833_gshared (Dictionary_2_t2504 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12833(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2504 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12833_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12835_gshared (Dictionary_2_t2504 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12835(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2504 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12835_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12837_gshared (Dictionary_2_t2504 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12837(__this, ___key, method) (( bool (*) (Dictionary_2_t2504 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12837_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12839_gshared (Dictionary_2_t2504 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12839(__this, ___key, method) (( void (*) (Dictionary_2_t2504 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12839_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12841_gshared (Dictionary_2_t2504 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12841(__this, method) (( bool (*) (Dictionary_2_t2504 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12841_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12843_gshared (Dictionary_2_t2504 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12843(__this, method) (( Object_t * (*) (Dictionary_2_t2504 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12843_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12845_gshared (Dictionary_2_t2504 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12845(__this, method) (( bool (*) (Dictionary_2_t2504 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12845_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12847_gshared (Dictionary_2_t2504 * __this, KeyValuePair_2_t2505  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12847(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2504 *, KeyValuePair_2_t2505 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12847_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12849_gshared (Dictionary_2_t2504 * __this, KeyValuePair_2_t2505  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12849(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2504 *, KeyValuePair_2_t2505 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12849_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12851_gshared (Dictionary_2_t2504 * __this, KeyValuePair_2U5BU5D_t3447* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12851(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2504 *, KeyValuePair_2U5BU5D_t3447*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12851_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12853_gshared (Dictionary_2_t2504 * __this, KeyValuePair_2_t2505  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12853(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2504 *, KeyValuePair_2_t2505 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12853_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12855_gshared (Dictionary_2_t2504 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12855(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2504 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12855_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12857_gshared (Dictionary_2_t2504 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12857(__this, method) (( Object_t * (*) (Dictionary_2_t2504 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12857_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12859_gshared (Dictionary_2_t2504 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12859(__this, method) (( Object_t* (*) (Dictionary_2_t2504 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12859_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12861_gshared (Dictionary_2_t2504 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12861(__this, method) (( Object_t * (*) (Dictionary_2_t2504 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12861_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12863_gshared (Dictionary_2_t2504 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m12863(__this, method) (( int32_t (*) (Dictionary_2_t2504 *, MethodInfo*))Dictionary_2_get_Count_m12863_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12865_gshared (Dictionary_2_t2504 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m12865(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2504 *, int32_t, MethodInfo*))Dictionary_2_get_Item_m12865_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12867_gshared (Dictionary_2_t2504 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m12867(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2504 *, int32_t, Object_t *, MethodInfo*))Dictionary_2_set_Item_m12867_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12869_gshared (Dictionary_2_t2504 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m12869(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2504 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m12869_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12871_gshared (Dictionary_2_t2504 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m12871(__this, ___size, method) (( void (*) (Dictionary_2_t2504 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m12871_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12873_gshared (Dictionary_2_t2504 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12873(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2504 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m12873_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2505  Dictionary_2_make_pair_m12875_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m12875(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2505  (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_make_pair_m12875_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m12877_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m12877(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_pick_key_m12877_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12879_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m12879(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_pick_value_m12879_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12881_gshared (Dictionary_2_t2504 * __this, KeyValuePair_2U5BU5D_t3447* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m12881(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2504 *, KeyValuePair_2U5BU5D_t3447*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m12881_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12883_gshared (Dictionary_2_t2504 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m12883(__this, method) (( void (*) (Dictionary_2_t2504 *, MethodInfo*))Dictionary_2_Resize_m12883_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12884_gshared (Dictionary_2_t2504 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m12884(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2504 *, int32_t, Object_t *, MethodInfo*))Dictionary_2_Add_m12884_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12885_gshared (Dictionary_2_t2504 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m12885(__this, method) (( void (*) (Dictionary_2_t2504 *, MethodInfo*))Dictionary_2_Clear_m12885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12887_gshared (Dictionary_2_t2504 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m12887(__this, ___key, method) (( bool (*) (Dictionary_2_t2504 *, int32_t, MethodInfo*))Dictionary_2_ContainsKey_m12887_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12889_gshared (Dictionary_2_t2504 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m12889(__this, ___value, method) (( bool (*) (Dictionary_2_t2504 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m12889_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12891_gshared (Dictionary_2_t2504 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m12891(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2504 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2_GetObjectData_m12891_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12893_gshared (Dictionary_2_t2504 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12893(__this, ___sender, method) (( void (*) (Dictionary_2_t2504 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m12893_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12894_gshared (Dictionary_2_t2504 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_Remove_m12894(__this, ___key, method) (( bool (*) (Dictionary_2_t2504 *, int32_t, MethodInfo*))Dictionary_2_Remove_m12894_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12895_gshared (Dictionary_2_t2504 * __this, int32_t ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m12895(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2504 *, int32_t, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m12895_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t2512 * Dictionary_2_get_Keys_m12897_gshared (Dictionary_2_t2504 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m12897(__this, method) (( KeyCollection_t2512 * (*) (Dictionary_2_t2504 *, MethodInfo*))Dictionary_2_get_Keys_m12897_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2516 * Dictionary_2_get_Values_m12898_gshared (Dictionary_2_t2504 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m12898(__this, method) (( ValueCollection_t2516 * (*) (Dictionary_2_t2504 *, MethodInfo*))Dictionary_2_get_Values_m12898_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m12900_gshared (Dictionary_2_t2504 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m12900(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2504 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m12900_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12902_gshared (Dictionary_2_t2504 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m12902(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2504 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m12902_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12904_gshared (Dictionary_2_t2504 * __this, KeyValuePair_2_t2505  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12904(__this, ___pair, method) (( bool (*) (Dictionary_2_t2504 *, KeyValuePair_2_t2505 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12904_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2514  Dictionary_2_GetEnumerator_m12905_gshared (Dictionary_2_t2504 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12905(__this, method) (( Enumerator_t2514  (*) (Dictionary_2_t2504 *, MethodInfo*))Dictionary_2_GetEnumerator_m12905_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t918  Dictionary_2_U3CCopyToU3Em__0_m12907_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12907(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t918  (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12907_gshared)(__this /* static, unused */, ___key, ___value, method)
