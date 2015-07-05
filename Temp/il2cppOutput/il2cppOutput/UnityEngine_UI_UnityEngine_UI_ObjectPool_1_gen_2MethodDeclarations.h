#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t257;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t258;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t247;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1925(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t257 *, UnityAction_1_t258 *, UnityAction_1_t258 *, MethodInfo*))ObjectPool_1__ctor_m11821_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m15858(__this, method) (( int32_t (*) (ObjectPool_1_t257 *, MethodInfo*))ObjectPool_1_get_countAll_m11823_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m15859(__this, ___value, method) (( void (*) (ObjectPool_1_t257 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m11825_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m15860(__this, method) (( int32_t (*) (ObjectPool_1_t257 *, MethodInfo*))ObjectPool_1_get_countActive_m11827_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m15861(__this, method) (( int32_t (*) (ObjectPool_1_t257 *, MethodInfo*))ObjectPool_1_get_countInactive_m11829_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m1927(__this, method) (( List_1_t247 * (*) (ObjectPool_1_t257 *, MethodInfo*))ObjectPool_1_Get_m11831_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m1928(__this, ___element, method) (( void (*) (ObjectPool_1_t257 *, List_1_t247 *, MethodInfo*))ObjectPool_1_Release_m11833_gshared)(__this, ___element, method)
