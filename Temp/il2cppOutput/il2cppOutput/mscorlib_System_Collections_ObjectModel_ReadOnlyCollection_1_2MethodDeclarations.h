#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>
struct ReadOnlyCollection_1_t2429;
// UnityEngine.Component
struct Component_t15;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<UnityEngine.Component>
struct IList_1_t2428;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// UnityEngine.Component[]
struct ComponentU5BU5D_t2426;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Component>
struct IEnumerator_1_t3424;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m11944(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t2429 *, Object_t*, MethodInfo*))ReadOnlyCollection_1__ctor_m11342_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11945(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t2429 *, Component_t15 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11343_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11946(__this, method) (( void (*) (ReadOnlyCollection_1_t2429 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11344_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11947(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t2429 *, int32_t, Component_t15 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11345_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11948(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t2429 *, Component_t15 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11346_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11949(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2429 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11347_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11950(__this, ___index, method) (( Component_t15 * (*) (ReadOnlyCollection_1_t2429 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11348_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11951(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2429 *, int32_t, Component_t15 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11349_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11952(__this, method) (( bool (*) (ReadOnlyCollection_1_t2429 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11350_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11953(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2429 *, Array_t *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11351_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11954(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2429 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11352_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m11955(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2429 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m11353_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m11956(__this, method) (( void (*) (ReadOnlyCollection_1_t2429 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m11354_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m11957(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2429 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m11355_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m11958(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2429 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m11356_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m11959(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2429 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m11357_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m11960(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t2429 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m11358_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m11961(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2429 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m11359_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m11962(__this, method) (( bool (*) (ReadOnlyCollection_1_t2429 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m11360_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m11963(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2429 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m11361_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m11964(__this, method) (( bool (*) (ReadOnlyCollection_1_t2429 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m11362_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m11965(__this, method) (( bool (*) (ReadOnlyCollection_1_t2429 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m11363_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m11966(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t2429 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m11364_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m11967(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2429 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m11365_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::Contains(T)
#define ReadOnlyCollection_1_Contains_m11968(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2429 *, Component_t15 *, MethodInfo*))ReadOnlyCollection_1_Contains_m11366_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m11969(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2429 *, ComponentU5BU5D_t2426*, int32_t, MethodInfo*))ReadOnlyCollection_1_CopyTo_m11367_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m11970(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t2429 *, MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m11368_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m11971(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2429 *, Component_t15 *, MethodInfo*))ReadOnlyCollection_1_IndexOf_m11369_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::get_Count()
#define ReadOnlyCollection_1_get_Count_m11972(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t2429 *, MethodInfo*))ReadOnlyCollection_1_get_Count_m11370_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m11973(__this, ___index, method) (( Component_t15 * (*) (ReadOnlyCollection_1_t2429 *, int32_t, MethodInfo*))ReadOnlyCollection_1_get_Item_m11371_gshared)(__this, ___index, method)
