#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2974;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t596;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t3541;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t2980;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t2984;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2556;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t3545;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t3546;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t3547;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t915;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m17589_gshared (Dictionary_2_t2974 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m17589(__this, method) (( void (*) (Dictionary_2_t2974 *, MethodInfo*))Dictionary_2__ctor_m17589_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17591_gshared (Dictionary_2_t2974 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m17591(__this, ___comparer, method) (( void (*) (Dictionary_2_t2974 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m17591_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m17593_gshared (Dictionary_2_t2974 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m17593(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2974 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m17593_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17595_gshared (Dictionary_2_t2974 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m17595(__this, ___capacity, method) (( void (*) (Dictionary_2_t2974 *, int32_t, MethodInfo*))Dictionary_2__ctor_m17595_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17597_gshared (Dictionary_2_t2974 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m17597(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2974 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m17597_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17599_gshared (Dictionary_2_t2974 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m17599(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2974 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2__ctor_m17599_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17601_gshared (Dictionary_2_t2974 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17601(__this, method) (( Object_t* (*) (Dictionary_2_t2974 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17601_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17603_gshared (Dictionary_2_t2974 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17603(__this, method) (( Object_t* (*) (Dictionary_2_t2974 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17603_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17605_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17605(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2974 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17605_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17607_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17607(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2974 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17607_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17609_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17609(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2974 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17609_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17611_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17611(__this, ___key, method) (( bool (*) (Dictionary_2_t2974 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17611_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17613_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17613(__this, ___key, method) (( void (*) (Dictionary_2_t2974 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17613_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17615_gshared (Dictionary_2_t2974 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17615(__this, method) (( bool (*) (Dictionary_2_t2974 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17615_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17617_gshared (Dictionary_2_t2974 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17617(__this, method) (( Object_t * (*) (Dictionary_2_t2974 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17617_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17619_gshared (Dictionary_2_t2974 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17619(__this, method) (( bool (*) (Dictionary_2_t2974 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17621_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2_t2975  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17621(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2974 *, KeyValuePair_2_t2975 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17621_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17623_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2_t2975  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17623(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2974 *, KeyValuePair_2_t2975 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17623_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17625_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2U5BU5D_t3546* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17625(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2974 *, KeyValuePair_2U5BU5D_t3546*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17625_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17627_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2_t2975  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17627(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2974 *, KeyValuePair_2_t2975 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17627_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17629_gshared (Dictionary_2_t2974 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17629(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2974 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17629_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17631_gshared (Dictionary_2_t2974 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17631(__this, method) (( Object_t * (*) (Dictionary_2_t2974 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17631_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17633_gshared (Dictionary_2_t2974 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17633(__this, method) (( Object_t* (*) (Dictionary_2_t2974 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17633_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17635_gshared (Dictionary_2_t2974 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17635(__this, method) (( Object_t * (*) (Dictionary_2_t2974 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17635_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17636_gshared (Dictionary_2_t2974 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m17636(__this, method) (( int32_t (*) (Dictionary_2_t2974 *, MethodInfo*))Dictionary_2_get_Count_m17636_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m17638_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m17638(__this, ___key, method) (( int64_t (*) (Dictionary_2_t2974 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m17638_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17640_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m17640(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2974 *, Object_t *, int64_t, MethodInfo*))Dictionary_2_set_Item_m17640_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17642_gshared (Dictionary_2_t2974 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m17642(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2974 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m17642_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17644_gshared (Dictionary_2_t2974 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m17644(__this, ___size, method) (( void (*) (Dictionary_2_t2974 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m17644_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17646_gshared (Dictionary_2_t2974 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17646(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2974 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m17646_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2975  Dictionary_2_make_pair_m17648_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m17648(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2975  (*) (Object_t * /* static, unused */, Object_t *, int64_t, MethodInfo*))Dictionary_2_make_pair_m17648_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m17650_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m17650(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, MethodInfo*))Dictionary_2_pick_key_m17650_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m17652_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m17652(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, MethodInfo*))Dictionary_2_pick_value_m17652_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17654_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2U5BU5D_t3546* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m17654(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2974 *, KeyValuePair_2U5BU5D_t3546*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m17654_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m17656_gshared (Dictionary_2_t2974 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m17656(__this, method) (( void (*) (Dictionary_2_t2974 *, MethodInfo*))Dictionary_2_Resize_m17656_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17658_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m17658(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2974 *, Object_t *, int64_t, MethodInfo*))Dictionary_2_Add_m17658_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m17660_gshared (Dictionary_2_t2974 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m17660(__this, method) (( void (*) (Dictionary_2_t2974 *, MethodInfo*))Dictionary_2_Clear_m17660_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17662_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m17662(__this, ___key, method) (( bool (*) (Dictionary_2_t2974 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m17662_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17664_gshared (Dictionary_2_t2974 * __this, int64_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m17664(__this, ___value, method) (( bool (*) (Dictionary_2_t2974 *, int64_t, MethodInfo*))Dictionary_2_ContainsValue_m17664_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17666_gshared (Dictionary_2_t2974 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m17666(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2974 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2_GetObjectData_m17666_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17668_gshared (Dictionary_2_t2974 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17668(__this, ___sender, method) (( void (*) (Dictionary_2_t2974 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m17668_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17670_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m17670(__this, ___key, method) (( bool (*) (Dictionary_2_t2974 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m17670_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17672_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, int64_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m17672(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2974 *, Object_t *, int64_t*, MethodInfo*))Dictionary_2_TryGetValue_m17672_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2980 * Dictionary_2_get_Keys_m17674_gshared (Dictionary_2_t2974 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m17674(__this, method) (( KeyCollection_t2980 * (*) (Dictionary_2_t2974 *, MethodInfo*))Dictionary_2_get_Keys_m17674_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2984 * Dictionary_2_get_Values_m17676_gshared (Dictionary_2_t2974 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m17676(__this, method) (( ValueCollection_t2984 * (*) (Dictionary_2_t2974 *, MethodInfo*))Dictionary_2_get_Values_m17676_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17678_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m17678(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2974 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m17678_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m17680_gshared (Dictionary_2_t2974 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m17680(__this, ___value, method) (( int64_t (*) (Dictionary_2_t2974 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m17680_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17682_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2_t2975  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17682(__this, ___pair, method) (( bool (*) (Dictionary_2_t2974 *, KeyValuePair_2_t2975 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17682_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2982  Dictionary_2_GetEnumerator_m17684_gshared (Dictionary_2_t2974 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17684(__this, method) (( Enumerator_t2982  (*) (Dictionary_2_t2974 *, MethodInfo*))Dictionary_2_GetEnumerator_m17684_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t918  Dictionary_2_U3CCopyToU3Em__0_m17686_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17686(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t918  (*) (Object_t * /* static, unused */, Object_t *, int64_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17686_gshared)(__this /* static, unused */, ___key, ___value, method)
