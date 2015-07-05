#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t204;
// System.Object
struct Object_t;
// UnityEngine.UI.Selectable
struct Selectable_t116;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable>
struct IEnumerator_1_t3492;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>
struct ICollection_1_t3493;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Selectable>
struct IEnumerable_1_t3494;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Selectable>
struct ReadOnlyCollection_1_t2737;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t2726;
// System.Predicate`1<UnityEngine.UI.Selectable>
struct Predicate_1_t2741;
// System.Comparison`1<UnityEngine.UI.Selectable>
struct Comparison_1_t2744;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Selectable>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
#define List_1__ctor_m1788(__this, method) (( void (*) (List_1_t204 *, MethodInfo*))List_1__ctor_m3445_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Int32)
#define List_1__ctor_m15007(__this, ___capacity, method) (( void (*) (List_1_t204 *, int32_t, MethodInfo*))List_1__ctor_m11265_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.cctor()
#define List_1__cctor_m15008(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11267_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15009(__this, method) (( Object_t* (*) (List_1_t204 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3672_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m15010(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t204 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3656_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15011(__this, method) (( Object_t * (*) (List_1_t204 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3652_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m15012(__this, ___item, method) (( int32_t (*) (List_1_t204 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m3661_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m15013(__this, ___item, method) (( bool (*) (List_1_t204 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m3663_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m15014(__this, ___item, method) (( int32_t (*) (List_1_t204 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m3664_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m15015(__this, ___index, ___item, method) (( void (*) (List_1_t204 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m3665_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m15016(__this, ___item, method) (( void (*) (List_1_t204 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m3666_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15017(__this, method) (( bool (*) (List_1_t204 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15018(__this, method) (( bool (*) (List_1_t204 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3654_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m15019(__this, method) (( Object_t * (*) (List_1_t204 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m15020(__this, method) (( bool (*) (List_1_t204 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m15021(__this, method) (( bool (*) (List_1_t204 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3658_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m15022(__this, ___index, method) (( Object_t * (*) (List_1_t204 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m3659_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m15023(__this, ___index, ___value, method) (( void (*) (List_1_t204 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m3660_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Add(T)
#define List_1_Add_m1792(__this, ___item, method) (( void (*) (List_1_t204 *, Selectable_t116 *, MethodInfo*))List_1_Add_m3466_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m15024(__this, ___newCount, method) (( void (*) (List_1_t204 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11285_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m15025(__this, ___collection, method) (( void (*) (List_1_t204 *, Object_t*, MethodInfo*))List_1_AddCollection_m11287_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m15026(__this, ___enumerable, method) (( void (*) (List_1_t204 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11289_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m15027(__this, ___collection, method) (( void (*) (List_1_t204 *, Object_t*, MethodInfo*))List_1_AddRange_m11291_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AsReadOnly()
#define List_1_AsReadOnly_m15028(__this, method) (( ReadOnlyCollection_1_t2737 * (*) (List_1_t204 *, MethodInfo*))List_1_AsReadOnly_m11293_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Clear()
#define List_1_Clear_m15029(__this, method) (( void (*) (List_1_t204 *, MethodInfo*))List_1_Clear_m3662_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Contains(T)
#define List_1_Contains_m15030(__this, ___item, method) (( bool (*) (List_1_t204 *, Selectable_t116 *, MethodInfo*))List_1_Contains_m3669_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m15031(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t204 *, SelectableU5BU5D_t2726*, int32_t, MethodInfo*))List_1_CopyTo_m3670_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Find(System.Predicate`1<T>)
#define List_1_Find_m15032(__this, ___match, method) (( Selectable_t116 * (*) (List_1_t204 *, Predicate_1_t2741 *, MethodInfo*))List_1_Find_m11298_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m15033(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2741 *, MethodInfo*))List_1_CheckMatch_m11300_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m15034(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t204 *, int32_t, int32_t, Predicate_1_t2741 *, MethodInfo*))List_1_GetIndex_m11302_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetEnumerator()
#define List_1_GetEnumerator_m15035(__this, method) (( Enumerator_t2735  (*) (List_1_t204 *, MethodInfo*))List_1_GetEnumerator_m11304_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::IndexOf(T)
#define List_1_IndexOf_m15036(__this, ___item, method) (( int32_t (*) (List_1_t204 *, Selectable_t116 *, MethodInfo*))List_1_IndexOf_m3673_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m15037(__this, ___start, ___delta, method) (( void (*) (List_1_t204 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11307_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m15038(__this, ___index, method) (( void (*) (List_1_t204 *, int32_t, MethodInfo*))List_1_CheckIndex_m11309_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Insert(System.Int32,T)
#define List_1_Insert_m15039(__this, ___index, ___item, method) (( void (*) (List_1_t204 *, int32_t, Selectable_t116 *, MethodInfo*))List_1_Insert_m3674_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m15040(__this, ___collection, method) (( void (*) (List_1_t204 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11312_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Remove(T)
#define List_1_Remove_m1793(__this, ___item, method) (( bool (*) (List_1_t204 *, Selectable_t116 *, MethodInfo*))List_1_Remove_m3671_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m15041(__this, ___match, method) (( int32_t (*) (List_1_t204 *, Predicate_1_t2741 *, MethodInfo*))List_1_RemoveAll_m11315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m15042(__this, ___index, method) (( void (*) (List_1_t204 *, int32_t, MethodInfo*))List_1_RemoveAt_m3667_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Reverse()
#define List_1_Reverse_m15043(__this, method) (( void (*) (List_1_t204 *, MethodInfo*))List_1_Reverse_m11317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort()
#define List_1_Sort_m15044(__this, method) (( void (*) (List_1_t204 *, MethodInfo*))List_1_Sort_m11319_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m15045(__this, ___comparison, method) (( void (*) (List_1_t204 *, Comparison_1_t2744 *, MethodInfo*))List_1_Sort_m11321_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::ToArray()
#define List_1_ToArray_m15046(__this, method) (( SelectableU5BU5D_t2726* (*) (List_1_t204 *, MethodInfo*))List_1_ToArray_m11323_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::TrimExcess()
#define List_1_TrimExcess_m15047(__this, method) (( void (*) (List_1_t204 *, MethodInfo*))List_1_TrimExcess_m11325_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Capacity()
#define List_1_get_Capacity_m15048(__this, method) (( int32_t (*) (List_1_t204 *, MethodInfo*))List_1_get_Capacity_m11327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m15049(__this, ___value, method) (( void (*) (List_1_t204 *, int32_t, MethodInfo*))List_1_set_Capacity_m11329_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Count()
#define List_1_get_Count_m1800(__this, method) (( int32_t (*) (List_1_t204 *, MethodInfo*))List_1_get_Count_m3653_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Item(System.Int32)
#define List_1_get_Item_m1798(__this, ___index, method) (( Selectable_t116 * (*) (List_1_t204 *, int32_t, MethodInfo*))List_1_get_Item_m3675_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Item(System.Int32,T)
#define List_1_set_Item_m15050(__this, ___index, ___value, method) (( void (*) (List_1_t204 *, int32_t, Selectable_t116 *, MethodInfo*))List_1_set_Item_m3676_gshared)(__this, ___index, ___value, method)
