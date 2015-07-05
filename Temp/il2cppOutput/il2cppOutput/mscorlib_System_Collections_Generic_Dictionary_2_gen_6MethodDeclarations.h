#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t502;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t595;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2900;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t2903;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2335;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t706;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t3527;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerator_1_t3528;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t915;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_16MethodDeclarations.h"
#define Dictionary_2__ctor_m3382(__this, method) (( void (*) (Dictionary_2_t502 *, MethodInfo*))Dictionary_2__ctor_m13737_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m16685(__this, ___comparer, method) (( void (*) (Dictionary_2_t502 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m13739_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m16686(__this, ___dictionary, method) (( void (*) (Dictionary_2_t502 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m13741_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Int32)
#define Dictionary_2__ctor_m16687(__this, ___capacity, method) (( void (*) (Dictionary_2_t502 *, int32_t, MethodInfo*))Dictionary_2__ctor_m13743_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m16688(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t502 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m13745_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m16689(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t502 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2__ctor_m13747_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16690(__this, method) (( Object_t* (*) (Dictionary_2_t502 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13749_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16691(__this, method) (( Object_t* (*) (Dictionary_2_t502 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13751_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16692(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t502 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13753_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16693(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t502 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13755_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m16694(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t502 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13757_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m16695(__this, ___key, method) (( bool (*) (Dictionary_2_t502 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13759_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m16696(__this, ___key, method) (( void (*) (Dictionary_2_t502 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13761_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16697(__this, method) (( bool (*) (Dictionary_2_t502 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13763_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16698(__this, method) (( Object_t * (*) (Dictionary_2_t502 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13765_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16699(__this, method) (( bool (*) (Dictionary_2_t502 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13767_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16700(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t502 *, KeyValuePair_2_t692 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13769_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16701(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t502 *, KeyValuePair_2_t692 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13771_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16702(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t502 *, KeyValuePair_2U5BU5D_t3527*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13773_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16703(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t502 *, KeyValuePair_2_t692 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13775_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16704(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t502 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13777_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16705(__this, method) (( Object_t * (*) (Dictionary_2_t502 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13779_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16706(__this, method) (( Object_t* (*) (Dictionary_2_t502 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13781_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16707(__this, method) (( Object_t * (*) (Dictionary_2_t502 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13783_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count()
#define Dictionary_2_get_Count_m3380(__this, method) (( int32_t (*) (Dictionary_2_t502 *, MethodInfo*))Dictionary_2_get_Count_m13785_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
#define Dictionary_2_get_Item_m16708(__this, ___key, method) (( String_t* (*) (Dictionary_2_t502 *, String_t*, MethodInfo*))Dictionary_2_get_Item_m13787_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m3386(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t502 *, String_t*, String_t*, MethodInfo*))Dictionary_2_set_Item_m13789_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m16709(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t502 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m13791_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m16710(__this, ___size, method) (( void (*) (Dictionary_2_t502 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m13793_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m16711(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t502 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m13795_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m16712(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t692  (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_make_pair_m13797_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m16713(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_pick_key_m13799_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m16714(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_pick_value_m13801_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m16715(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t502 *, KeyValuePair_2U5BU5D_t3527*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m13803_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Resize()
#define Dictionary_2_Resize_m16716(__this, method) (( void (*) (Dictionary_2_t502 *, MethodInfo*))Dictionary_2_Resize_m13805_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
#define Dictionary_2_Add_m16717(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t502 *, String_t*, String_t*, MethodInfo*))Dictionary_2_Add_m13806_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
#define Dictionary_2_Clear_m16718(__this, method) (( void (*) (Dictionary_2_t502 *, MethodInfo*))Dictionary_2_Clear_m13808_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m16719(__this, ___key, method) (( bool (*) (Dictionary_2_t502 *, String_t*, MethodInfo*))Dictionary_2_ContainsKey_m13810_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m16720(__this, ___value, method) (( bool (*) (Dictionary_2_t502 *, String_t*, MethodInfo*))Dictionary_2_ContainsValue_m13812_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m16721(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t502 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2_GetObjectData_m13814_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m16722(__this, ___sender, method) (( void (*) (Dictionary_2_t502 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m13816_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(TKey)
#define Dictionary_2_Remove_m16723(__this, ___key, method) (( bool (*) (Dictionary_2_t502 *, String_t*, MethodInfo*))Dictionary_2_Remove_m13818_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m3373(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t502 *, String_t*, String_t**, MethodInfo*))Dictionary_2_TryGetValue_m13819_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
#define Dictionary_2_get_Keys_m16724(__this, method) (( KeyCollection_t2900 * (*) (Dictionary_2_t502 *, MethodInfo*))Dictionary_2_get_Keys_m13821_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Values()
#define Dictionary_2_get_Values_m16725(__this, method) (( ValueCollection_t2903 * (*) (Dictionary_2_t502 *, MethodInfo*))Dictionary_2_get_Values_m13823_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m16726(__this, ___key, method) (( String_t* (*) (Dictionary_2_t502 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m13825_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m16727(__this, ___value, method) (( String_t* (*) (Dictionary_2_t502 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m13827_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m16728(__this, ___pair, method) (( bool (*) (Dictionary_2_t502 *, KeyValuePair_2_t692 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13829_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3389(__this, method) (( Enumerator_t691  (*) (Dictionary_2_t502 *, MethodInfo*))Dictionary_2_GetEnumerator_m13831_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.String>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m16729(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t918  (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13833_gshared)(__this /* static, unused */, ___key, ___value, method)
