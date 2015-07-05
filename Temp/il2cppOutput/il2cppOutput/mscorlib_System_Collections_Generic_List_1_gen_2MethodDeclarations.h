#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t266;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t364;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t596;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t797;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2358;
// System.Object[]
struct ObjectU5BU5D_t269;
// System.Predicate`1<System.Object>
struct Predicate_1_t2368;
// System.Comparison`1<System.Object>
struct Comparison_1_t2387;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3445_gshared (List_1_t266 * __this, MethodInfo* method);
#define List_1__ctor_m3445(__this, method) (( void (*) (List_1_t266 *, MethodInfo*))List_1__ctor_m3445_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11265_gshared (List_1_t266 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m11265(__this, ___capacity, method) (( void (*) (List_1_t266 *, int32_t, MethodInfo*))List_1__ctor_m11265_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m11267_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m11267(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11267_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3672_gshared (List_1_t266 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3672(__this, method) (( Object_t* (*) (List_1_t266 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3672_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m3656_gshared (List_1_t266 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m3656(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t266 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3656_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m3652_gshared (List_1_t266 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m3652(__this, method) (( Object_t * (*) (List_1_t266 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3652_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m3661_gshared (List_1_t266 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m3661(__this, ___item, method) (( int32_t (*) (List_1_t266 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m3661_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m3663_gshared (List_1_t266 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m3663(__this, ___item, method) (( bool (*) (List_1_t266 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m3663_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m3664_gshared (List_1_t266 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m3664(__this, ___item, method) (( int32_t (*) (List_1_t266 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m3664_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m3665_gshared (List_1_t266 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m3665(__this, ___index, ___item, method) (( void (*) (List_1_t266 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m3665_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m3666_gshared (List_1_t266 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m3666(__this, ___item, method) (( void (*) (List_1_t266 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m3666_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3668_gshared (List_1_t266 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3668(__this, method) (( bool (*) (List_1_t266 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m3654_gshared (List_1_t266 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m3654(__this, method) (( bool (*) (List_1_t266 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3654_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m3655_gshared (List_1_t266 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m3655(__this, method) (( Object_t * (*) (List_1_t266 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m3657_gshared (List_1_t266 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m3657(__this, method) (( bool (*) (List_1_t266 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m3658_gshared (List_1_t266 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m3658(__this, method) (( bool (*) (List_1_t266 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3658_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m3659_gshared (List_1_t266 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m3659(__this, ___index, method) (( Object_t * (*) (List_1_t266 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m3659_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m3660_gshared (List_1_t266 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m3660(__this, ___index, ___value, method) (( void (*) (List_1_t266 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m3660_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m3466_gshared (List_1_t266 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Add_m3466(__this, ___item, method) (( void (*) (List_1_t266 *, Object_t *, MethodInfo*))List_1_Add_m3466_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11285_gshared (List_1_t266 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m11285(__this, ___newCount, method) (( void (*) (List_1_t266 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11285_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11287_gshared (List_1_t266 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m11287(__this, ___collection, method) (( void (*) (List_1_t266 *, Object_t*, MethodInfo*))List_1_AddCollection_m11287_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11289_gshared (List_1_t266 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m11289(__this, ___enumerable, method) (( void (*) (List_1_t266 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11289_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11291_gshared (List_1_t266 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m11291(__this, ___collection, method) (( void (*) (List_1_t266 *, Object_t*, MethodInfo*))List_1_AddRange_m11291_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2358 * List_1_AsReadOnly_m11293_gshared (List_1_t266 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m11293(__this, method) (( ReadOnlyCollection_1_t2358 * (*) (List_1_t266 *, MethodInfo*))List_1_AsReadOnly_m11293_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m3662_gshared (List_1_t266 * __this, MethodInfo* method);
#define List_1_Clear_m3662(__this, method) (( void (*) (List_1_t266 *, MethodInfo*))List_1_Clear_m3662_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m3669_gshared (List_1_t266 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Contains_m3669(__this, ___item, method) (( bool (*) (List_1_t266 *, Object_t *, MethodInfo*))List_1_Contains_m3669_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m3670_gshared (List_1_t266 * __this, ObjectU5BU5D_t269* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m3670(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t266 *, ObjectU5BU5D_t269*, int32_t, MethodInfo*))List_1_CopyTo_m3670_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m11298_gshared (List_1_t266 * __this, Predicate_1_t2368 * ___match, MethodInfo* method);
#define List_1_Find_m11298(__this, ___match, method) (( Object_t * (*) (List_1_t266 *, Predicate_1_t2368 *, MethodInfo*))List_1_Find_m11298_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11300_gshared (Object_t * __this /* static, unused */, Predicate_1_t2368 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m11300(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2368 *, MethodInfo*))List_1_CheckMatch_m11300_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11302_gshared (List_1_t266 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2368 * ___match, MethodInfo* method);
#define List_1_GetIndex_m11302(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t266 *, int32_t, int32_t, Predicate_1_t2368 *, MethodInfo*))List_1_GetIndex_m11302_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2357  List_1_GetEnumerator_m11304_gshared (List_1_t266 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m11304(__this, method) (( Enumerator_t2357  (*) (List_1_t266 *, MethodInfo*))List_1_GetEnumerator_m11304_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m3673_gshared (List_1_t266 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_IndexOf_m3673(__this, ___item, method) (( int32_t (*) (List_1_t266 *, Object_t *, MethodInfo*))List_1_IndexOf_m3673_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11307_gshared (List_1_t266 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m11307(__this, ___start, ___delta, method) (( void (*) (List_1_t266 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11307_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11309_gshared (List_1_t266 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m11309(__this, ___index, method) (( void (*) (List_1_t266 *, int32_t, MethodInfo*))List_1_CheckIndex_m11309_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m3674_gshared (List_1_t266 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_Insert_m3674(__this, ___index, ___item, method) (( void (*) (List_1_t266 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m3674_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11312_gshared (List_1_t266 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m11312(__this, ___collection, method) (( void (*) (List_1_t266 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11312_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m3671_gshared (List_1_t266 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Remove_m3671(__this, ___item, method) (( bool (*) (List_1_t266 *, Object_t *, MethodInfo*))List_1_Remove_m3671_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11315_gshared (List_1_t266 * __this, Predicate_1_t2368 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m11315(__this, ___match, method) (( int32_t (*) (List_1_t266 *, Predicate_1_t2368 *, MethodInfo*))List_1_RemoveAll_m11315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m3667_gshared (List_1_t266 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m3667(__this, ___index, method) (( void (*) (List_1_t266 *, int32_t, MethodInfo*))List_1_RemoveAt_m3667_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m11317_gshared (List_1_t266 * __this, MethodInfo* method);
#define List_1_Reverse_m11317(__this, method) (( void (*) (List_1_t266 *, MethodInfo*))List_1_Reverse_m11317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m11319_gshared (List_1_t266 * __this, MethodInfo* method);
#define List_1_Sort_m11319(__this, method) (( void (*) (List_1_t266 *, MethodInfo*))List_1_Sort_m11319_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11321_gshared (List_1_t266 * __this, Comparison_1_t2387 * ___comparison, MethodInfo* method);
#define List_1_Sort_m11321(__this, ___comparison, method) (( void (*) (List_1_t266 *, Comparison_1_t2387 *, MethodInfo*))List_1_Sort_m11321_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t269* List_1_ToArray_m11323_gshared (List_1_t266 * __this, MethodInfo* method);
#define List_1_ToArray_m11323(__this, method) (( ObjectU5BU5D_t269* (*) (List_1_t266 *, MethodInfo*))List_1_ToArray_m11323_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m11325_gshared (List_1_t266 * __this, MethodInfo* method);
#define List_1_TrimExcess_m11325(__this, method) (( void (*) (List_1_t266 *, MethodInfo*))List_1_TrimExcess_m11325_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11327_gshared (List_1_t266 * __this, MethodInfo* method);
#define List_1_get_Capacity_m11327(__this, method) (( int32_t (*) (List_1_t266 *, MethodInfo*))List_1_get_Capacity_m11327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11329_gshared (List_1_t266 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m11329(__this, ___value, method) (( void (*) (List_1_t266 *, int32_t, MethodInfo*))List_1_set_Capacity_m11329_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m3653_gshared (List_1_t266 * __this, MethodInfo* method);
#define List_1_get_Count_m3653(__this, method) (( int32_t (*) (List_1_t266 *, MethodInfo*))List_1_get_Count_m3653_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m3675_gshared (List_1_t266 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m3675(__this, ___index, method) (( Object_t * (*) (List_1_t266 *, int32_t, MethodInfo*))List_1_get_Item_m3675_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m3676_gshared (List_1_t266 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_set_Item_m3676(__this, ___index, ___value, method) (( void (*) (List_1_t266 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m3676_gshared)(__this, ___index, ___value, method)
