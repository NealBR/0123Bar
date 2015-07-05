#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t735;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t3571;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t3567;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t3591;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
struct ReadOnlyCollection_1_t3209;
// System.Type[]
struct TypeU5BU5D_t606;
// System.Predicate`1<System.Type>
struct Predicate_1_t3211;
// System.Comparison`1<System.Type>
struct Comparison_1_t3214;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_29.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
#define List_1__ctor_m3547(__this, method) (( void (*) (List_1_t735 *, MethodInfo*))List_1__ctor_m3445_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m19731(__this, ___capacity, method) (( void (*) (List_1_t735 *, int32_t, MethodInfo*))List_1__ctor_m11265_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m19732(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11267_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19733(__this, method) (( Object_t* (*) (List_1_t735 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3672_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m19734(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t735 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3656_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19735(__this, method) (( Object_t * (*) (List_1_t735 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3652_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m19736(__this, ___item, method) (( int32_t (*) (List_1_t735 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m3661_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m19737(__this, ___item, method) (( bool (*) (List_1_t735 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m3663_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m19738(__this, ___item, method) (( int32_t (*) (List_1_t735 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m3664_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m19739(__this, ___index, ___item, method) (( void (*) (List_1_t735 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m3665_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m19740(__this, ___item, method) (( void (*) (List_1_t735 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m3666_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19741(__this, method) (( bool (*) (List_1_t735 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19742(__this, method) (( bool (*) (List_1_t735 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3654_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m19743(__this, method) (( Object_t * (*) (List_1_t735 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m19744(__this, method) (( bool (*) (List_1_t735 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m19745(__this, method) (( bool (*) (List_1_t735 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3658_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m19746(__this, ___index, method) (( Object_t * (*) (List_1_t735 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m3659_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m19747(__this, ___index, ___value, method) (( void (*) (List_1_t735 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m3660_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m3548(__this, ___item, method) (( void (*) (List_1_t735 *, Type_t *, MethodInfo*))List_1_Add_m3466_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m19748(__this, ___newCount, method) (( void (*) (List_1_t735 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11285_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m19749(__this, ___collection, method) (( void (*) (List_1_t735 *, Object_t*, MethodInfo*))List_1_AddCollection_m11287_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m19750(__this, ___enumerable, method) (( void (*) (List_1_t735 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11289_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m19751(__this, ___collection, method) (( void (*) (List_1_t735 *, Object_t*, MethodInfo*))List_1_AddRange_m11291_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Type>::AsReadOnly()
#define List_1_AsReadOnly_m19752(__this, method) (( ReadOnlyCollection_1_t3209 * (*) (List_1_t735 *, MethodInfo*))List_1_AsReadOnly_m11293_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m19753(__this, method) (( void (*) (List_1_t735 *, MethodInfo*))List_1_Clear_m3662_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m19754(__this, ___item, method) (( bool (*) (List_1_t735 *, Type_t *, MethodInfo*))List_1_Contains_m3669_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m19755(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t735 *, TypeU5BU5D_t606*, int32_t, MethodInfo*))List_1_CopyTo_m3670_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Type>::Find(System.Predicate`1<T>)
#define List_1_Find_m19756(__this, ___match, method) (( Type_t * (*) (List_1_t735 *, Predicate_1_t3211 *, MethodInfo*))List_1_Find_m11298_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m19757(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3211 *, MethodInfo*))List_1_CheckMatch_m11300_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m19758(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t735 *, int32_t, int32_t, Predicate_1_t3211 *, MethodInfo*))List_1_GetIndex_m11302_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m19759(__this, method) (( Enumerator_t3207  (*) (List_1_t735 *, MethodInfo*))List_1_GetEnumerator_m11304_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m19760(__this, ___item, method) (( int32_t (*) (List_1_t735 *, Type_t *, MethodInfo*))List_1_IndexOf_m3673_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m19761(__this, ___start, ___delta, method) (( void (*) (List_1_t735 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11307_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m19762(__this, ___index, method) (( void (*) (List_1_t735 *, int32_t, MethodInfo*))List_1_CheckIndex_m11309_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m19763(__this, ___index, ___item, method) (( void (*) (List_1_t735 *, int32_t, Type_t *, MethodInfo*))List_1_Insert_m3674_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m19764(__this, ___collection, method) (( void (*) (List_1_t735 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11312_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m19765(__this, ___item, method) (( bool (*) (List_1_t735 *, Type_t *, MethodInfo*))List_1_Remove_m3671_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m19766(__this, ___match, method) (( int32_t (*) (List_1_t735 *, Predicate_1_t3211 *, MethodInfo*))List_1_RemoveAll_m11315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m19767(__this, ___index, method) (( void (*) (List_1_t735 *, int32_t, MethodInfo*))List_1_RemoveAt_m3667_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Reverse()
#define List_1_Reverse_m19768(__this, method) (( void (*) (List_1_t735 *, MethodInfo*))List_1_Reverse_m11317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort()
#define List_1_Sort_m19769(__this, method) (( void (*) (List_1_t735 *, MethodInfo*))List_1_Sort_m11319_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m19770(__this, ___comparison, method) (( void (*) (List_1_t735 *, Comparison_1_t3214 *, MethodInfo*))List_1_Sort_m11321_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m3551(__this, method) (( TypeU5BU5D_t606* (*) (List_1_t735 *, MethodInfo*))List_1_ToArray_m11323_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::TrimExcess()
#define List_1_TrimExcess_m19771(__this, method) (( void (*) (List_1_t735 *, MethodInfo*))List_1_TrimExcess_m11325_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m19772(__this, method) (( int32_t (*) (List_1_t735 *, MethodInfo*))List_1_get_Capacity_m11327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m19773(__this, ___value, method) (( void (*) (List_1_t735 *, int32_t, MethodInfo*))List_1_set_Capacity_m11329_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m19774(__this, method) (( int32_t (*) (List_1_t735 *, MethodInfo*))List_1_get_Count_m3653_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m19775(__this, ___index, method) (( Type_t * (*) (List_1_t735 *, int32_t, MethodInfo*))List_1_get_Item_m3675_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m19776(__this, ___index, ___value, method) (( void (*) (List_1_t735 *, int32_t, Type_t *, MethodInfo*))List_1_set_Item_m3676_gshared)(__this, ___index, ___value, method)
