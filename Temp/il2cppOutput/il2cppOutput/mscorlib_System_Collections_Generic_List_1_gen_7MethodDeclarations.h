#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct List_1_t93;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t92;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct IEnumerator_1_t3451;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct ICollection_1_t3452;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct IEnumerable_1_t3453;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct ReadOnlyCollection_1_t2541;
// UnityEngine.EventSystems.PointerInputModule/ButtonState[]
struct ButtonStateU5BU5D_t2537;
// System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct Predicate_1_t2545;
// System.Comparison`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct Comparison_1_t2548;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
#define List_1__ctor_m1366(__this, method) (( void (*) (List_1_t93 *, MethodInfo*))List_1__ctor_m3445_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Int32)
#define List_1__ctor_m13129(__this, ___capacity, method) (( void (*) (List_1_t93 *, int32_t, MethodInfo*))List_1__ctor_m11265_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.cctor()
#define List_1__cctor_m13130(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m11267_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13131(__this, method) (( Object_t* (*) (List_1_t93 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3672_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13132(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t93 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3656_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13133(__this, method) (( Object_t * (*) (List_1_t93 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3652_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13134(__this, ___item, method) (( int32_t (*) (List_1_t93 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m3661_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13135(__this, ___item, method) (( bool (*) (List_1_t93 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m3663_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13136(__this, ___item, method) (( int32_t (*) (List_1_t93 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m3664_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13137(__this, ___index, ___item, method) (( void (*) (List_1_t93 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m3665_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13138(__this, ___item, method) (( void (*) (List_1_t93 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m3666_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13139(__this, method) (( bool (*) (List_1_t93 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13140(__this, method) (( bool (*) (List_1_t93 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3654_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13141(__this, method) (( Object_t * (*) (List_1_t93 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13142(__this, method) (( bool (*) (List_1_t93 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13143(__this, method) (( bool (*) (List_1_t93 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3658_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13144(__this, ___index, method) (( Object_t * (*) (List_1_t93 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m3659_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13145(__this, ___index, ___value, method) (( void (*) (List_1_t93 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m3660_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Add(T)
#define List_1_Add_m1369(__this, ___item, method) (( void (*) (List_1_t93 *, ButtonState_t92 *, MethodInfo*))List_1_Add_m3466_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13146(__this, ___newCount, method) (( void (*) (List_1_t93 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m11285_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13147(__this, ___collection, method) (( void (*) (List_1_t93 *, Object_t*, MethodInfo*))List_1_AddCollection_m11287_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13148(__this, ___enumerable, method) (( void (*) (List_1_t93 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m11289_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13149(__this, ___collection, method) (( void (*) (List_1_t93 *, Object_t*, MethodInfo*))List_1_AddRange_m11291_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AsReadOnly()
#define List_1_AsReadOnly_m13150(__this, method) (( ReadOnlyCollection_1_t2541 * (*) (List_1_t93 *, MethodInfo*))List_1_AsReadOnly_m11293_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Clear()
#define List_1_Clear_m13151(__this, method) (( void (*) (List_1_t93 *, MethodInfo*))List_1_Clear_m3662_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Contains(T)
#define List_1_Contains_m13152(__this, ___item, method) (( bool (*) (List_1_t93 *, ButtonState_t92 *, MethodInfo*))List_1_Contains_m3669_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13153(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t93 *, ButtonStateU5BU5D_t2537*, int32_t, MethodInfo*))List_1_CopyTo_m3670_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Find(System.Predicate`1<T>)
#define List_1_Find_m13154(__this, ___match, method) (( ButtonState_t92 * (*) (List_1_t93 *, Predicate_1_t2545 *, MethodInfo*))List_1_Find_m11298_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13155(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2545 *, MethodInfo*))List_1_CheckMatch_m11300_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13156(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t93 *, int32_t, int32_t, Predicate_1_t2545 *, MethodInfo*))List_1_GetIndex_m11302_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetEnumerator()
#define List_1_GetEnumerator_m13157(__this, method) (( Enumerator_t2539  (*) (List_1_t93 *, MethodInfo*))List_1_GetEnumerator_m11304_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IndexOf(T)
#define List_1_IndexOf_m13158(__this, ___item, method) (( int32_t (*) (List_1_t93 *, ButtonState_t92 *, MethodInfo*))List_1_IndexOf_m3673_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13159(__this, ___start, ___delta, method) (( void (*) (List_1_t93 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m11307_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13160(__this, ___index, method) (( void (*) (List_1_t93 *, int32_t, MethodInfo*))List_1_CheckIndex_m11309_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Insert(System.Int32,T)
#define List_1_Insert_m13161(__this, ___index, ___item, method) (( void (*) (List_1_t93 *, int32_t, ButtonState_t92 *, MethodInfo*))List_1_Insert_m3674_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13162(__this, ___collection, method) (( void (*) (List_1_t93 *, Object_t*, MethodInfo*))List_1_CheckCollection_m11312_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Remove(T)
#define List_1_Remove_m13163(__this, ___item, method) (( bool (*) (List_1_t93 *, ButtonState_t92 *, MethodInfo*))List_1_Remove_m3671_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13164(__this, ___match, method) (( int32_t (*) (List_1_t93 *, Predicate_1_t2545 *, MethodInfo*))List_1_RemoveAll_m11315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13165(__this, ___index, method) (( void (*) (List_1_t93 *, int32_t, MethodInfo*))List_1_RemoveAt_m3667_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Reverse()
#define List_1_Reverse_m13166(__this, method) (( void (*) (List_1_t93 *, MethodInfo*))List_1_Reverse_m11317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Sort()
#define List_1_Sort_m13167(__this, method) (( void (*) (List_1_t93 *, MethodInfo*))List_1_Sort_m11319_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13168(__this, ___comparison, method) (( void (*) (List_1_t93 *, Comparison_1_t2548 *, MethodInfo*))List_1_Sort_m11321_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::ToArray()
#define List_1_ToArray_m13169(__this, method) (( ButtonStateU5BU5D_t2537* (*) (List_1_t93 *, MethodInfo*))List_1_ToArray_m11323_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::TrimExcess()
#define List_1_TrimExcess_m13170(__this, method) (( void (*) (List_1_t93 *, MethodInfo*))List_1_TrimExcess_m11325_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Capacity()
#define List_1_get_Capacity_m13171(__this, method) (( int32_t (*) (List_1_t93 *, MethodInfo*))List_1_get_Capacity_m11327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13172(__this, ___value, method) (( void (*) (List_1_t93 *, int32_t, MethodInfo*))List_1_set_Capacity_m11329_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Count()
#define List_1_get_Count_m1368(__this, method) (( int32_t (*) (List_1_t93 *, MethodInfo*))List_1_get_Count_m3653_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Item(System.Int32)
#define List_1_get_Item_m1367(__this, ___index, method) (( ButtonState_t92 * (*) (List_1_t93 *, int32_t, MethodInfo*))List_1_get_Item_m3675_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::set_Item(System.Int32,T)
#define List_1_set_Item_m13173(__this, ___index, ___value, method) (( void (*) (List_1_t93 *, int32_t, ButtonState_t92 *, MethodInfo*))List_1_set_Item_m3676_gshared)(__this, ___index, ___value, method)
