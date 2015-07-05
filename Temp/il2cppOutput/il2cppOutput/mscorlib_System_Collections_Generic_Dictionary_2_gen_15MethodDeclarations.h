#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2554;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t596;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3441;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2560;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2564;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2556;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t3455;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3456;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t3457;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t915;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m13321_gshared (Dictionary_2_t2554 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m13321(__this, method) (( void (*) (Dictionary_2_t2554 *, MethodInfo*))Dictionary_2__ctor_m13321_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13322_gshared (Dictionary_2_t2554 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m13322(__this, ___comparer, method) (( void (*) (Dictionary_2_t2554 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m13322_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m13323_gshared (Dictionary_2_t2554 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m13323(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2554 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m13323_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13324_gshared (Dictionary_2_t2554 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m13324(__this, ___capacity, method) (( void (*) (Dictionary_2_t2554 *, int32_t, MethodInfo*))Dictionary_2__ctor_m13324_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13325_gshared (Dictionary_2_t2554 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m13325(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2554 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m13325_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13326_gshared (Dictionary_2_t2554 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m13326(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2554 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2__ctor_m13326_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13327_gshared (Dictionary_2_t2554 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13327(__this, method) (( Object_t* (*) (Dictionary_2_t2554 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13327_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13328_gshared (Dictionary_2_t2554 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13328(__this, method) (( Object_t* (*) (Dictionary_2_t2554 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13328_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13329_gshared (Dictionary_2_t2554 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13329(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2554 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13329_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13330_gshared (Dictionary_2_t2554 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13330(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2554 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13330_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13331_gshared (Dictionary_2_t2554 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13331(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2554 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13331_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13332_gshared (Dictionary_2_t2554 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13332(__this, ___key, method) (( bool (*) (Dictionary_2_t2554 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13332_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13333_gshared (Dictionary_2_t2554 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13333(__this, ___key, method) (( void (*) (Dictionary_2_t2554 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13333_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13334_gshared (Dictionary_2_t2554 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13334(__this, method) (( bool (*) (Dictionary_2_t2554 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13334_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13335_gshared (Dictionary_2_t2554 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13335(__this, method) (( Object_t * (*) (Dictionary_2_t2554 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13335_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13336_gshared (Dictionary_2_t2554 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13336(__this, method) (( bool (*) (Dictionary_2_t2554 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13336_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13337_gshared (Dictionary_2_t2554 * __this, KeyValuePair_2_t2558  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13337(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2554 *, KeyValuePair_2_t2558 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13337_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13338_gshared (Dictionary_2_t2554 * __this, KeyValuePair_2_t2558  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13338(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2554 *, KeyValuePair_2_t2558 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13338_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13339_gshared (Dictionary_2_t2554 * __this, KeyValuePair_2U5BU5D_t3456* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13339(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2554 *, KeyValuePair_2U5BU5D_t3456*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13339_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13340_gshared (Dictionary_2_t2554 * __this, KeyValuePair_2_t2558  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13340(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2554 *, KeyValuePair_2_t2558 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13340_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13341_gshared (Dictionary_2_t2554 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13341(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2554 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13341_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13342_gshared (Dictionary_2_t2554 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13342(__this, method) (( Object_t * (*) (Dictionary_2_t2554 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13342_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13343_gshared (Dictionary_2_t2554 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13343(__this, method) (( Object_t* (*) (Dictionary_2_t2554 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13343_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13344_gshared (Dictionary_2_t2554 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13344(__this, method) (( Object_t * (*) (Dictionary_2_t2554 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13344_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13345_gshared (Dictionary_2_t2554 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m13345(__this, method) (( int32_t (*) (Dictionary_2_t2554 *, MethodInfo*))Dictionary_2_get_Count_m13345_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m13346_gshared (Dictionary_2_t2554 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m13346(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2554 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m13346_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13347_gshared (Dictionary_2_t2554 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m13347(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2554 *, Object_t *, int32_t, MethodInfo*))Dictionary_2_set_Item_m13347_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13348_gshared (Dictionary_2_t2554 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m13348(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2554 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m13348_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13349_gshared (Dictionary_2_t2554 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m13349(__this, ___size, method) (( void (*) (Dictionary_2_t2554 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m13349_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13350_gshared (Dictionary_2_t2554 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13350(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2554 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m13350_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2558  Dictionary_2_make_pair_m13351_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m13351(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2558  (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_make_pair_m13351_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m13352_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m13352(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_pick_key_m13352_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m13353_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m13353(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_pick_value_m13353_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13354_gshared (Dictionary_2_t2554 * __this, KeyValuePair_2U5BU5D_t3456* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m13354(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2554 *, KeyValuePair_2U5BU5D_t3456*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m13354_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m13355_gshared (Dictionary_2_t2554 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m13355(__this, method) (( void (*) (Dictionary_2_t2554 *, MethodInfo*))Dictionary_2_Resize_m13355_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13356_gshared (Dictionary_2_t2554 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m13356(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2554 *, Object_t *, int32_t, MethodInfo*))Dictionary_2_Add_m13356_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m13357_gshared (Dictionary_2_t2554 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m13357(__this, method) (( void (*) (Dictionary_2_t2554 *, MethodInfo*))Dictionary_2_Clear_m13357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13358_gshared (Dictionary_2_t2554 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m13358(__this, ___key, method) (( bool (*) (Dictionary_2_t2554 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m13358_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13359_gshared (Dictionary_2_t2554 * __this, int32_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m13359(__this, ___value, method) (( bool (*) (Dictionary_2_t2554 *, int32_t, MethodInfo*))Dictionary_2_ContainsValue_m13359_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13360_gshared (Dictionary_2_t2554 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m13360(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2554 *, SerializationInfo_t653 *, StreamingContext_t654 , MethodInfo*))Dictionary_2_GetObjectData_m13360_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13361_gshared (Dictionary_2_t2554 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13361(__this, ___sender, method) (( void (*) (Dictionary_2_t2554 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m13361_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13362_gshared (Dictionary_2_t2554 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m13362(__this, ___key, method) (( bool (*) (Dictionary_2_t2554 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m13362_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13363_gshared (Dictionary_2_t2554 * __this, Object_t * ___key, int32_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m13363(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2554 *, Object_t *, int32_t*, MethodInfo*))Dictionary_2_TryGetValue_m13363_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2560 * Dictionary_2_get_Keys_m13364_gshared (Dictionary_2_t2554 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m13364(__this, method) (( KeyCollection_t2560 * (*) (Dictionary_2_t2554 *, MethodInfo*))Dictionary_2_get_Keys_m13364_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2564 * Dictionary_2_get_Values_m13365_gshared (Dictionary_2_t2554 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m13365(__this, method) (( ValueCollection_t2564 * (*) (Dictionary_2_t2554 *, MethodInfo*))Dictionary_2_get_Values_m13365_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13366_gshared (Dictionary_2_t2554 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m13366(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2554 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m13366_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m13367_gshared (Dictionary_2_t2554 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m13367(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2554 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m13367_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13368_gshared (Dictionary_2_t2554 * __this, KeyValuePair_2_t2558  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13368(__this, ___pair, method) (( bool (*) (Dictionary_2_t2554 *, KeyValuePair_2_t2558 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13368_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2562  Dictionary_2_GetEnumerator_m13369_gshared (Dictionary_2_t2554 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13369(__this, method) (( Enumerator_t2562  (*) (Dictionary_2_t2554 *, MethodInfo*))Dictionary_2_GetEnumerator_m13369_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t918  Dictionary_2_U3CCopyToU3Em__0_m13370_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13370(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t918  (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13370_gshared)(__this /* static, unused */, ___key, ___value, method)
