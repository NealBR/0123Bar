#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t143;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t138;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t3482;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>
struct ICollection_1_t296;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Graphic>
struct IEnumerable_1_t3483;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Graphic>
struct ReadOnlyCollection_1_t2676;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t2674;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t2680;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t144;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Graphic>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_16.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
#define List_1__ctor_m1543(__this, method) (( void (*) (List_1_t143 *, MethodInfo*))List_1__ctor_m3445_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor(System.Int32)
#define List_1__ctor_m14513(__this, ___capacity, method) (( void (*) (List_1_t143 *, int32_t, MethodInfo*))List_1__ctor_m11265_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.cctor()
#define List_1__cctor_m14514(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11267_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14515(__this, method) (( Object_t* (*) (List_1_t143 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3672_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m14516(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t143 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3656_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14517(__this, method) (( Object_t * (*) (List_1_t143 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3652_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m14518(__this, ___item, method) (( int32_t (*) (List_1_t143 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m3661_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m14519(__this, ___item, method) (( bool (*) (List_1_t143 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m3663_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m14520(__this, ___item, method) (( int32_t (*) (List_1_t143 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m3664_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m14521(__this, ___index, ___item, method) (( void (*) (List_1_t143 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m3665_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m14522(__this, ___item, method) (( void (*) (List_1_t143 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m3666_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14523(__this, method) (( bool (*) (List_1_t143 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14524(__this, method) (( bool (*) (List_1_t143 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3654_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m14525(__this, method) (( Object_t * (*) (List_1_t143 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m14526(__this, method) (( bool (*) (List_1_t143 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m14527(__this, method) (( bool (*) (List_1_t143 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3658_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m14528(__this, ___index, method) (( Object_t * (*) (List_1_t143 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m3659_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m14529(__this, ___index, ___value, method) (( void (*) (List_1_t143 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m3660_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Add(T)
#define List_1_Add_m1562(__this, ___item, method) (( void (*) (List_1_t143 *, Graphic_t138 *, MethodInfo*))List_1_Add_m3466_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m14530(__this, ___newCount, method) (( void (*) (List_1_t143 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11285_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m14531(__this, ___collection, method) (( void (*) (List_1_t143 *, Object_t*, MethodInfo*))List_1_AddCollection_m11287_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m14532(__this, ___enumerable, method) (( void (*) (List_1_t143 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11289_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m14533(__this, ___collection, method) (( void (*) (List_1_t143 *, Object_t*, MethodInfo*))List_1_AddRange_m11291_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AsReadOnly()
#define List_1_AsReadOnly_m14534(__this, method) (( ReadOnlyCollection_1_t2676 * (*) (List_1_t143 *, MethodInfo*))List_1_AsReadOnly_m11293_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Clear()
#define List_1_Clear_m1550(__this, method) (( void (*) (List_1_t143 *, MethodInfo*))List_1_Clear_m3662_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Contains(T)
#define List_1_Contains_m14535(__this, ___item, method) (( bool (*) (List_1_t143 *, Graphic_t138 *, MethodInfo*))List_1_Contains_m3669_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m14536(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t143 *, GraphicU5BU5D_t2674*, int32_t, MethodInfo*))List_1_CopyTo_m3670_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Find(System.Predicate`1<T>)
#define List_1_Find_m14537(__this, ___match, method) (( Graphic_t138 * (*) (List_1_t143 *, Predicate_1_t2680 *, MethodInfo*))List_1_Find_m11298_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m14538(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2680 *, MethodInfo*))List_1_CheckMatch_m11300_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m14539(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t143 *, int32_t, int32_t, Predicate_1_t2680 *, MethodInfo*))List_1_GetIndex_m11302_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define List_1_GetEnumerator_m14540(__this, method) (( Enumerator_t2675  (*) (List_1_t143 *, MethodInfo*))List_1_GetEnumerator_m11304_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define List_1_IndexOf_m14541(__this, ___item, method) (( int32_t (*) (List_1_t143 *, Graphic_t138 *, MethodInfo*))List_1_IndexOf_m3673_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m14542(__this, ___start, ___delta, method) (( void (*) (List_1_t143 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11307_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m14543(__this, ___index, method) (( void (*) (List_1_t143 *, int32_t, MethodInfo*))List_1_CheckIndex_m11309_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define List_1_Insert_m14544(__this, ___index, ___item, method) (( void (*) (List_1_t143 *, int32_t, Graphic_t138 *, MethodInfo*))List_1_Insert_m3674_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m14545(__this, ___collection, method) (( void (*) (List_1_t143 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11312_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Remove(T)
#define List_1_Remove_m14546(__this, ___item, method) (( bool (*) (List_1_t143 *, Graphic_t138 *, MethodInfo*))List_1_Remove_m3671_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m14547(__this, ___match, method) (( int32_t (*) (List_1_t143 *, Predicate_1_t2680 *, MethodInfo*))List_1_RemoveAll_m11315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m14548(__this, ___index, method) (( void (*) (List_1_t143 *, int32_t, MethodInfo*))List_1_RemoveAt_m3667_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Reverse()
#define List_1_Reverse_m14549(__this, method) (( void (*) (List_1_t143 *, MethodInfo*))List_1_Reverse_m11317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort()
#define List_1_Sort_m14550(__this, method) (( void (*) (List_1_t143 *, MethodInfo*))List_1_Sort_m11319_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m1566(__this, ___comparison, method) (( void (*) (List_1_t143 *, Comparison_1_t144 *, MethodInfo*))List_1_Sort_m11321_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::ToArray()
#define List_1_ToArray_m14551(__this, method) (( GraphicU5BU5D_t2674* (*) (List_1_t143 *, MethodInfo*))List_1_ToArray_m11323_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::TrimExcess()
#define List_1_TrimExcess_m14552(__this, method) (( void (*) (List_1_t143 *, MethodInfo*))List_1_TrimExcess_m11325_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Capacity()
#define List_1_get_Capacity_m14553(__this, method) (( int32_t (*) (List_1_t143 *, MethodInfo*))List_1_get_Capacity_m11327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m14554(__this, ___value, method) (( void (*) (List_1_t143 *, int32_t, MethodInfo*))List_1_set_Capacity_m11329_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Count()
#define List_1_get_Count_m1559(__this, method) (( int32_t (*) (List_1_t143 *, MethodInfo*))List_1_get_Count_m3653_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define List_1_get_Item_m1551(__this, ___index, method) (( Graphic_t138 * (*) (List_1_t143 *, int32_t, MethodInfo*))List_1_get_Item_m3675_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define List_1_set_Item_m14555(__this, ___index, ___value, method) (( void (*) (List_1_t143 *, int32_t, Graphic_t138 *, MethodInfo*))List_1_set_Item_m3676_gshared)(__this, ___index, ___value, method)
