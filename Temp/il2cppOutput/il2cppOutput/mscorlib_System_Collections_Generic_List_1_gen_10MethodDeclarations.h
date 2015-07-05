#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t140;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t3477;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t317;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t3478;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t2650;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t180;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2654;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2657;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_14.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m1646_gshared (List_1_t140 * __this, MethodInfo* method);
#define List_1__ctor_m1646(__this, method) (( void (*) (List_1_t140 *, MethodInfo*))List_1__ctor_m1646_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3415_gshared (List_1_t140 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m3415(__this, ___capacity, method) (( void (*) (List_1_t140 *, int32_t, MethodInfo*))List_1__ctor_m3415_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m14210_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m14210(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m14210_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14211_gshared (List_1_t140 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14211(__this, method) (( Object_t* (*) (List_1_t140 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14211_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14212_gshared (List_1_t140 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14212(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t140 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14212_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14213_gshared (List_1_t140 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14213(__this, method) (( Object_t * (*) (List_1_t140 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14213_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14214_gshared (List_1_t140 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14214(__this, ___item, method) (( int32_t (*) (List_1_t140 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m14214_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14215_gshared (List_1_t140 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14215(__this, ___item, method) (( bool (*) (List_1_t140 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m14215_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14216_gshared (List_1_t140 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14216(__this, ___item, method) (( int32_t (*) (List_1_t140 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m14216_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14217_gshared (List_1_t140 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14217(__this, ___index, ___item, method) (( void (*) (List_1_t140 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m14217_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14218_gshared (List_1_t140 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14218(__this, ___item, method) (( void (*) (List_1_t140 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m14218_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14219_gshared (List_1_t140 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14219(__this, method) (( bool (*) (List_1_t140 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14219_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14220_gshared (List_1_t140 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14220(__this, method) (( bool (*) (List_1_t140 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14220_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14221_gshared (List_1_t140 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14221(__this, method) (( Object_t * (*) (List_1_t140 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14222_gshared (List_1_t140 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14222(__this, method) (( bool (*) (List_1_t140 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14222_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14223_gshared (List_1_t140 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14223(__this, method) (( bool (*) (List_1_t140 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14223_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14224_gshared (List_1_t140 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14224(__this, ___index, method) (( Object_t * (*) (List_1_t140 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m14224_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14225_gshared (List_1_t140 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14225(__this, ___index, ___value, method) (( void (*) (List_1_t140 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m14225_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m1514_gshared (List_1_t140 * __this, UIVertex_t161  ___item, MethodInfo* method);
#define List_1_Add_m1514(__this, ___item, method) (( void (*) (List_1_t140 *, UIVertex_t161 , MethodInfo*))List_1_Add_m1514_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14226_gshared (List_1_t140 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m14226(__this, ___newCount, method) (( void (*) (List_1_t140 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m14226_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14227_gshared (List_1_t140 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m14227(__this, ___collection, method) (( void (*) (List_1_t140 *, Object_t*, MethodInfo*))List_1_AddCollection_m14227_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14228_gshared (List_1_t140 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m14228(__this, ___enumerable, method) (( void (*) (List_1_t140 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m14228_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14229_gshared (List_1_t140 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m14229(__this, ___collection, method) (( void (*) (List_1_t140 *, Object_t*, MethodInfo*))List_1_AddRange_m14229_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2650 * List_1_AsReadOnly_m14230_gshared (List_1_t140 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m14230(__this, method) (( ReadOnlyCollection_1_t2650 * (*) (List_1_t140 *, MethodInfo*))List_1_AsReadOnly_m14230_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m1527_gshared (List_1_t140 * __this, MethodInfo* method);
#define List_1_Clear_m1527(__this, method) (( void (*) (List_1_t140 *, MethodInfo*))List_1_Clear_m1527_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m14231_gshared (List_1_t140 * __this, UIVertex_t161  ___item, MethodInfo* method);
#define List_1_Contains_m14231(__this, ___item, method) (( bool (*) (List_1_t140 *, UIVertex_t161 , MethodInfo*))List_1_Contains_m14231_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14232_gshared (List_1_t140 * __this, UIVertexU5BU5D_t180* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m14232(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t140 *, UIVertexU5BU5D_t180*, int32_t, MethodInfo*))List_1_CopyTo_m14232_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t161  List_1_Find_m14233_gshared (List_1_t140 * __this, Predicate_1_t2654 * ___match, MethodInfo* method);
#define List_1_Find_m14233(__this, ___match, method) (( UIVertex_t161  (*) (List_1_t140 *, Predicate_1_t2654 *, MethodInfo*))List_1_Find_m14233_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14234_gshared (Object_t * __this /* static, unused */, Predicate_1_t2654 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m14234(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2654 *, MethodInfo*))List_1_CheckMatch_m14234_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14235_gshared (List_1_t140 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2654 * ___match, MethodInfo* method);
#define List_1_GetIndex_m14235(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t140 *, int32_t, int32_t, Predicate_1_t2654 *, MethodInfo*))List_1_GetIndex_m14235_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2649  List_1_GetEnumerator_m14236_gshared (List_1_t140 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m14236(__this, method) (( Enumerator_t2649  (*) (List_1_t140 *, MethodInfo*))List_1_GetEnumerator_m14236_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14237_gshared (List_1_t140 * __this, UIVertex_t161  ___item, MethodInfo* method);
#define List_1_IndexOf_m14237(__this, ___item, method) (( int32_t (*) (List_1_t140 *, UIVertex_t161 , MethodInfo*))List_1_IndexOf_m14237_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14238_gshared (List_1_t140 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m14238(__this, ___start, ___delta, method) (( void (*) (List_1_t140 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m14238_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14239_gshared (List_1_t140 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m14239(__this, ___index, method) (( void (*) (List_1_t140 *, int32_t, MethodInfo*))List_1_CheckIndex_m14239_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14240_gshared (List_1_t140 * __this, int32_t ___index, UIVertex_t161  ___item, MethodInfo* method);
#define List_1_Insert_m14240(__this, ___index, ___item, method) (( void (*) (List_1_t140 *, int32_t, UIVertex_t161 , MethodInfo*))List_1_Insert_m14240_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14241_gshared (List_1_t140 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m14241(__this, ___collection, method) (( void (*) (List_1_t140 *, Object_t*, MethodInfo*))List_1_CheckCollection_m14241_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m14242_gshared (List_1_t140 * __this, UIVertex_t161  ___item, MethodInfo* method);
#define List_1_Remove_m14242(__this, ___item, method) (( bool (*) (List_1_t140 *, UIVertex_t161 , MethodInfo*))List_1_Remove_m14242_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14243_gshared (List_1_t140 * __this, Predicate_1_t2654 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m14243(__this, ___match, method) (( int32_t (*) (List_1_t140 *, Predicate_1_t2654 *, MethodInfo*))List_1_RemoveAll_m14243_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14244_gshared (List_1_t140 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m14244(__this, ___index, method) (( void (*) (List_1_t140 *, int32_t, MethodInfo*))List_1_RemoveAt_m14244_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m14245_gshared (List_1_t140 * __this, MethodInfo* method);
#define List_1_Reverse_m14245(__this, method) (( void (*) (List_1_t140 *, MethodInfo*))List_1_Reverse_m14245_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m14246_gshared (List_1_t140 * __this, MethodInfo* method);
#define List_1_Sort_m14246(__this, method) (( void (*) (List_1_t140 *, MethodInfo*))List_1_Sort_m14246_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14247_gshared (List_1_t140 * __this, Comparison_1_t2657 * ___comparison, MethodInfo* method);
#define List_1_Sort_m14247(__this, ___comparison, method) (( void (*) (List_1_t140 *, Comparison_1_t2657 *, MethodInfo*))List_1_Sort_m14247_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t180* List_1_ToArray_m1740_gshared (List_1_t140 * __this, MethodInfo* method);
#define List_1_ToArray_m1740(__this, method) (( UIVertexU5BU5D_t180* (*) (List_1_t140 *, MethodInfo*))List_1_ToArray_m1740_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m14248_gshared (List_1_t140 * __this, MethodInfo* method);
#define List_1_TrimExcess_m14248(__this, method) (( void (*) (List_1_t140 *, MethodInfo*))List_1_TrimExcess_m14248_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m1537_gshared (List_1_t140 * __this, MethodInfo* method);
#define List_1_get_Capacity_m1537(__this, method) (( int32_t (*) (List_1_t140 *, MethodInfo*))List_1_get_Capacity_m1537_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m1538_gshared (List_1_t140 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m1538(__this, ___value, method) (( void (*) (List_1_t140 *, int32_t, MethodInfo*))List_1_set_Capacity_m1538_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m1695_gshared (List_1_t140 * __this, MethodInfo* method);
#define List_1_get_Count_m1695(__this, method) (( int32_t (*) (List_1_t140 *, MethodInfo*))List_1_get_Count_m1695_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t161  List_1_get_Item_m1929_gshared (List_1_t140 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m1929(__this, ___index, method) (( UIVertex_t161  (*) (List_1_t140 *, int32_t, MethodInfo*))List_1_get_Item_m1929_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1930_gshared (List_1_t140 * __this, int32_t ___index, UIVertex_t161  ___value, MethodInfo* method);
#define List_1_set_Item_m1930(__this, ___index, ___value, method) (( void (*) (List_1_t140 *, int32_t, UIVertex_t161 , MethodInfo*))List_1_set_Item_m1930_gshared)(__this, ___index, ___value, method)
