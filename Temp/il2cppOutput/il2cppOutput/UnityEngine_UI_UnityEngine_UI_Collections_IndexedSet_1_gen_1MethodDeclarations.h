#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2555;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t364;
// System.Object[]
struct ObjectU5BU5D_t269;
// System.Predicate`1<System.Object>
struct Predicate_1_t2368;
// System.Comparison`1<System.Object>
struct Comparison_1_t2387;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m13295_gshared (IndexedSet_1_t2555 * __this, MethodInfo* method);
#define IndexedSet_1__ctor_m13295(__this, method) (( void (*) (IndexedSet_1_t2555 *, MethodInfo*))IndexedSet_1__ctor_m13295_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13297_gshared (IndexedSet_1_t2555 * __this, MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13297(__this, method) (( Object_t * (*) (IndexedSet_1_t2555 *, MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13297_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m13298_gshared (IndexedSet_1_t2555 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Add_m13298(__this, ___item, method) (( void (*) (IndexedSet_1_t2555 *, Object_t *, MethodInfo*))IndexedSet_1_Add_m13298_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m13299_gshared (IndexedSet_1_t2555 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Remove_m13299(__this, ___item, method) (( bool (*) (IndexedSet_1_t2555 *, Object_t *, MethodInfo*))IndexedSet_1_Remove_m13299_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m13301_gshared (IndexedSet_1_t2555 * __this, MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m13301(__this, method) (( Object_t* (*) (IndexedSet_1_t2555 *, MethodInfo*))IndexedSet_1_GetEnumerator_m13301_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m13302_gshared (IndexedSet_1_t2555 * __this, MethodInfo* method);
#define IndexedSet_1_Clear_m13302(__this, method) (( void (*) (IndexedSet_1_t2555 *, MethodInfo*))IndexedSet_1_Clear_m13302_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m13304_gshared (IndexedSet_1_t2555 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Contains_m13304(__this, ___item, method) (( bool (*) (IndexedSet_1_t2555 *, Object_t *, MethodInfo*))IndexedSet_1_Contains_m13304_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m13306_gshared (IndexedSet_1_t2555 * __this, ObjectU5BU5D_t269* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define IndexedSet_1_CopyTo_m13306(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2555 *, ObjectU5BU5D_t269*, int32_t, MethodInfo*))IndexedSet_1_CopyTo_m13306_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m13307_gshared (IndexedSet_1_t2555 * __this, MethodInfo* method);
#define IndexedSet_1_get_Count_m13307(__this, method) (( int32_t (*) (IndexedSet_1_t2555 *, MethodInfo*))IndexedSet_1_get_Count_m13307_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m13309_gshared (IndexedSet_1_t2555 * __this, MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m13309(__this, method) (( bool (*) (IndexedSet_1_t2555 *, MethodInfo*))IndexedSet_1_get_IsReadOnly_m13309_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m13311_gshared (IndexedSet_1_t2555 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_IndexOf_m13311(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2555 *, Object_t *, MethodInfo*))IndexedSet_1_IndexOf_m13311_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m13313_gshared (IndexedSet_1_t2555 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Insert_m13313(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2555 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_Insert_m13313_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m13315_gshared (IndexedSet_1_t2555 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_RemoveAt_m13315(__this, ___index, method) (( void (*) (IndexedSet_1_t2555 *, int32_t, MethodInfo*))IndexedSet_1_RemoveAt_m13315_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m13316_gshared (IndexedSet_1_t2555 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_get_Item_m13316(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2555 *, int32_t, MethodInfo*))IndexedSet_1_get_Item_m13316_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m13318_gshared (IndexedSet_1_t2555 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define IndexedSet_1_set_Item_m13318(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2555 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_set_Item_m13318_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m13319_gshared (IndexedSet_1_t2555 * __this, Predicate_1_t2368 * ___match, MethodInfo* method);
#define IndexedSet_1_RemoveAll_m13319(__this, ___match, method) (( void (*) (IndexedSet_1_t2555 *, Predicate_1_t2368 *, MethodInfo*))IndexedSet_1_RemoveAll_m13319_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m13320_gshared (IndexedSet_1_t2555 * __this, Comparison_1_t2387 * ___sortLayoutFunction, MethodInfo* method);
#define IndexedSet_1_Sort_m13320(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2555 *, Comparison_1_t2387 *, MethodInfo*))IndexedSet_1_Sort_m13320_gshared)(__this, ___sortLayoutFunction, method)
