#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2358;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t798;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Object[]
struct ObjectU5BU5D_t269;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t364;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m11342_gshared (ReadOnlyCollection_1_t2358 * __this, Object_t* ___list, MethodInfo* method);
#define ReadOnlyCollection_1__ctor_m11342(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t2358 *, Object_t*, MethodInfo*))ReadOnlyCollection_1__ctor_m11342_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11343_gshared (ReadOnlyCollection_1_t2358 * __this, Object_t * ___item, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11343(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t2358 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11343_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Clear()
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11344_gshared (ReadOnlyCollection_1_t2358 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11344(__this, method) (( void (*) (ReadOnlyCollection_1_t2358 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11344_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11345_gshared (ReadOnlyCollection_1_t2358 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11345(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t2358 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11345_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11346_gshared (ReadOnlyCollection_1_t2358 * __this, Object_t * ___item, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11346(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t2358 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11346_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11347_gshared (ReadOnlyCollection_1_t2358 * __this, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11347(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2358 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11347_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11348_gshared (ReadOnlyCollection_1_t2358 * __this, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11348(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t2358 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11348_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11349_gshared (ReadOnlyCollection_1_t2358 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11349(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2358 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11349_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11350_gshared (ReadOnlyCollection_1_t2358 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11350(__this, method) (( bool (*) (ReadOnlyCollection_1_t2358 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11350_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11351_gshared (ReadOnlyCollection_1_t2358 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11351(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2358 *, Array_t *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11351_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11352_gshared (ReadOnlyCollection_1_t2358 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11352(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2358 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11352_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m11353_gshared (ReadOnlyCollection_1_t2358 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Add_m11353(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2358 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m11353_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Clear()
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m11354_gshared (ReadOnlyCollection_1_t2358 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m11354(__this, method) (( void (*) (ReadOnlyCollection_1_t2358 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m11354_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m11355_gshared (ReadOnlyCollection_1_t2358 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m11355(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2358 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m11355_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m11356_gshared (ReadOnlyCollection_1_t2358 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m11356(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2358 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m11356_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m11357_gshared (ReadOnlyCollection_1_t2358 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m11357(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2358 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m11357_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m11358_gshared (ReadOnlyCollection_1_t2358 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m11358(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t2358 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m11358_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m11359_gshared (ReadOnlyCollection_1_t2358 * __this, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m11359(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2358 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m11359_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m11360_gshared (ReadOnlyCollection_1_t2358 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m11360(__this, method) (( bool (*) (ReadOnlyCollection_1_t2358 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m11360_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m11361_gshared (ReadOnlyCollection_1_t2358 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m11361(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2358 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m11361_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m11362_gshared (ReadOnlyCollection_1_t2358 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m11362(__this, method) (( bool (*) (ReadOnlyCollection_1_t2358 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m11362_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m11363_gshared (ReadOnlyCollection_1_t2358 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m11363(__this, method) (( bool (*) (ReadOnlyCollection_1_t2358 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m11363_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m11364_gshared (ReadOnlyCollection_1_t2358 * __this, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m11364(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t2358 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m11364_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m11365_gshared (ReadOnlyCollection_1_t2358 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m11365(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2358 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m11365_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m11366_gshared (ReadOnlyCollection_1_t2358 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_Contains_m11366(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2358 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_Contains_m11366_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m11367_gshared (ReadOnlyCollection_1_t2358 * __this, ObjectU5BU5D_t269* ___array, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_CopyTo_m11367(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2358 *, ObjectU5BU5D_t269*, int32_t, MethodInfo*))ReadOnlyCollection_1_CopyTo_m11367_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m11368_gshared (ReadOnlyCollection_1_t2358 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_GetEnumerator_m11368(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t2358 *, MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m11368_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m11369_gshared (ReadOnlyCollection_1_t2358 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_IndexOf_m11369(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2358 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_IndexOf_m11369_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m11370_gshared (ReadOnlyCollection_1_t2358 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_get_Count_m11370(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t2358 *, MethodInfo*))ReadOnlyCollection_1_get_Count_m11370_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_get_Item_m11371_gshared (ReadOnlyCollection_1_t2358 * __this, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_get_Item_m11371(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t2358 *, int32_t, MethodInfo*))ReadOnlyCollection_1_get_Item_m11371_gshared)(__this, ___index, method)
