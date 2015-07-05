#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1030;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3441;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t3316;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t3320;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2501;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t3615;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3616;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t3617;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t915;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m20688_gshared (Dictionary_2_t1030 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m20688(__this, method) (( void (*) (Dictionary_2_t1030 *, MethodInfo*))Dictionary_2__ctor_m20688_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20689_gshared (Dictionary_2_t1030 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m20689(__this, ___comparer, method) (( void (*) (Dictionary_2_t1030 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m20689_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m20690_gshared (Dictionary_2_t1030 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m20690(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1030 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m20690_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20691_gshared (Dictionary_2_t1030 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m20691(__this, ___capacity, method) (( void (*) (Dictionary_2_t1030 *, int32_t, MethodInfo*))Dictionary_2__ctor_m20691_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20692_gshared (Dictionary_2_t1030 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m20692(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1030 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m20692_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20693_gshared (Dictionary_2_t1030 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m20693(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1030 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2__ctor_m20693_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20694_gshared (Dictionary_2_t1030 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20694(__this, method) (( Object_t* (*) (Dictionary_2_t1030 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20694_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20695_gshared (Dictionary_2_t1030 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20695(__this, method) (( Object_t* (*) (Dictionary_2_t1030 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20695_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20696_gshared (Dictionary_2_t1030 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20696(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1030 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20696_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20697_gshared (Dictionary_2_t1030 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20697(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1030 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20697_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20698_gshared (Dictionary_2_t1030 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20698(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1030 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20698_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20699_gshared (Dictionary_2_t1030 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20699(__this, ___key, method) (( bool (*) (Dictionary_2_t1030 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20699_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20700_gshared (Dictionary_2_t1030 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20700(__this, ___key, method) (( void (*) (Dictionary_2_t1030 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20700_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20701_gshared (Dictionary_2_t1030 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20701(__this, method) (( bool (*) (Dictionary_2_t1030 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20701_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20702_gshared (Dictionary_2_t1030 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20702(__this, method) (( Object_t * (*) (Dictionary_2_t1030 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20702_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20703_gshared (Dictionary_2_t1030 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20703(__this, method) (( bool (*) (Dictionary_2_t1030 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20703_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20704_gshared (Dictionary_2_t1030 * __this, KeyValuePair_2_t3314  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20704(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1030 *, KeyValuePair_2_t3314 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20704_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20705_gshared (Dictionary_2_t1030 * __this, KeyValuePair_2_t3314  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20705(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1030 *, KeyValuePair_2_t3314 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20705_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20706_gshared (Dictionary_2_t1030 * __this, KeyValuePair_2U5BU5D_t3616* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20706(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1030 *, KeyValuePair_2U5BU5D_t3616*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20706_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20707_gshared (Dictionary_2_t1030 * __this, KeyValuePair_2_t3314  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20707(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1030 *, KeyValuePair_2_t3314 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20707_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20708_gshared (Dictionary_2_t1030 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20708(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1030 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20708_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20709_gshared (Dictionary_2_t1030 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20709(__this, method) (( Object_t * (*) (Dictionary_2_t1030 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20709_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20710_gshared (Dictionary_2_t1030 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20710(__this, method) (( Object_t* (*) (Dictionary_2_t1030 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20710_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20711_gshared (Dictionary_2_t1030 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20711(__this, method) (( Object_t * (*) (Dictionary_2_t1030 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20711_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20712_gshared (Dictionary_2_t1030 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m20712(__this, method) (( int32_t (*) (Dictionary_2_t1030 *, MethodInfo*))Dictionary_2_get_Count_m20712_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m20713_gshared (Dictionary_2_t1030 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m20713(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1030 *, int32_t, MethodInfo*))Dictionary_2_get_Item_m20713_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20714_gshared (Dictionary_2_t1030 * __this, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m20714(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1030 *, int32_t, int32_t, MethodInfo*))Dictionary_2_set_Item_m20714_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20715_gshared (Dictionary_2_t1030 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m20715(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1030 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m20715_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20716_gshared (Dictionary_2_t1030 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m20716(__this, ___size, method) (( void (*) (Dictionary_2_t1030 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m20716_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20717_gshared (Dictionary_2_t1030 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20717(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1030 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m20717_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3314  Dictionary_2_make_pair_m20718_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m20718(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3314  (*) (Object_t * /* static, unused */, int32_t, int32_t, MethodInfo*))Dictionary_2_make_pair_m20718_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m20719_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m20719(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, MethodInfo*))Dictionary_2_pick_key_m20719_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m20720_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m20720(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, MethodInfo*))Dictionary_2_pick_value_m20720_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20721_gshared (Dictionary_2_t1030 * __this, KeyValuePair_2U5BU5D_t3616* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m20721(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1030 *, KeyValuePair_2U5BU5D_t3616*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m20721_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m20722_gshared (Dictionary_2_t1030 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m20722(__this, method) (( void (*) (Dictionary_2_t1030 *, MethodInfo*))Dictionary_2_Resize_m20722_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20723_gshared (Dictionary_2_t1030 * __this, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m20723(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1030 *, int32_t, int32_t, MethodInfo*))Dictionary_2_Add_m20723_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m20724_gshared (Dictionary_2_t1030 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m20724(__this, method) (( void (*) (Dictionary_2_t1030 *, MethodInfo*))Dictionary_2_Clear_m20724_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20725_gshared (Dictionary_2_t1030 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m20725(__this, ___key, method) (( bool (*) (Dictionary_2_t1030 *, int32_t, MethodInfo*))Dictionary_2_ContainsKey_m20725_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20726_gshared (Dictionary_2_t1030 * __this, int32_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m20726(__this, ___value, method) (( bool (*) (Dictionary_2_t1030 *, int32_t, MethodInfo*))Dictionary_2_ContainsValue_m20726_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20727_gshared (Dictionary_2_t1030 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m20727(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1030 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2_GetObjectData_m20727_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20728_gshared (Dictionary_2_t1030 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20728(__this, ___sender, method) (( void (*) (Dictionary_2_t1030 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m20728_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20729_gshared (Dictionary_2_t1030 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_Remove_m20729(__this, ___key, method) (( bool (*) (Dictionary_2_t1030 *, int32_t, MethodInfo*))Dictionary_2_Remove_m20729_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20730_gshared (Dictionary_2_t1030 * __this, int32_t ___key, int32_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m20730(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1030 *, int32_t, int32_t*, MethodInfo*))Dictionary_2_TryGetValue_m20730_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t3316 * Dictionary_2_get_Keys_m20731_gshared (Dictionary_2_t1030 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m20731(__this, method) (( KeyCollection_t3316 * (*) (Dictionary_2_t1030 *, MethodInfo*))Dictionary_2_get_Keys_m20731_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t3320 * Dictionary_2_get_Values_m20732_gshared (Dictionary_2_t1030 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m20732(__this, method) (( ValueCollection_t3320 * (*) (Dictionary_2_t1030 *, MethodInfo*))Dictionary_2_get_Values_m20732_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m20733_gshared (Dictionary_2_t1030 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m20733(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1030 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m20733_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m20734_gshared (Dictionary_2_t1030 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m20734(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1030 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m20734_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20735_gshared (Dictionary_2_t1030 * __this, KeyValuePair_2_t3314  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20735(__this, ___pair, method) (( bool (*) (Dictionary_2_t1030 *, KeyValuePair_2_t3314 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20735_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t3318  Dictionary_2_GetEnumerator_m20736_gshared (Dictionary_2_t1030 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m20736(__this, method) (( Enumerator_t3318  (*) (Dictionary_2_t1030 *, MethodInfo*))Dictionary_2_GetEnumerator_m20736_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t918  Dictionary_2_U3CCopyToU3Em__0_m20737_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m20737(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t918  (*) (Object_t * /* static, unused */, int32_t, int32_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20737_gshared)(__this /* static, unused */, ___key, ___value, method)
