#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2598;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t596;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2601;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2605;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2556;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t3468;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3469;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3470;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t915;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m13737_gshared (Dictionary_2_t2598 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m13737(__this, method) (( void (*) (Dictionary_2_t2598 *, MethodInfo*))Dictionary_2__ctor_m13737_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13739_gshared (Dictionary_2_t2598 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m13739(__this, ___comparer, method) (( void (*) (Dictionary_2_t2598 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m13739_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m13741_gshared (Dictionary_2_t2598 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m13741(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2598 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m13741_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13743_gshared (Dictionary_2_t2598 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m13743(__this, ___capacity, method) (( void (*) (Dictionary_2_t2598 *, int32_t, MethodInfo*))Dictionary_2__ctor_m13743_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13745_gshared (Dictionary_2_t2598 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m13745(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2598 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m13745_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13747_gshared (Dictionary_2_t2598 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m13747(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2598 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2__ctor_m13747_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13749_gshared (Dictionary_2_t2598 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13749(__this, method) (( Object_t* (*) (Dictionary_2_t2598 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13749_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13751_gshared (Dictionary_2_t2598 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13751(__this, method) (( Object_t* (*) (Dictionary_2_t2598 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13751_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13753_gshared (Dictionary_2_t2598 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13753(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2598 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13753_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13755_gshared (Dictionary_2_t2598 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13755(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2598 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13755_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13757_gshared (Dictionary_2_t2598 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13757(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2598 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13757_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13759_gshared (Dictionary_2_t2598 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13759(__this, ___key, method) (( bool (*) (Dictionary_2_t2598 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13759_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13761_gshared (Dictionary_2_t2598 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13761(__this, ___key, method) (( void (*) (Dictionary_2_t2598 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13761_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13763_gshared (Dictionary_2_t2598 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13763(__this, method) (( bool (*) (Dictionary_2_t2598 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13763_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13765_gshared (Dictionary_2_t2598 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13765(__this, method) (( Object_t * (*) (Dictionary_2_t2598 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13765_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13767_gshared (Dictionary_2_t2598 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13767(__this, method) (( bool (*) (Dictionary_2_t2598 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13767_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13769_gshared (Dictionary_2_t2598 * __this, KeyValuePair_2_t2599  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13769(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2598 *, KeyValuePair_2_t2599 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13769_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13771_gshared (Dictionary_2_t2598 * __this, KeyValuePair_2_t2599  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13771(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2598 *, KeyValuePair_2_t2599 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13771_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13773_gshared (Dictionary_2_t2598 * __this, KeyValuePair_2U5BU5D_t3469* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13773(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2598 *, KeyValuePair_2U5BU5D_t3469*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13773_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13775_gshared (Dictionary_2_t2598 * __this, KeyValuePair_2_t2599  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13775(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2598 *, KeyValuePair_2_t2599 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13775_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13777_gshared (Dictionary_2_t2598 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13777(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2598 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13777_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13779_gshared (Dictionary_2_t2598 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13779(__this, method) (( Object_t * (*) (Dictionary_2_t2598 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13779_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13781_gshared (Dictionary_2_t2598 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13781(__this, method) (( Object_t* (*) (Dictionary_2_t2598 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13781_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13783_gshared (Dictionary_2_t2598 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13783(__this, method) (( Object_t * (*) (Dictionary_2_t2598 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13783_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13785_gshared (Dictionary_2_t2598 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m13785(__this, method) (( int32_t (*) (Dictionary_2_t2598 *, MethodInfo*))Dictionary_2_get_Count_m13785_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13787_gshared (Dictionary_2_t2598 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m13787(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2598 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m13787_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13789_gshared (Dictionary_2_t2598 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m13789(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2598 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_set_Item_m13789_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13791_gshared (Dictionary_2_t2598 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m13791(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2598 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m13791_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13793_gshared (Dictionary_2_t2598 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m13793(__this, ___size, method) (( void (*) (Dictionary_2_t2598 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m13793_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13795_gshared (Dictionary_2_t2598 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13795(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2598 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m13795_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2599  Dictionary_2_make_pair_m13797_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m13797(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2599  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_make_pair_m13797_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m13799_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m13799(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_pick_key_m13799_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13801_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m13801(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_pick_value_m13801_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13803_gshared (Dictionary_2_t2598 * __this, KeyValuePair_2U5BU5D_t3469* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m13803(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2598 *, KeyValuePair_2U5BU5D_t3469*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m13803_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13805_gshared (Dictionary_2_t2598 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m13805(__this, method) (( void (*) (Dictionary_2_t2598 *, MethodInfo*))Dictionary_2_Resize_m13805_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13806_gshared (Dictionary_2_t2598 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m13806(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2598 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_Add_m13806_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13808_gshared (Dictionary_2_t2598 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m13808(__this, method) (( void (*) (Dictionary_2_t2598 *, MethodInfo*))Dictionary_2_Clear_m13808_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13810_gshared (Dictionary_2_t2598 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m13810(__this, ___key, method) (( bool (*) (Dictionary_2_t2598 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m13810_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13812_gshared (Dictionary_2_t2598 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m13812(__this, ___value, method) (( bool (*) (Dictionary_2_t2598 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m13812_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13814_gshared (Dictionary_2_t2598 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m13814(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2598 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2_GetObjectData_m13814_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13816_gshared (Dictionary_2_t2598 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13816(__this, ___sender, method) (( void (*) (Dictionary_2_t2598 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m13816_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13818_gshared (Dictionary_2_t2598 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m13818(__this, ___key, method) (( bool (*) (Dictionary_2_t2598 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m13818_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13819_gshared (Dictionary_2_t2598 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m13819(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2598 *, Object_t *, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m13819_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2601 * Dictionary_2_get_Keys_m13821_gshared (Dictionary_2_t2598 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m13821(__this, method) (( KeyCollection_t2601 * (*) (Dictionary_2_t2598 *, MethodInfo*))Dictionary_2_get_Keys_m13821_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2605 * Dictionary_2_get_Values_m13823_gshared (Dictionary_2_t2598 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m13823(__this, method) (( ValueCollection_t2605 * (*) (Dictionary_2_t2598 *, MethodInfo*))Dictionary_2_get_Values_m13823_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13825_gshared (Dictionary_2_t2598 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m13825(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2598 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m13825_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13827_gshared (Dictionary_2_t2598 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m13827(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2598 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m13827_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13829_gshared (Dictionary_2_t2598 * __this, KeyValuePair_2_t2599  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13829(__this, ___pair, method) (( bool (*) (Dictionary_2_t2598 *, KeyValuePair_2_t2599 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13829_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2603  Dictionary_2_GetEnumerator_m13831_gshared (Dictionary_2_t2598 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13831(__this, method) (( Enumerator_t2603  (*) (Dictionary_2_t2598 *, MethodInfo*))Dictionary_2_GetEnumerator_m13831_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t918  Dictionary_2_U3CCopyToU3Em__0_m13833_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13833(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t918  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13833_gshared)(__this /* static, unused */, ___key, ___value, method)
