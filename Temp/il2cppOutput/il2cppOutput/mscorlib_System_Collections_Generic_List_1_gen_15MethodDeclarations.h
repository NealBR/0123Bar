#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct List_1_t214;
// System.Object
struct Object_t;
// UnityEngine.UI.StencilMaterial/MatEntry
struct MatEntry_t213;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerator_1_t3498;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ICollection_1_t3499;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerable_1_t3500;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ReadOnlyCollection_1_t2765;
// UnityEngine.UI.StencilMaterial/MatEntry[]
struct MatEntryU5BU5D_t2761;
// System.Predicate`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Predicate_1_t2769;
// System.Comparison`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Comparison_1_t2772;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.StencilMaterial/MatEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_19.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
#define List_1__ctor_m1818(__this, method) (( void (*) (List_1_t214 *, MethodInfo*))List_1__ctor_m3445_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(System.Int32)
#define List_1__ctor_m15335(__this, ___capacity, method) (( void (*) (List_1_t214 *, int32_t, MethodInfo*))List_1__ctor_m11265_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.cctor()
#define List_1__cctor_m15336(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11267_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15337(__this, method) (( Object_t* (*) (List_1_t214 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3672_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m15338(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t214 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3656_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15339(__this, method) (( Object_t * (*) (List_1_t214 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3652_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m15340(__this, ___item, method) (( int32_t (*) (List_1_t214 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m3661_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m15341(__this, ___item, method) (( bool (*) (List_1_t214 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m3663_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m15342(__this, ___item, method) (( int32_t (*) (List_1_t214 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m3664_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m15343(__this, ___index, ___item, method) (( void (*) (List_1_t214 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m3665_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m15344(__this, ___item, method) (( void (*) (List_1_t214 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m3666_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15345(__this, method) (( bool (*) (List_1_t214 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15346(__this, method) (( bool (*) (List_1_t214 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3654_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m15347(__this, method) (( Object_t * (*) (List_1_t214 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m15348(__this, method) (( bool (*) (List_1_t214 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m15349(__this, method) (( bool (*) (List_1_t214 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3658_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m15350(__this, ___index, method) (( Object_t * (*) (List_1_t214 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m3659_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m15351(__this, ___index, ___value, method) (( void (*) (List_1_t214 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m3660_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Add(T)
#define List_1_Add_m1826(__this, ___item, method) (( void (*) (List_1_t214 *, MatEntry_t213 *, MethodInfo*))List_1_Add_m3466_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m15352(__this, ___newCount, method) (( void (*) (List_1_t214 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11285_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m15353(__this, ___collection, method) (( void (*) (List_1_t214 *, Object_t*, MethodInfo*))List_1_AddCollection_m11287_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m15354(__this, ___enumerable, method) (( void (*) (List_1_t214 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11289_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m15355(__this, ___collection, method) (( void (*) (List_1_t214 *, Object_t*, MethodInfo*))List_1_AddRange_m11291_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AsReadOnly()
#define List_1_AsReadOnly_m15356(__this, method) (( ReadOnlyCollection_1_t2765 * (*) (List_1_t214 *, MethodInfo*))List_1_AsReadOnly_m11293_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Clear()
#define List_1_Clear_m15357(__this, method) (( void (*) (List_1_t214 *, MethodInfo*))List_1_Clear_m3662_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Contains(T)
#define List_1_Contains_m15358(__this, ___item, method) (( bool (*) (List_1_t214 *, MatEntry_t213 *, MethodInfo*))List_1_Contains_m3669_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m15359(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t214 *, MatEntryU5BU5D_t2761*, int32_t, MethodInfo*))List_1_CopyTo_m3670_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m15360(__this, ___match, method) (( MatEntry_t213 * (*) (List_1_t214 *, Predicate_1_t2769 *, MethodInfo*))List_1_Find_m11298_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m15361(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2769 *, MethodInfo*))List_1_CheckMatch_m11300_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m15362(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t214 *, int32_t, int32_t, Predicate_1_t2769 *, MethodInfo*))List_1_GetIndex_m11302_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetEnumerator()
#define List_1_GetEnumerator_m15363(__this, method) (( Enumerator_t2763  (*) (List_1_t214 *, MethodInfo*))List_1_GetEnumerator_m11304_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::IndexOf(T)
#define List_1_IndexOf_m15364(__this, ___item, method) (( int32_t (*) (List_1_t214 *, MatEntry_t213 *, MethodInfo*))List_1_IndexOf_m3673_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m15365(__this, ___start, ___delta, method) (( void (*) (List_1_t214 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11307_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m15366(__this, ___index, method) (( void (*) (List_1_t214 *, int32_t, MethodInfo*))List_1_CheckIndex_m11309_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Insert(System.Int32,T)
#define List_1_Insert_m15367(__this, ___index, ___item, method) (( void (*) (List_1_t214 *, int32_t, MatEntry_t213 *, MethodInfo*))List_1_Insert_m3674_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m15368(__this, ___collection, method) (( void (*) (List_1_t214 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11312_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Remove(T)
#define List_1_Remove_m15369(__this, ___item, method) (( bool (*) (List_1_t214 *, MatEntry_t213 *, MethodInfo*))List_1_Remove_m3671_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m15370(__this, ___match, method) (( int32_t (*) (List_1_t214 *, Predicate_1_t2769 *, MethodInfo*))List_1_RemoveAll_m11315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m1827(__this, ___index, method) (( void (*) (List_1_t214 *, int32_t, MethodInfo*))List_1_RemoveAt_m3667_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Reverse()
#define List_1_Reverse_m15371(__this, method) (( void (*) (List_1_t214 *, MethodInfo*))List_1_Reverse_m11317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort()
#define List_1_Sort_m15372(__this, method) (( void (*) (List_1_t214 *, MethodInfo*))List_1_Sort_m11319_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m15373(__this, ___comparison, method) (( void (*) (List_1_t214 *, Comparison_1_t2772 *, MethodInfo*))List_1_Sort_m11321_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::ToArray()
#define List_1_ToArray_m15374(__this, method) (( MatEntryU5BU5D_t2761* (*) (List_1_t214 *, MethodInfo*))List_1_ToArray_m11323_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::TrimExcess()
#define List_1_TrimExcess_m15375(__this, method) (( void (*) (List_1_t214 *, MethodInfo*))List_1_TrimExcess_m11325_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Capacity()
#define List_1_get_Capacity_m15376(__this, method) (( int32_t (*) (List_1_t214 *, MethodInfo*))List_1_get_Capacity_m11327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m15377(__this, ___value, method) (( void (*) (List_1_t214 *, int32_t, MethodInfo*))List_1_set_Capacity_m11329_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Count()
#define List_1_get_Count_m1822(__this, method) (( int32_t (*) (List_1_t214 *, MethodInfo*))List_1_get_Count_m3653_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Item(System.Int32)
#define List_1_get_Item_m1821(__this, ___index, method) (( MatEntry_t213 * (*) (List_1_t214 *, int32_t, MethodInfo*))List_1_get_Item_m3675_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m15378(__this, ___index, ___value, method) (( void (*) (List_1_t214 *, int32_t, MatEntry_t213 *, MethodInfo*))List_1_set_Item_m3676_gshared)(__this, ___index, ___value, method)
