#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>
struct IndexedSet_1_t120;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t123;
// System.Collections.IEnumerator
struct IEnumerator_t117;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ICanvasElement>
struct IEnumerator_1_t3454;
// UnityEngine.UI.ICanvasElement[]
struct ICanvasElementU5BU5D_t2570;
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
struct Predicate_1_t122;
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
struct Comparison_1_t121;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m1456(__this, method) (( void (*) (IndexedSet_1_t120 *, MethodInfo*))IndexedSet_1__ctor_m13295_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13296(__this, method) (( Object_t * (*) (IndexedSet_1_t120 *, MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13297_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Add(T)
#define IndexedSet_1_Add_m1467(__this, ___item, method) (( void (*) (IndexedSet_1_t120 *, Object_t *, MethodInfo*))IndexedSet_1_Add_m13298_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Remove(T)
#define IndexedSet_1_Remove_m1469(__this, ___item, method) (( bool (*) (IndexedSet_1_t120 *, Object_t *, MethodInfo*))IndexedSet_1_Remove_m13299_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m13300(__this, method) (( Object_t* (*) (IndexedSet_1_t120 *, MethodInfo*))IndexedSet_1_GetEnumerator_m13301_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Clear()
#define IndexedSet_1_Clear_m1466(__this, method) (( void (*) (IndexedSet_1_t120 *, MethodInfo*))IndexedSet_1_Clear_m13302_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Contains(T)
#define IndexedSet_1_Contains_m13303(__this, ___item, method) (( bool (*) (IndexedSet_1_t120 *, Object_t *, MethodInfo*))IndexedSet_1_Contains_m13304_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m13305(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t120 *, ICanvasElementU5BU5D_t2570*, int32_t, MethodInfo*))IndexedSet_1_CopyTo_m13306_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_Count()
#define IndexedSet_1_get_Count_m1465(__this, method) (( int32_t (*) (IndexedSet_1_t120 *, MethodInfo*))IndexedSet_1_get_Count_m13307_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m13308(__this, method) (( bool (*) (IndexedSet_1_t120 *, MethodInfo*))IndexedSet_1_get_IsReadOnly_m13309_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
#define IndexedSet_1_IndexOf_m13310(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t120 *, Object_t *, MethodInfo*))IndexedSet_1_IndexOf_m13311_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m13312(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t120 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_Insert_m13313_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m13314(__this, ___index, method) (( void (*) (IndexedSet_1_t120 *, int32_t, MethodInfo*))IndexedSet_1_RemoveAt_m13315_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m1461(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t120 *, int32_t, MethodInfo*))IndexedSet_1_get_Item_m13316_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m13317(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t120 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_set_Item_m13318_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m1471(__this, ___match, method) (( void (*) (IndexedSet_1_t120 *, Predicate_1_t122 *, MethodInfo*))IndexedSet_1_RemoveAll_m13319_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m1472(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t120 *, Comparison_1_t121 *, MethodInfo*))IndexedSet_1_Sort_m13320_gshared)(__this, ___sortLayoutFunction, method)
