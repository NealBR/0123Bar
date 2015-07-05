#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t471;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3441;
// System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutUtility/LayoutCache>
struct ICollection_1_t3510;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t470;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct KeyCollection_t2844;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct ValueCollection_t2848;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2501;
// System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct IDictionary_2_t3511;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>[]
struct KeyValuePair_2U5BU5D_t3512;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>
struct IEnumerator_1_t3513;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t915;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14MethodDeclarations.h"
#define Dictionary_2__ctor_m3338(__this, method) (( void (*) (Dictionary_2_t471 *, MethodInfo*))Dictionary_2__ctor_m12815_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m16103(__this, ___comparer, method) (( void (*) (Dictionary_2_t471 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12817_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m16104(__this, ___dictionary, method) (( void (*) (Dictionary_2_t471 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m12819_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Int32)
#define Dictionary_2__ctor_m16105(__this, ___capacity, method) (( void (*) (Dictionary_2_t471 *, int32_t, MethodInfo*))Dictionary_2__ctor_m12821_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m16106(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t471 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m12823_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m16107(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t471 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2__ctor_m12825_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16108(__this, method) (( Object_t* (*) (Dictionary_2_t471 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12827_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16109(__this, method) (( Object_t* (*) (Dictionary_2_t471 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12829_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16110(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t471 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12831_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16111(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t471 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12833_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m16112(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t471 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12835_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m16113(__this, ___key, method) (( bool (*) (Dictionary_2_t471 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12837_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m16114(__this, ___key, method) (( void (*) (Dictionary_2_t471 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12839_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16115(__this, method) (( bool (*) (Dictionary_2_t471 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12841_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16116(__this, method) (( Object_t * (*) (Dictionary_2_t471 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12843_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16117(__this, method) (( bool (*) (Dictionary_2_t471 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12845_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16118(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t471 *, KeyValuePair_2_t2841 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12847_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16119(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t471 *, KeyValuePair_2_t2841 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12849_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16120(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t471 *, KeyValuePair_2U5BU5D_t3512*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12851_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16121(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t471 *, KeyValuePair_2_t2841 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12853_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16122(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t471 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12855_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16123(__this, method) (( Object_t * (*) (Dictionary_2_t471 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12857_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16124(__this, method) (( Object_t* (*) (Dictionary_2_t471 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12859_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16125(__this, method) (( Object_t * (*) (Dictionary_2_t471 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12861_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Count()
#define Dictionary_2_get_Count_m16126(__this, method) (( int32_t (*) (Dictionary_2_t471 *, MethodInfo*))Dictionary_2_get_Count_m12863_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Item(TKey)
#define Dictionary_2_get_Item_m16127(__this, ___key, method) (( LayoutCache_t470 * (*) (Dictionary_2_t471 *, int32_t, MethodInfo*))Dictionary_2_get_Item_m12865_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m3340(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t471 *, int32_t, LayoutCache_t470 *, MethodInfo*))Dictionary_2_set_Item_m12867_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m16128(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t471 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m12869_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m16129(__this, ___size, method) (( void (*) (Dictionary_2_t471 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m12871_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m16130(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t471 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m12873_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m16131(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2841  (*) (Object_t * /* static, unused */, int32_t, LayoutCache_t470 *, MethodInfo*))Dictionary_2_make_pair_m12875_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m16132(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, LayoutCache_t470 *, MethodInfo*))Dictionary_2_pick_key_m12877_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m16133(__this /* static, unused */, ___key, ___value, method) (( LayoutCache_t470 * (*) (Object_t * /* static, unused */, int32_t, LayoutCache_t470 *, MethodInfo*))Dictionary_2_pick_value_m12879_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m16134(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t471 *, KeyValuePair_2U5BU5D_t3512*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m12881_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Resize()
#define Dictionary_2_Resize_m16135(__this, method) (( void (*) (Dictionary_2_t471 *, MethodInfo*))Dictionary_2_Resize_m12883_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Add(TKey,TValue)
#define Dictionary_2_Add_m16136(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t471 *, int32_t, LayoutCache_t470 *, MethodInfo*))Dictionary_2_Add_m12884_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Clear()
#define Dictionary_2_Clear_m16137(__this, method) (( void (*) (Dictionary_2_t471 *, MethodInfo*))Dictionary_2_Clear_m12885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m16138(__this, ___key, method) (( bool (*) (Dictionary_2_t471 *, int32_t, MethodInfo*))Dictionary_2_ContainsKey_m12887_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m16139(__this, ___value, method) (( bool (*) (Dictionary_2_t471 *, LayoutCache_t470 *, MethodInfo*))Dictionary_2_ContainsValue_m12889_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m16140(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t471 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2_GetObjectData_m12891_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m16141(__this, ___sender, method) (( void (*) (Dictionary_2_t471 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m12893_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Remove(TKey)
#define Dictionary_2_Remove_m16142(__this, ___key, method) (( bool (*) (Dictionary_2_t471 *, int32_t, MethodInfo*))Dictionary_2_Remove_m12894_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m3339(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t471 *, int32_t, LayoutCache_t470 **, MethodInfo*))Dictionary_2_TryGetValue_m12895_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Keys()
#define Dictionary_2_get_Keys_m16143(__this, method) (( KeyCollection_t2844 * (*) (Dictionary_2_t471 *, MethodInfo*))Dictionary_2_get_Keys_m12897_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Values()
#define Dictionary_2_get_Values_m16144(__this, method) (( ValueCollection_t2848 * (*) (Dictionary_2_t471 *, MethodInfo*))Dictionary_2_get_Values_m12898_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m16145(__this, ___key, method) (( int32_t (*) (Dictionary_2_t471 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m12900_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m16146(__this, ___value, method) (( LayoutCache_t470 * (*) (Dictionary_2_t471 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m12902_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m16147(__this, ___pair, method) (( bool (*) (Dictionary_2_t471 *, KeyValuePair_2_t2841 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12904_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m16148(__this, method) (( Enumerator_t2846  (*) (Dictionary_2_t471 *, MethodInfo*))Dictionary_2_GetEnumerator_m12905_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m16149(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t918  (*) (Object_t * /* static, unused */, int32_t, LayoutCache_t470 *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12907_gshared)(__this /* static, unused */, ___key, ___value, method)
