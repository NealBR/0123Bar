#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t475;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t474;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t3515;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>
struct ICollection_1_t3516;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GUILayoutEntry>
struct IEnumerable_1_t3517;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>
struct ReadOnlyCollection_1_t2859;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t2856;
// System.Predicate`1<UnityEngine.GUILayoutEntry>
struct Predicate_1_t2863;
// System.Comparison`1<UnityEngine.GUILayoutEntry>
struct Comparison_1_t2866;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
#define List_1__ctor_m3345(__this, method) (( void (*) (List_1_t475 *, MethodInfo*))List_1__ctor_m3445_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m16254(__this, ___capacity, method) (( void (*) (List_1_t475 *, int32_t, MethodInfo*))List_1__ctor_m11265_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m16255(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11267_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16256(__this, method) (( Object_t* (*) (List_1_t475 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3672_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m16257(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t475 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3656_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16258(__this, method) (( Object_t * (*) (List_1_t475 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3652_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m16259(__this, ___item, method) (( int32_t (*) (List_1_t475 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m3661_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m16260(__this, ___item, method) (( bool (*) (List_1_t475 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m3663_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m16261(__this, ___item, method) (( int32_t (*) (List_1_t475 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m3664_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m16262(__this, ___index, ___item, method) (( void (*) (List_1_t475 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m3665_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m16263(__this, ___item, method) (( void (*) (List_1_t475 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m3666_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16264(__this, method) (( bool (*) (List_1_t475 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16265(__this, method) (( bool (*) (List_1_t475 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3654_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m16266(__this, method) (( Object_t * (*) (List_1_t475 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m16267(__this, method) (( bool (*) (List_1_t475 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m16268(__this, method) (( bool (*) (List_1_t475 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3658_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m16269(__this, ___index, method) (( Object_t * (*) (List_1_t475 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m3659_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m16270(__this, ___index, ___value, method) (( void (*) (List_1_t475 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m3660_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m16271(__this, ___item, method) (( void (*) (List_1_t475 *, GUILayoutEntry_t474 *, MethodInfo*))List_1_Add_m3466_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m16272(__this, ___newCount, method) (( void (*) (List_1_t475 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11285_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m16273(__this, ___collection, method) (( void (*) (List_1_t475 *, Object_t*, MethodInfo*))List_1_AddCollection_m11287_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m16274(__this, ___enumerable, method) (( void (*) (List_1_t475 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11289_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m16275(__this, ___collection, method) (( void (*) (List_1_t475 *, Object_t*, MethodInfo*))List_1_AddRange_m11291_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AsReadOnly()
#define List_1_AsReadOnly_m16276(__this, method) (( ReadOnlyCollection_1_t2859 * (*) (List_1_t475 *, MethodInfo*))List_1_AsReadOnly_m11293_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m16277(__this, method) (( void (*) (List_1_t475 *, MethodInfo*))List_1_Clear_m3662_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m16278(__this, ___item, method) (( bool (*) (List_1_t475 *, GUILayoutEntry_t474 *, MethodInfo*))List_1_Contains_m3669_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m16279(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t475 *, GUILayoutEntryU5BU5D_t2856*, int32_t, MethodInfo*))List_1_CopyTo_m3670_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m16280(__this, ___match, method) (( GUILayoutEntry_t474 * (*) (List_1_t475 *, Predicate_1_t2863 *, MethodInfo*))List_1_Find_m11298_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m16281(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2863 *, MethodInfo*))List_1_CheckMatch_m11300_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m16282(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t475 *, int32_t, int32_t, Predicate_1_t2863 *, MethodInfo*))List_1_GetIndex_m11302_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m3342(__this, method) (( Enumerator_t685  (*) (List_1_t475 *, MethodInfo*))List_1_GetEnumerator_m11304_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m16283(__this, ___item, method) (( int32_t (*) (List_1_t475 *, GUILayoutEntry_t474 *, MethodInfo*))List_1_IndexOf_m3673_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m16284(__this, ___start, ___delta, method) (( void (*) (List_1_t475 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11307_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m16285(__this, ___index, method) (( void (*) (List_1_t475 *, int32_t, MethodInfo*))List_1_CheckIndex_m11309_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m16286(__this, ___index, ___item, method) (( void (*) (List_1_t475 *, int32_t, GUILayoutEntry_t474 *, MethodInfo*))List_1_Insert_m3674_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m16287(__this, ___collection, method) (( void (*) (List_1_t475 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11312_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m16288(__this, ___item, method) (( bool (*) (List_1_t475 *, GUILayoutEntry_t474 *, MethodInfo*))List_1_Remove_m3671_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m16289(__this, ___match, method) (( int32_t (*) (List_1_t475 *, Predicate_1_t2863 *, MethodInfo*))List_1_RemoveAll_m11315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m16290(__this, ___index, method) (( void (*) (List_1_t475 *, int32_t, MethodInfo*))List_1_RemoveAt_m3667_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Reverse()
#define List_1_Reverse_m16291(__this, method) (( void (*) (List_1_t475 *, MethodInfo*))List_1_Reverse_m11317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort()
#define List_1_Sort_m16292(__this, method) (( void (*) (List_1_t475 *, MethodInfo*))List_1_Sort_m11319_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m16293(__this, ___comparison, method) (( void (*) (List_1_t475 *, Comparison_1_t2866 *, MethodInfo*))List_1_Sort_m11321_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m16294(__this, method) (( GUILayoutEntryU5BU5D_t2856* (*) (List_1_t475 *, MethodInfo*))List_1_ToArray_m11323_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::TrimExcess()
#define List_1_TrimExcess_m16295(__this, method) (( void (*) (List_1_t475 *, MethodInfo*))List_1_TrimExcess_m11325_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m16296(__this, method) (( int32_t (*) (List_1_t475 *, MethodInfo*))List_1_get_Capacity_m11327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m16297(__this, ___value, method) (( void (*) (List_1_t475 *, int32_t, MethodInfo*))List_1_set_Capacity_m11329_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m3346(__this, method) (( int32_t (*) (List_1_t475 *, MethodInfo*))List_1_get_Count_m3653_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m3347(__this, ___index, method) (( GUILayoutEntry_t474 * (*) (List_1_t475 *, int32_t, MethodInfo*))List_1_get_Item_m3675_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m16298(__this, ___index, ___value, method) (( void (*) (List_1_t475 *, int32_t, GUILayoutEntry_t474 *, MethodInfo*))List_1_set_Item_m3676_gshared)(__this, ___index, ___value, method)
