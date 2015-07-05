#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t565;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t595;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t3541;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>
struct KeyCollection_t2994;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>
struct ValueCollection_t2998;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2335;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t3542;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t3543;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t3544;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t915;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"
#define Dictionary_2__ctor_m17588(__this, method) (( void (*) (Dictionary_2_t565 *, MethodInfo*))Dictionary_2__ctor_m17589_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17590(__this, ___comparer, method) (( void (*) (Dictionary_2_t565 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m17591_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m17592(__this, ___dictionary, method) (( void (*) (Dictionary_2_t565 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m17593_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Int32)
#define Dictionary_2__ctor_m17594(__this, ___capacity, method) (( void (*) (Dictionary_2_t565 *, int32_t, MethodInfo*))Dictionary_2__ctor_m17595_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17596(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t565 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m17597_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m17598(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t565 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2__ctor_m17599_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17600(__this, method) (( Object_t* (*) (Dictionary_2_t565 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17601_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17602(__this, method) (( Object_t* (*) (Dictionary_2_t565 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17603_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17604(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t565 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17605_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17606(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t565 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17607_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m17608(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t565 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17609_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m17610(__this, ___key, method) (( bool (*) (Dictionary_2_t565 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17611_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m17612(__this, ___key, method) (( void (*) (Dictionary_2_t565 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17613_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17614(__this, method) (( bool (*) (Dictionary_2_t565 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17615_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17616(__this, method) (( Object_t * (*) (Dictionary_2_t565 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17617_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17618(__this, method) (( bool (*) (Dictionary_2_t565 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17620(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t565 *, KeyValuePair_2_t2992 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17621_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17622(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t565 *, KeyValuePair_2_t2992 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17623_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17624(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t565 *, KeyValuePair_2U5BU5D_t3543*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17625_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17626(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t565 *, KeyValuePair_2_t2992 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17627_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17628(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t565 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17629_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17630(__this, method) (( Object_t * (*) (Dictionary_2_t565 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17631_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17632(__this, method) (( Object_t* (*) (Dictionary_2_t565 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17633_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17634(__this, method) (( Object_t * (*) (Dictionary_2_t565 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17635_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count()
#define Dictionary_2_get_Count_m3425(__this, method) (( int32_t (*) (Dictionary_2_t565 *, MethodInfo*))Dictionary_2_get_Count_m17636_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Item(TKey)
#define Dictionary_2_get_Item_m17637(__this, ___key, method) (( int64_t (*) (Dictionary_2_t565 *, String_t*, MethodInfo*))Dictionary_2_get_Item_m17638_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m17639(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t565 *, String_t*, int64_t, MethodInfo*))Dictionary_2_set_Item_m17640_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m17641(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t565 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m17642_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m17643(__this, ___size, method) (( void (*) (Dictionary_2_t565 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m17644_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m17645(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t565 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m17646_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m17647(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2992  (*) (Object_t * /* static, unused */, String_t*, int64_t, MethodInfo*))Dictionary_2_make_pair_m17648_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int64>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m17649(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, int64_t, MethodInfo*))Dictionary_2_pick_key_m17650_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m17651(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, String_t*, int64_t, MethodInfo*))Dictionary_2_pick_value_m17652_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m17653(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t565 *, KeyValuePair_2U5BU5D_t3543*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m17654_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Resize()
#define Dictionary_2_Resize_m17655(__this, method) (( void (*) (Dictionary_2_t565 *, MethodInfo*))Dictionary_2_Resize_m17656_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Add(TKey,TValue)
#define Dictionary_2_Add_m17657(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t565 *, String_t*, int64_t, MethodInfo*))Dictionary_2_Add_m17658_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Clear()
#define Dictionary_2_Clear_m17659(__this, method) (( void (*) (Dictionary_2_t565 *, MethodInfo*))Dictionary_2_Clear_m17660_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m17661(__this, ___key, method) (( bool (*) (Dictionary_2_t565 *, String_t*, MethodInfo*))Dictionary_2_ContainsKey_m17662_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m17663(__this, ___value, method) (( bool (*) (Dictionary_2_t565 *, int64_t, MethodInfo*))Dictionary_2_ContainsValue_m17664_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m17665(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t565 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2_GetObjectData_m17666_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m17667(__this, ___sender, method) (( void (*) (Dictionary_2_t565 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m17668_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Remove(TKey)
#define Dictionary_2_Remove_m17669(__this, ___key, method) (( bool (*) (Dictionary_2_t565 *, String_t*, MethodInfo*))Dictionary_2_Remove_m17670_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m17671(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t565 *, String_t*, int64_t*, MethodInfo*))Dictionary_2_TryGetValue_m17672_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Keys()
#define Dictionary_2_get_Keys_m17673(__this, method) (( KeyCollection_t2994 * (*) (Dictionary_2_t565 *, MethodInfo*))Dictionary_2_get_Keys_m17674_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Values()
#define Dictionary_2_get_Values_m17675(__this, method) (( ValueCollection_t2998 * (*) (Dictionary_2_t565 *, MethodInfo*))Dictionary_2_get_Values_m17676_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m17677(__this, ___key, method) (( String_t* (*) (Dictionary_2_t565 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m17678_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m17679(__this, ___value, method) (( int64_t (*) (Dictionary_2_t565 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m17680_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m17681(__this, ___pair, method) (( bool (*) (Dictionary_2_t565 *, KeyValuePair_2_t2992 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17682_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m17683(__this, method) (( Enumerator_t2996  (*) (Dictionary_2_t565 *, MethodInfo*))Dictionary_2_GetEnumerator_m17684_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int64>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m17685(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t918  (*) (Object_t * /* static, unused */, String_t*, int64_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17686_gshared)(__this /* static, unused */, ___key, ___value, method)
