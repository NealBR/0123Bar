#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t959;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t595;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t3605;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t3295;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t3299;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2335;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t3606;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t3607;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerator_1_t3608;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t915;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_24MethodDeclarations.h"
#define Dictionary_2__ctor_m20369(__this, method) (( void (*) (Dictionary_2_t959 *, MethodInfo*))Dictionary_2__ctor_m20370_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m4795(__this, ___comparer, method) (( void (*) (Dictionary_2_t959 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m20371_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m20372(__this, ___dictionary, method) (( void (*) (Dictionary_2_t959 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m20373_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Int32)
#define Dictionary_2__ctor_m20374(__this, ___capacity, method) (( void (*) (Dictionary_2_t959 *, int32_t, MethodInfo*))Dictionary_2__ctor_m20375_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m20376(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t959 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m20377_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m20378(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t959 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2__ctor_m20379_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20380(__this, method) (( Object_t* (*) (Dictionary_2_t959 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20381_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20382(__this, method) (( Object_t* (*) (Dictionary_2_t959 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20383_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20384(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t959 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20385_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20386(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t959 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20387_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m20388(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t959 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20389_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m20390(__this, ___key, method) (( bool (*) (Dictionary_2_t959 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20391_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m20392(__this, ___key, method) (( void (*) (Dictionary_2_t959 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20393_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20394(__this, method) (( bool (*) (Dictionary_2_t959 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20395_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20396(__this, method) (( Object_t * (*) (Dictionary_2_t959 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20397_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20398(__this, method) (( bool (*) (Dictionary_2_t959 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20399_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20400(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t959 *, KeyValuePair_2_t3290 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20401_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20402(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t959 *, KeyValuePair_2_t3290 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20403_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20404(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t959 *, KeyValuePair_2U5BU5D_t3607*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20405_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20406(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t959 *, KeyValuePair_2_t3290 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20407_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20408(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t959 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20409_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20410(__this, method) (( Object_t * (*) (Dictionary_2_t959 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20411_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20412(__this, method) (( Object_t* (*) (Dictionary_2_t959 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20413_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20414(__this, method) (( Object_t * (*) (Dictionary_2_t959 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20415_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Count()
#define Dictionary_2_get_Count_m20416(__this, method) (( int32_t (*) (Dictionary_2_t959 *, MethodInfo*))Dictionary_2_get_Count_m20417_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(TKey)
#define Dictionary_2_get_Item_m20418(__this, ___key, method) (( bool (*) (Dictionary_2_t959 *, String_t*, MethodInfo*))Dictionary_2_get_Item_m20419_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m20420(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t959 *, String_t*, bool, MethodInfo*))Dictionary_2_set_Item_m20421_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m20422(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t959 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m20423_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m20424(__this, ___size, method) (( void (*) (Dictionary_2_t959 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m20425_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m20426(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t959 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m20427_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m20428(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3290  (*) (Object_t * /* static, unused */, String_t*, bool, MethodInfo*))Dictionary_2_make_pair_m20429_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m20430(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, bool, MethodInfo*))Dictionary_2_pick_key_m20431_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m20432(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, String_t*, bool, MethodInfo*))Dictionary_2_pick_value_m20433_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m20434(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t959 *, KeyValuePair_2U5BU5D_t3607*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m20435_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Resize()
#define Dictionary_2_Resize_m20436(__this, method) (( void (*) (Dictionary_2_t959 *, MethodInfo*))Dictionary_2_Resize_m20437_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
#define Dictionary_2_Add_m4796(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t959 *, String_t*, bool, MethodInfo*))Dictionary_2_Add_m20438_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Clear()
#define Dictionary_2_Clear_m20439(__this, method) (( void (*) (Dictionary_2_t959 *, MethodInfo*))Dictionary_2_Clear_m20440_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m20441(__this, ___key, method) (( bool (*) (Dictionary_2_t959 *, String_t*, MethodInfo*))Dictionary_2_ContainsKey_m20442_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m20443(__this, ___value, method) (( bool (*) (Dictionary_2_t959 *, bool, MethodInfo*))Dictionary_2_ContainsValue_m20444_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m20445(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t959 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2_GetObjectData_m20446_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m20447(__this, ___sender, method) (( void (*) (Dictionary_2_t959 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m20448_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Remove(TKey)
#define Dictionary_2_Remove_m20449(__this, ___key, method) (( bool (*) (Dictionary_2_t959 *, String_t*, MethodInfo*))Dictionary_2_Remove_m20450_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m20451(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t959 *, String_t*, bool*, MethodInfo*))Dictionary_2_TryGetValue_m20452_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Keys()
#define Dictionary_2_get_Keys_m20453(__this, method) (( KeyCollection_t3295 * (*) (Dictionary_2_t959 *, MethodInfo*))Dictionary_2_get_Keys_m20454_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Values()
#define Dictionary_2_get_Values_m20455(__this, method) (( ValueCollection_t3299 * (*) (Dictionary_2_t959 *, MethodInfo*))Dictionary_2_get_Values_m20456_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m20457(__this, ___key, method) (( String_t* (*) (Dictionary_2_t959 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m20458_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m20459(__this, ___value, method) (( bool (*) (Dictionary_2_t959 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m20460_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m20461(__this, ___pair, method) (( bool (*) (Dictionary_2_t959 *, KeyValuePair_2_t3290 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20462_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m20463(__this, method) (( Enumerator_t3297  (*) (Dictionary_2_t959 *, MethodInfo*))Dictionary_2_GetEnumerator_m20464_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m20465(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t918  (*) (Object_t * /* static, unused */, String_t*, bool, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20466_gshared)(__this /* static, unused */, ___key, ___value, method)
