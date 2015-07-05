#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t253;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t254;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t256;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1920(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t253 *, UnityAction_1_t254 *, UnityAction_1_t254 *, MethodInfo*))ObjectPool_1__ctor_m11821_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m15830(__this, method) (( int32_t (*) (ObjectPool_1_t253 *, MethodInfo*))ObjectPool_1_get_countAll_m11823_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m15831(__this, ___value, method) (( void (*) (ObjectPool_1_t253 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m11825_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m15832(__this, method) (( int32_t (*) (ObjectPool_1_t253 *, MethodInfo*))ObjectPool_1_get_countActive_m11827_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m15833(__this, method) (( int32_t (*) (ObjectPool_1_t253 *, MethodInfo*))ObjectPool_1_get_countInactive_m11829_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m1922(__this, method) (( List_1_t256 * (*) (ObjectPool_1_t253 *, MethodInfo*))ObjectPool_1_Get_m11831_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m1923(__this, ___element, method) (( void (*) (ObjectPool_1_t253 *, List_1_t256 *, MethodInfo*))ObjectPool_1_Release_m11833_gshared)(__this, ___element, method)
