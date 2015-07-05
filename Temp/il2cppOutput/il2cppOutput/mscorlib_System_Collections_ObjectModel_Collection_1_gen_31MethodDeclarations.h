#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>
struct Collection_1_t3394;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t1708;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t3391;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t3618;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t1704;

// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m21227(__this, method) (( void (*) (Collection_1_t3394 *, MethodInfo*))Collection_1__ctor_m11372_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21228(__this, method) (( bool (*) (Collection_1_t3394 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11373_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m21229(__this, ___array, ___index, method) (( void (*) (Collection_1_t3394 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m11374_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m21230(__this, method) (( Object_t * (*) (Collection_1_t3394 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m11375_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m21231(__this, ___value, method) (( int32_t (*) (Collection_1_t3394 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m11376_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m21232(__this, ___value, method) (( bool (*) (Collection_1_t3394 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m11377_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m21233(__this, ___value, method) (( int32_t (*) (Collection_1_t3394 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m11378_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m21234(__this, ___index, ___value, method) (( void (*) (Collection_1_t3394 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m11379_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m21235(__this, ___value, method) (( void (*) (Collection_1_t3394 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m11380_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m21236(__this, method) (( bool (*) (Collection_1_t3394 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m11381_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m21237(__this, method) (( Object_t * (*) (Collection_1_t3394 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m11382_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m21238(__this, method) (( bool (*) (Collection_1_t3394 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m11383_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m21239(__this, method) (( bool (*) (Collection_1_t3394 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m11384_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m21240(__this, ___index, method) (( Object_t * (*) (Collection_1_t3394 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m11385_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m21241(__this, ___index, ___value, method) (( void (*) (Collection_1_t3394 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m11386_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Add(T)
#define Collection_1_Add_m21242(__this, ___item, method) (( void (*) (Collection_1_t3394 *, StrongName_t1708 *, MethodInfo*))Collection_1_Add_m11387_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Clear()
#define Collection_1_Clear_m21243(__this, method) (( void (*) (Collection_1_t3394 *, MethodInfo*))Collection_1_Clear_m11388_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ClearItems()
#define Collection_1_ClearItems_m21244(__this, method) (( void (*) (Collection_1_t3394 *, MethodInfo*))Collection_1_ClearItems_m11389_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Contains(T)
#define Collection_1_Contains_m21245(__this, ___item, method) (( bool (*) (Collection_1_t3394 *, StrongName_t1708 *, MethodInfo*))Collection_1_Contains_m11390_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m21246(__this, ___array, ___index, method) (( void (*) (Collection_1_t3394 *, StrongNameU5BU5D_t3391*, int32_t, MethodInfo*))Collection_1_CopyTo_m11391_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::GetEnumerator()
#define Collection_1_GetEnumerator_m21247(__this, method) (( Object_t* (*) (Collection_1_t3394 *, MethodInfo*))Collection_1_GetEnumerator_m11392_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IndexOf(T)
#define Collection_1_IndexOf_m21248(__this, ___item, method) (( int32_t (*) (Collection_1_t3394 *, StrongName_t1708 *, MethodInfo*))Collection_1_IndexOf_m11393_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define Collection_1_Insert_m21249(__this, ___index, ___item, method) (( void (*) (Collection_1_t3394 *, int32_t, StrongName_t1708 *, MethodInfo*))Collection_1_Insert_m11394_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m21250(__this, ___index, ___item, method) (( void (*) (Collection_1_t3394 *, int32_t, StrongName_t1708 *, MethodInfo*))Collection_1_InsertItem_m11395_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Remove(T)
#define Collection_1_Remove_m21251(__this, ___item, method) (( bool (*) (Collection_1_t3394 *, StrongName_t1708 *, MethodInfo*))Collection_1_Remove_m11396_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m21252(__this, ___index, method) (( void (*) (Collection_1_t3394 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m11397_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m21253(__this, ___index, method) (( void (*) (Collection_1_t3394 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m11398_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Count()
#define Collection_1_get_Count_m21254(__this, method) (( int32_t (*) (Collection_1_t3394 *, MethodInfo*))Collection_1_get_Count_m11399_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define Collection_1_get_Item_m21255(__this, ___index, method) (( StrongName_t1708 * (*) (Collection_1_t3394 *, int32_t, MethodInfo*))Collection_1_get_Item_m11400_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m21256(__this, ___index, ___value, method) (( void (*) (Collection_1_t3394 *, int32_t, StrongName_t1708 *, MethodInfo*))Collection_1_set_Item_m11401_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m21257(__this, ___index, ___item, method) (( void (*) (Collection_1_t3394 *, int32_t, StrongName_t1708 *, MethodInfo*))Collection_1_SetItem_m11402_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m21258(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m11403_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m21259(__this /* static, unused */, ___item, method) (( StrongName_t1708 * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m11404_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m21260(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m11405_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m21261(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m11406_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m21262(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m11407_gshared)(__this /* static, unused */, ___list, method)
