#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t556;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t3539;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t308;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t3540;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2963;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t558;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2967;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2970;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m17437_gshared (List_1_t556 * __this, MethodInfo* method);
#define List_1__ctor_m17437(__this, method) (( void (*) (List_1_t556 *, MethodInfo*))List_1__ctor_m17437_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3417_gshared (List_1_t556 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m3417(__this, ___capacity, method) (( void (*) (List_1_t556 *, int32_t, MethodInfo*))List_1__ctor_m3417_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m17438_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m17438(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m17438_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17439_gshared (List_1_t556 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17439(__this, method) (( Object_t* (*) (List_1_t556 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17439_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17440_gshared (List_1_t556 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17440(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t556 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17440_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17441_gshared (List_1_t556 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17441(__this, method) (( Object_t * (*) (List_1_t556 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17441_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17442_gshared (List_1_t556 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17442(__this, ___item, method) (( int32_t (*) (List_1_t556 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m17442_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17443_gshared (List_1_t556 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17443(__this, ___item, method) (( bool (*) (List_1_t556 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m17443_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17444_gshared (List_1_t556 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17444(__this, ___item, method) (( int32_t (*) (List_1_t556 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m17444_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17445_gshared (List_1_t556 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17445(__this, ___index, ___item, method) (( void (*) (List_1_t556 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m17445_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17446_gshared (List_1_t556 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17446(__this, ___item, method) (( void (*) (List_1_t556 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m17446_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17447_gshared (List_1_t556 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17447(__this, method) (( bool (*) (List_1_t556 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17447_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17448_gshared (List_1_t556 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17448(__this, method) (( bool (*) (List_1_t556 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17448_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17449_gshared (List_1_t556 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17449(__this, method) (( Object_t * (*) (List_1_t556 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17449_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17450_gshared (List_1_t556 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17450(__this, method) (( bool (*) (List_1_t556 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17450_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17451_gshared (List_1_t556 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17451(__this, method) (( bool (*) (List_1_t556 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17451_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17452_gshared (List_1_t556 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17452(__this, ___index, method) (( Object_t * (*) (List_1_t556 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m17452_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17453_gshared (List_1_t556 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17453(__this, ___index, ___value, method) (( void (*) (List_1_t556 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m17453_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m17454_gshared (List_1_t556 * __this, UILineInfo_t305  ___item, MethodInfo* method);
#define List_1_Add_m17454(__this, ___item, method) (( void (*) (List_1_t556 *, UILineInfo_t305 , MethodInfo*))List_1_Add_m17454_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17455_gshared (List_1_t556 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m17455(__this, ___newCount, method) (( void (*) (List_1_t556 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m17455_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17456_gshared (List_1_t556 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m17456(__this, ___collection, method) (( void (*) (List_1_t556 *, Object_t*, MethodInfo*))List_1_AddCollection_m17456_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17457_gshared (List_1_t556 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m17457(__this, ___enumerable, method) (( void (*) (List_1_t556 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m17457_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m17458_gshared (List_1_t556 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m17458(__this, ___collection, method) (( void (*) (List_1_t556 *, Object_t*, MethodInfo*))List_1_AddRange_m17458_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2963 * List_1_AsReadOnly_m17459_gshared (List_1_t556 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m17459(__this, method) (( ReadOnlyCollection_1_t2963 * (*) (List_1_t556 *, MethodInfo*))List_1_AsReadOnly_m17459_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m17460_gshared (List_1_t556 * __this, MethodInfo* method);
#define List_1_Clear_m17460(__this, method) (( void (*) (List_1_t556 *, MethodInfo*))List_1_Clear_m17460_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m17461_gshared (List_1_t556 * __this, UILineInfo_t305  ___item, MethodInfo* method);
#define List_1_Contains_m17461(__this, ___item, method) (( bool (*) (List_1_t556 *, UILineInfo_t305 , MethodInfo*))List_1_Contains_m17461_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17462_gshared (List_1_t556 * __this, UILineInfoU5BU5D_t558* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m17462(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t556 *, UILineInfoU5BU5D_t558*, int32_t, MethodInfo*))List_1_CopyTo_m17462_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t305  List_1_Find_m17463_gshared (List_1_t556 * __this, Predicate_1_t2967 * ___match, MethodInfo* method);
#define List_1_Find_m17463(__this, ___match, method) (( UILineInfo_t305  (*) (List_1_t556 *, Predicate_1_t2967 *, MethodInfo*))List_1_Find_m17463_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17464_gshared (Object_t * __this /* static, unused */, Predicate_1_t2967 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m17464(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2967 *, MethodInfo*))List_1_CheckMatch_m17464_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17465_gshared (List_1_t556 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2967 * ___match, MethodInfo* method);
#define List_1_GetIndex_m17465(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t556 *, int32_t, int32_t, Predicate_1_t2967 *, MethodInfo*))List_1_GetIndex_m17465_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2962  List_1_GetEnumerator_m17466_gshared (List_1_t556 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m17466(__this, method) (( Enumerator_t2962  (*) (List_1_t556 *, MethodInfo*))List_1_GetEnumerator_m17466_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17467_gshared (List_1_t556 * __this, UILineInfo_t305  ___item, MethodInfo* method);
#define List_1_IndexOf_m17467(__this, ___item, method) (( int32_t (*) (List_1_t556 *, UILineInfo_t305 , MethodInfo*))List_1_IndexOf_m17467_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17468_gshared (List_1_t556 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m17468(__this, ___start, ___delta, method) (( void (*) (List_1_t556 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m17468_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17469_gshared (List_1_t556 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m17469(__this, ___index, method) (( void (*) (List_1_t556 *, int32_t, MethodInfo*))List_1_CheckIndex_m17469_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17470_gshared (List_1_t556 * __this, int32_t ___index, UILineInfo_t305  ___item, MethodInfo* method);
#define List_1_Insert_m17470(__this, ___index, ___item, method) (( void (*) (List_1_t556 *, int32_t, UILineInfo_t305 , MethodInfo*))List_1_Insert_m17470_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17471_gshared (List_1_t556 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m17471(__this, ___collection, method) (( void (*) (List_1_t556 *, Object_t*, MethodInfo*))List_1_CheckCollection_m17471_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m17472_gshared (List_1_t556 * __this, UILineInfo_t305  ___item, MethodInfo* method);
#define List_1_Remove_m17472(__this, ___item, method) (( bool (*) (List_1_t556 *, UILineInfo_t305 , MethodInfo*))List_1_Remove_m17472_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17473_gshared (List_1_t556 * __this, Predicate_1_t2967 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m17473(__this, ___match, method) (( int32_t (*) (List_1_t556 *, Predicate_1_t2967 *, MethodInfo*))List_1_RemoveAll_m17473_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17474_gshared (List_1_t556 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m17474(__this, ___index, method) (( void (*) (List_1_t556 *, int32_t, MethodInfo*))List_1_RemoveAt_m17474_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m17475_gshared (List_1_t556 * __this, MethodInfo* method);
#define List_1_Reverse_m17475(__this, method) (( void (*) (List_1_t556 *, MethodInfo*))List_1_Reverse_m17475_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m17476_gshared (List_1_t556 * __this, MethodInfo* method);
#define List_1_Sort_m17476(__this, method) (( void (*) (List_1_t556 *, MethodInfo*))List_1_Sort_m17476_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17477_gshared (List_1_t556 * __this, Comparison_1_t2970 * ___comparison, MethodInfo* method);
#define List_1_Sort_m17477(__this, ___comparison, method) (( void (*) (List_1_t556 *, Comparison_1_t2970 *, MethodInfo*))List_1_Sort_m17477_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t558* List_1_ToArray_m17478_gshared (List_1_t556 * __this, MethodInfo* method);
#define List_1_ToArray_m17478(__this, method) (( UILineInfoU5BU5D_t558* (*) (List_1_t556 *, MethodInfo*))List_1_ToArray_m17478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m17479_gshared (List_1_t556 * __this, MethodInfo* method);
#define List_1_TrimExcess_m17479(__this, method) (( void (*) (List_1_t556 *, MethodInfo*))List_1_TrimExcess_m17479_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17480_gshared (List_1_t556 * __this, MethodInfo* method);
#define List_1_get_Capacity_m17480(__this, method) (( int32_t (*) (List_1_t556 *, MethodInfo*))List_1_get_Capacity_m17480_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17481_gshared (List_1_t556 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m17481(__this, ___value, method) (( void (*) (List_1_t556 *, int32_t, MethodInfo*))List_1_set_Capacity_m17481_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m17482_gshared (List_1_t556 * __this, MethodInfo* method);
#define List_1_get_Count_m17482(__this, method) (( int32_t (*) (List_1_t556 *, MethodInfo*))List_1_get_Count_m17482_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t305  List_1_get_Item_m17483_gshared (List_1_t556 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m17483(__this, ___index, method) (( UILineInfo_t305  (*) (List_1_t556 *, int32_t, MethodInfo*))List_1_get_Item_m17483_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17484_gshared (List_1_t556 * __this, int32_t ___index, UILineInfo_t305  ___value, MethodInfo* method);
#define List_1_set_Item_m17484(__this, ___index, ___value, method) (( void (*) (List_1_t556 *, int32_t, UILineInfo_t305 , MethodInfo*))List_1_set_Item_m17484_gshared)(__this, ___index, ___value, method)
