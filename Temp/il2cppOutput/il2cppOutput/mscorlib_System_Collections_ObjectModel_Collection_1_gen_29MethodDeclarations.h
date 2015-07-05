#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>
struct Collection_1_t3254;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t665;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t3250;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t3599;
// System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>
struct IList_1_t3252;

// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m20159(__this, method) (( void (*) (Collection_1_t3254 *, MethodInfo*))Collection_1__ctor_m11372_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20160(__this, method) (( bool (*) (Collection_1_t3254 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11373_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m20161(__this, ___array, ___index, method) (( void (*) (Collection_1_t3254 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m11374_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m20162(__this, method) (( Object_t * (*) (Collection_1_t3254 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m11375_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m20163(__this, ___value, method) (( int32_t (*) (Collection_1_t3254 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m11376_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m20164(__this, ___value, method) (( bool (*) (Collection_1_t3254 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m11377_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m20165(__this, ___value, method) (( int32_t (*) (Collection_1_t3254 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m11378_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m20166(__this, ___index, ___value, method) (( void (*) (Collection_1_t3254 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m11379_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m20167(__this, ___value, method) (( void (*) (Collection_1_t3254 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m11380_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m20168(__this, method) (( bool (*) (Collection_1_t3254 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m11381_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m20169(__this, method) (( Object_t * (*) (Collection_1_t3254 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m11382_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m20170(__this, method) (( bool (*) (Collection_1_t3254 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m11383_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m20171(__this, method) (( bool (*) (Collection_1_t3254 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m11384_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m20172(__this, ___index, method) (( Object_t * (*) (Collection_1_t3254 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m11385_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m20173(__this, ___index, ___value, method) (( void (*) (Collection_1_t3254 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m11386_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Add(T)
#define Collection_1_Add_m20174(__this, ___item, method) (( void (*) (Collection_1_t3254 *, PersistentCall_t665 *, MethodInfo*))Collection_1_Add_m11387_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Clear()
#define Collection_1_Clear_m20175(__this, method) (( void (*) (Collection_1_t3254 *, MethodInfo*))Collection_1_Clear_m11388_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ClearItems()
#define Collection_1_ClearItems_m20176(__this, method) (( void (*) (Collection_1_t3254 *, MethodInfo*))Collection_1_ClearItems_m11389_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define Collection_1_Contains_m20177(__this, ___item, method) (( bool (*) (Collection_1_t3254 *, PersistentCall_t665 *, MethodInfo*))Collection_1_Contains_m11390_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m20178(__this, ___array, ___index, method) (( void (*) (Collection_1_t3254 *, PersistentCallU5BU5D_t3250*, int32_t, MethodInfo*))Collection_1_CopyTo_m11391_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define Collection_1_GetEnumerator_m20179(__this, method) (( Object_t* (*) (Collection_1_t3254 *, MethodInfo*))Collection_1_GetEnumerator_m11392_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define Collection_1_IndexOf_m20180(__this, ___item, method) (( int32_t (*) (Collection_1_t3254 *, PersistentCall_t665 *, MethodInfo*))Collection_1_IndexOf_m11393_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define Collection_1_Insert_m20181(__this, ___index, ___item, method) (( void (*) (Collection_1_t3254 *, int32_t, PersistentCall_t665 *, MethodInfo*))Collection_1_Insert_m11394_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m20182(__this, ___index, ___item, method) (( void (*) (Collection_1_t3254 *, int32_t, PersistentCall_t665 *, MethodInfo*))Collection_1_InsertItem_m11395_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define Collection_1_Remove_m20183(__this, ___item, method) (( bool (*) (Collection_1_t3254 *, PersistentCall_t665 *, MethodInfo*))Collection_1_Remove_m11396_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m20184(__this, ___index, method) (( void (*) (Collection_1_t3254 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m11397_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m20185(__this, ___index, method) (( void (*) (Collection_1_t3254 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m11398_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Count()
#define Collection_1_get_Count_m20186(__this, method) (( int32_t (*) (Collection_1_t3254 *, MethodInfo*))Collection_1_get_Count_m11399_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define Collection_1_get_Item_m20187(__this, ___index, method) (( PersistentCall_t665 * (*) (Collection_1_t3254 *, int32_t, MethodInfo*))Collection_1_get_Item_m11400_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m20188(__this, ___index, ___value, method) (( void (*) (Collection_1_t3254 *, int32_t, PersistentCall_t665 *, MethodInfo*))Collection_1_set_Item_m11401_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m20189(__this, ___index, ___item, method) (( void (*) (Collection_1_t3254 *, int32_t, PersistentCall_t665 *, MethodInfo*))Collection_1_SetItem_m11402_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m20190(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m11403_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m20191(__this /* static, unused */, ___item, method) (( PersistentCall_t665 * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m11404_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m20192(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m11405_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m20193(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m11406_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m20194(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m11407_gshared)(__this /* static, unused */, ___list, method)
