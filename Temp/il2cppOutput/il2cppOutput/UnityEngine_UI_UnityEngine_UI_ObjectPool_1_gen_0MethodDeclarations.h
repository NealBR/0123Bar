#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t131;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t137;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t140;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1496(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t131 *, UnityAction_1_t137 *, UnityAction_1_t137 *, MethodInfo*))ObjectPool_1__ctor_m11821_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m14195(__this, method) (( int32_t (*) (ObjectPool_1_t131 *, MethodInfo*))ObjectPool_1_get_countAll_m11823_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m14196(__this, ___value, method) (( void (*) (ObjectPool_1_t131 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m11825_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m14197(__this, method) (( int32_t (*) (ObjectPool_1_t131 *, MethodInfo*))ObjectPool_1_get_countActive_m11827_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m14198(__this, method) (( int32_t (*) (ObjectPool_1_t131 *, MethodInfo*))ObjectPool_1_get_countInactive_m11829_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m1534(__this, method) (( List_1_t140 * (*) (ObjectPool_1_t131 *, MethodInfo*))ObjectPool_1_Get_m11831_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m1535(__this, ___element, method) (( void (*) (ObjectPool_1_t131 *, List_1_t140 *, MethodInfo*))ObjectPool_1_Release_m11833_gshared)(__this, ___element, method)
