#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t85;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t87;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>
struct IEnumerator_1_t3430;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>
struct ICollection_1_t3431;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseRaycaster>
struct IEnumerable_1_t3432;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>
struct ReadOnlyCollection_1_t2451;
// UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_t2447;
// System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>
struct Predicate_1_t2455;
// System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>
struct Comparison_1_t2458;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
#define List_1__ctor_m1338(__this, method) (( void (*) (List_1_t85 *, MethodInfo*))List_1__ctor_m3445_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Int32)
#define List_1__ctor_m12172(__this, ___capacity, method) (( void (*) (List_1_t85 *, int32_t, MethodInfo*))List_1__ctor_m11265_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.cctor()
#define List_1__cctor_m12173(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11267_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12174(__this, method) (( Object_t* (*) (List_1_t85 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3672_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m12175(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t85 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3656_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12176(__this, method) (( Object_t * (*) (List_1_t85 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3652_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m12177(__this, ___item, method) (( int32_t (*) (List_1_t85 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m3661_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m12178(__this, ___item, method) (( bool (*) (List_1_t85 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m3663_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m12179(__this, ___item, method) (( int32_t (*) (List_1_t85 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m3664_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m12180(__this, ___index, ___item, method) (( void (*) (List_1_t85 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m3665_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m12181(__this, ___item, method) (( void (*) (List_1_t85 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m3666_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12182(__this, method) (( bool (*) (List_1_t85 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12183(__this, method) (( bool (*) (List_1_t85 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3654_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m12184(__this, method) (( Object_t * (*) (List_1_t85 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m12185(__this, method) (( bool (*) (List_1_t85 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m12186(__this, method) (( bool (*) (List_1_t85 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3658_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m12187(__this, ___index, method) (( Object_t * (*) (List_1_t85 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m3659_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m12188(__this, ___index, ___value, method) (( void (*) (List_1_t85 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m3660_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Add(T)
#define List_1_Add_m1340(__this, ___item, method) (( void (*) (List_1_t85 *, BaseRaycaster_t87 *, MethodInfo*))List_1_Add_m3466_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m12189(__this, ___newCount, method) (( void (*) (List_1_t85 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11285_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m12190(__this, ___collection, method) (( void (*) (List_1_t85 *, Object_t*, MethodInfo*))List_1_AddCollection_m11287_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m12191(__this, ___enumerable, method) (( void (*) (List_1_t85 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11289_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m12192(__this, ___collection, method) (( void (*) (List_1_t85 *, Object_t*, MethodInfo*))List_1_AddRange_m11291_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AsReadOnly()
#define List_1_AsReadOnly_m12193(__this, method) (( ReadOnlyCollection_1_t2451 * (*) (List_1_t85 *, MethodInfo*))List_1_AsReadOnly_m11293_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Clear()
#define List_1_Clear_m12194(__this, method) (( void (*) (List_1_t85 *, MethodInfo*))List_1_Clear_m3662_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
#define List_1_Contains_m1339(__this, ___item, method) (( bool (*) (List_1_t85 *, BaseRaycaster_t87 *, MethodInfo*))List_1_Contains_m3669_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m12195(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t85 *, BaseRaycasterU5BU5D_t2447*, int32_t, MethodInfo*))List_1_CopyTo_m3670_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Find(System.Predicate`1<T>)
#define List_1_Find_m12196(__this, ___match, method) (( BaseRaycaster_t87 * (*) (List_1_t85 *, Predicate_1_t2455 *, MethodInfo*))List_1_Find_m11298_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m12197(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2455 *, MethodInfo*))List_1_CheckMatch_m11300_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m12198(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t85 *, int32_t, int32_t, Predicate_1_t2455 *, MethodInfo*))List_1_GetIndex_m11302_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetEnumerator()
#define List_1_GetEnumerator_m12199(__this, method) (( Enumerator_t2449  (*) (List_1_t85 *, MethodInfo*))List_1_GetEnumerator_m11304_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
#define List_1_IndexOf_m12200(__this, ___item, method) (( int32_t (*) (List_1_t85 *, BaseRaycaster_t87 *, MethodInfo*))List_1_IndexOf_m3673_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m12201(__this, ___start, ___delta, method) (( void (*) (List_1_t85 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11307_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m12202(__this, ___index, method) (( void (*) (List_1_t85 *, int32_t, MethodInfo*))List_1_CheckIndex_m11309_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Insert(System.Int32,T)
#define List_1_Insert_m12203(__this, ___index, ___item, method) (( void (*) (List_1_t85 *, int32_t, BaseRaycaster_t87 *, MethodInfo*))List_1_Insert_m3674_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m12204(__this, ___collection, method) (( void (*) (List_1_t85 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11312_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Remove(T)
#define List_1_Remove_m1341(__this, ___item, method) (( bool (*) (List_1_t85 *, BaseRaycaster_t87 *, MethodInfo*))List_1_Remove_m3671_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m12205(__this, ___match, method) (( int32_t (*) (List_1_t85 *, Predicate_1_t2455 *, MethodInfo*))List_1_RemoveAll_m11315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m12206(__this, ___index, method) (( void (*) (List_1_t85 *, int32_t, MethodInfo*))List_1_RemoveAt_m3667_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Reverse()
#define List_1_Reverse_m12207(__this, method) (( void (*) (List_1_t85 *, MethodInfo*))List_1_Reverse_m11317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort()
#define List_1_Sort_m12208(__this, method) (( void (*) (List_1_t85 *, MethodInfo*))List_1_Sort_m11319_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m12209(__this, ___comparison, method) (( void (*) (List_1_t85 *, Comparison_1_t2458 *, MethodInfo*))List_1_Sort_m11321_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::ToArray()
#define List_1_ToArray_m12210(__this, method) (( BaseRaycasterU5BU5D_t2447* (*) (List_1_t85 *, MethodInfo*))List_1_ToArray_m11323_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::TrimExcess()
#define List_1_TrimExcess_m12211(__this, method) (( void (*) (List_1_t85 *, MethodInfo*))List_1_TrimExcess_m11325_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Capacity()
#define List_1_get_Capacity_m12212(__this, method) (( int32_t (*) (List_1_t85 *, MethodInfo*))List_1_get_Capacity_m11327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m12213(__this, ___value, method) (( void (*) (List_1_t85 *, int32_t, MethodInfo*))List_1_set_Capacity_m11329_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Count()
#define List_1_get_Count_m1276(__this, method) (( int32_t (*) (List_1_t85 *, MethodInfo*))List_1_get_Count_m3653_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
#define List_1_get_Item_m1274(__this, ___index, method) (( BaseRaycaster_t87 * (*) (List_1_t85 *, int32_t, MethodInfo*))List_1_get_Item_m3675_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Item(System.Int32,T)
#define List_1_set_Item_m12214(__this, ___index, ___value, method) (( void (*) (List_1_t85 *, int32_t, BaseRaycaster_t87 *, MethodInfo*))List_1_set_Item_m3676_gshared)(__this, ___index, ___value, method)
