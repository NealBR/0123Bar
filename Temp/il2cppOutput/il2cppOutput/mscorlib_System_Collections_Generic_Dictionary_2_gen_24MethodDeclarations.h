#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3278;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t596;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t3609;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t3281;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t3285;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2556;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t3610;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t3611;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t3612;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t915;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m20370_gshared (Dictionary_2_t3278 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m20370(__this, method) (( void (*) (Dictionary_2_t3278 *, MethodInfo*))Dictionary_2__ctor_m20370_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20371_gshared (Dictionary_2_t3278 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m20371(__this, ___comparer, method) (( void (*) (Dictionary_2_t3278 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m20371_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m20373_gshared (Dictionary_2_t3278 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m20373(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3278 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m20373_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20375_gshared (Dictionary_2_t3278 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m20375(__this, ___capacity, method) (( void (*) (Dictionary_2_t3278 *, int32_t, MethodInfo*))Dictionary_2__ctor_m20375_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20377_gshared (Dictionary_2_t3278 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m20377(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3278 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m20377_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20379_gshared (Dictionary_2_t3278 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m20379(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3278 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2__ctor_m20379_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20381_gshared (Dictionary_2_t3278 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20381(__this, method) (( Object_t* (*) (Dictionary_2_t3278 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20381_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20383_gshared (Dictionary_2_t3278 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20383(__this, method) (( Object_t* (*) (Dictionary_2_t3278 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20383_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20385_gshared (Dictionary_2_t3278 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20385(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3278 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20385_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20387_gshared (Dictionary_2_t3278 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20387(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3278 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20387_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20389_gshared (Dictionary_2_t3278 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20389(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3278 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20389_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20391_gshared (Dictionary_2_t3278 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20391(__this, ___key, method) (( bool (*) (Dictionary_2_t3278 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20391_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20393_gshared (Dictionary_2_t3278 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20393(__this, ___key, method) (( void (*) (Dictionary_2_t3278 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20393_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20395_gshared (Dictionary_2_t3278 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20395(__this, method) (( bool (*) (Dictionary_2_t3278 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20395_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20397_gshared (Dictionary_2_t3278 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20397(__this, method) (( Object_t * (*) (Dictionary_2_t3278 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20397_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20399_gshared (Dictionary_2_t3278 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20399(__this, method) (( bool (*) (Dictionary_2_t3278 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20399_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20401_gshared (Dictionary_2_t3278 * __this, KeyValuePair_2_t3279  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20401(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3278 *, KeyValuePair_2_t3279 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20401_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20403_gshared (Dictionary_2_t3278 * __this, KeyValuePair_2_t3279  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20403(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3278 *, KeyValuePair_2_t3279 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20403_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20405_gshared (Dictionary_2_t3278 * __this, KeyValuePair_2U5BU5D_t3611* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20405(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3278 *, KeyValuePair_2U5BU5D_t3611*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20405_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20407_gshared (Dictionary_2_t3278 * __this, KeyValuePair_2_t3279  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20407(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3278 *, KeyValuePair_2_t3279 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20407_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20409_gshared (Dictionary_2_t3278 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20409(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3278 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20409_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20411_gshared (Dictionary_2_t3278 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20411(__this, method) (( Object_t * (*) (Dictionary_2_t3278 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20411_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20413_gshared (Dictionary_2_t3278 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20413(__this, method) (( Object_t* (*) (Dictionary_2_t3278 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20413_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20415_gshared (Dictionary_2_t3278 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20415(__this, method) (( Object_t * (*) (Dictionary_2_t3278 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20415_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20417_gshared (Dictionary_2_t3278 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m20417(__this, method) (( int32_t (*) (Dictionary_2_t3278 *, MethodInfo*))Dictionary_2_get_Count_m20417_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m20419_gshared (Dictionary_2_t3278 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m20419(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t3278 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m20419_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20421_gshared (Dictionary_2_t3278 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m20421(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3278 *, Object_t *, uint8_t, MethodInfo*))Dictionary_2_set_Item_m20421_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20423_gshared (Dictionary_2_t3278 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m20423(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3278 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m20423_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20425_gshared (Dictionary_2_t3278 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m20425(__this, ___size, method) (( void (*) (Dictionary_2_t3278 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m20425_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20427_gshared (Dictionary_2_t3278 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20427(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3278 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m20427_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3279  Dictionary_2_make_pair_m20429_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m20429(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3279  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_make_pair_m20429_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m20431_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m20431(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_pick_key_m20431_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m20433_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m20433(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_pick_value_m20433_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20435_gshared (Dictionary_2_t3278 * __this, KeyValuePair_2U5BU5D_t3611* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m20435(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3278 *, KeyValuePair_2U5BU5D_t3611*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m20435_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m20437_gshared (Dictionary_2_t3278 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m20437(__this, method) (( void (*) (Dictionary_2_t3278 *, MethodInfo*))Dictionary_2_Resize_m20437_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20438_gshared (Dictionary_2_t3278 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m20438(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3278 *, Object_t *, uint8_t, MethodInfo*))Dictionary_2_Add_m20438_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m20440_gshared (Dictionary_2_t3278 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m20440(__this, method) (( void (*) (Dictionary_2_t3278 *, MethodInfo*))Dictionary_2_Clear_m20440_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20442_gshared (Dictionary_2_t3278 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m20442(__this, ___key, method) (( bool (*) (Dictionary_2_t3278 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m20442_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20444_gshared (Dictionary_2_t3278 * __this, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m20444(__this, ___value, method) (( bool (*) (Dictionary_2_t3278 *, uint8_t, MethodInfo*))Dictionary_2_ContainsValue_m20444_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20446_gshared (Dictionary_2_t3278 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m20446(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3278 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2_GetObjectData_m20446_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20448_gshared (Dictionary_2_t3278 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20448(__this, ___sender, method) (( void (*) (Dictionary_2_t3278 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m20448_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20450_gshared (Dictionary_2_t3278 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m20450(__this, ___key, method) (( bool (*) (Dictionary_2_t3278 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m20450_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20452_gshared (Dictionary_2_t3278 * __this, Object_t * ___key, uint8_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m20452(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3278 *, Object_t *, uint8_t*, MethodInfo*))Dictionary_2_TryGetValue_m20452_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t3281 * Dictionary_2_get_Keys_m20454_gshared (Dictionary_2_t3278 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m20454(__this, method) (( KeyCollection_t3281 * (*) (Dictionary_2_t3278 *, MethodInfo*))Dictionary_2_get_Keys_m20454_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t3285 * Dictionary_2_get_Values_m20456_gshared (Dictionary_2_t3278 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m20456(__this, method) (( ValueCollection_t3285 * (*) (Dictionary_2_t3278 *, MethodInfo*))Dictionary_2_get_Values_m20456_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m20458_gshared (Dictionary_2_t3278 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m20458(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3278 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m20458_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m20460_gshared (Dictionary_2_t3278 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m20460(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t3278 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m20460_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20462_gshared (Dictionary_2_t3278 * __this, KeyValuePair_2_t3279  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20462(__this, ___pair, method) (( bool (*) (Dictionary_2_t3278 *, KeyValuePair_2_t3279 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20462_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t3283  Dictionary_2_GetEnumerator_m20464_gshared (Dictionary_2_t3278 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m20464(__this, method) (( Enumerator_t3283  (*) (Dictionary_2_t3278 *, MethodInfo*))Dictionary_2_GetEnumerator_m20464_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t918  Dictionary_2_U3CCopyToU3Em__0_m20466_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m20466(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t918  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20466_gshared)(__this /* static, unused */, ___key, ___value, method)
