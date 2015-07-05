#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>
struct Dictionary_2_t298;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>
struct ICollection_1_t296;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3441;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t138;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.Graphic,System.Int32>
struct KeyCollection_t2691;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.Graphic,System.Int32>
struct ValueCollection_t2695;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Graphic>
struct IEqualityComparer_1_t2687;
// System.Collections.Generic.IDictionary`2<UnityEngine.UI.Graphic,System.Int32>
struct IDictionary_2_t3488;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3489;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
struct IEnumerator_1_t3490;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t915;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.Graphic,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15MethodDeclarations.h"
#define Dictionary_2__ctor_m14716(__this, method) (( void (*) (Dictionary_2_t298 *, MethodInfo*))Dictionary_2__ctor_m13321_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m14717(__this, ___comparer, method) (( void (*) (Dictionary_2_t298 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m13322_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m14718(__this, ___dictionary, method) (( void (*) (Dictionary_2_t298 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m13323_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m14719(__this, ___capacity, method) (( void (*) (Dictionary_2_t298 *, int32_t, MethodInfo*))Dictionary_2__ctor_m13324_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m14720(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t298 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m13325_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m14721(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t298 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2__ctor_m13326_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14722(__this, method) (( Object_t* (*) (Dictionary_2_t298 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13327_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14723(__this, method) (( Object_t* (*) (Dictionary_2_t298 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13328_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14724(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t298 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13329_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14725(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t298 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13330_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m14726(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t298 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13331_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m14727(__this, ___key, method) (( bool (*) (Dictionary_2_t298 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13332_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m14728(__this, ___key, method) (( void (*) (Dictionary_2_t298 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13333_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14729(__this, method) (( bool (*) (Dictionary_2_t298 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13334_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14730(__this, method) (( Object_t * (*) (Dictionary_2_t298 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13335_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14731(__this, method) (( bool (*) (Dictionary_2_t298 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13336_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14732(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t298 *, KeyValuePair_2_t2689 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13337_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14733(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t298 *, KeyValuePair_2_t2689 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13338_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14734(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t298 *, KeyValuePair_2U5BU5D_t3489*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13339_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14735(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t298 *, KeyValuePair_2_t2689 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13340_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14736(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t298 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13341_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14737(__this, method) (( Object_t * (*) (Dictionary_2_t298 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13342_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14738(__this, method) (( Object_t* (*) (Dictionary_2_t298 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13343_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14739(__this, method) (( Object_t * (*) (Dictionary_2_t298 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13344_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Count()
#define Dictionary_2_get_Count_m14740(__this, method) (( int32_t (*) (Dictionary_2_t298 *, MethodInfo*))Dictionary_2_get_Count_m13345_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Item(TKey)
#define Dictionary_2_get_Item_m14741(__this, ___key, method) (( int32_t (*) (Dictionary_2_t298 *, Graphic_t138 *, MethodInfo*))Dictionary_2_get_Item_m13346_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m14742(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t298 *, Graphic_t138 *, int32_t, MethodInfo*))Dictionary_2_set_Item_m13347_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m14743(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t298 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m13348_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m14744(__this, ___size, method) (( void (*) (Dictionary_2_t298 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m13349_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m14745(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t298 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m13350_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m14746(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2689  (*) (Object_t * /* static, unused */, Graphic_t138 *, int32_t, MethodInfo*))Dictionary_2_make_pair_m13351_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m14747(__this /* static, unused */, ___key, ___value, method) (( Graphic_t138 * (*) (Object_t * /* static, unused */, Graphic_t138 *, int32_t, MethodInfo*))Dictionary_2_pick_key_m13352_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m14748(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Graphic_t138 *, int32_t, MethodInfo*))Dictionary_2_pick_value_m13353_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m14749(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t298 *, KeyValuePair_2U5BU5D_t3489*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m13354_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Resize()
#define Dictionary_2_Resize_m14750(__this, method) (( void (*) (Dictionary_2_t298 *, MethodInfo*))Dictionary_2_Resize_m13355_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Add(TKey,TValue)
#define Dictionary_2_Add_m14751(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t298 *, Graphic_t138 *, int32_t, MethodInfo*))Dictionary_2_Add_m13356_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Clear()
#define Dictionary_2_Clear_m14752(__this, method) (( void (*) (Dictionary_2_t298 *, MethodInfo*))Dictionary_2_Clear_m13357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m14753(__this, ___key, method) (( bool (*) (Dictionary_2_t298 *, Graphic_t138 *, MethodInfo*))Dictionary_2_ContainsKey_m13358_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m14754(__this, ___value, method) (( bool (*) (Dictionary_2_t298 *, int32_t, MethodInfo*))Dictionary_2_ContainsValue_m13359_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m14755(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t298 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2_GetObjectData_m13360_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m14756(__this, ___sender, method) (( void (*) (Dictionary_2_t298 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m13361_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Remove(TKey)
#define Dictionary_2_Remove_m14757(__this, ___key, method) (( bool (*) (Dictionary_2_t298 *, Graphic_t138 *, MethodInfo*))Dictionary_2_Remove_m13362_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m14758(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t298 *, Graphic_t138 *, int32_t*, MethodInfo*))Dictionary_2_TryGetValue_m13363_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Keys()
#define Dictionary_2_get_Keys_m14759(__this, method) (( KeyCollection_t2691 * (*) (Dictionary_2_t298 *, MethodInfo*))Dictionary_2_get_Keys_m13364_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Values()
#define Dictionary_2_get_Values_m14760(__this, method) (( ValueCollection_t2695 * (*) (Dictionary_2_t298 *, MethodInfo*))Dictionary_2_get_Values_m13365_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m14761(__this, ___key, method) (( Graphic_t138 * (*) (Dictionary_2_t298 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m13366_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m14762(__this, ___value, method) (( int32_t (*) (Dictionary_2_t298 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m13367_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m14763(__this, ___pair, method) (( bool (*) (Dictionary_2_t298 *, KeyValuePair_2_t2689 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13368_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m14764(__this, method) (( Enumerator_t2693  (*) (Dictionary_2_t298 *, MethodInfo*))Dictionary_2_GetEnumerator_m13369_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m14765(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t918  (*) (Object_t * /* static, unused */, Graphic_t138 *, int32_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13370_gshared)(__this /* static, unused */, ___key, ___value, method)
