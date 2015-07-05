﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t61;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t63;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t83;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1312(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t61 *, UnityAction_1_t63 *, UnityAction_1_t63 *, MethodInfo*))ObjectPool_1__ctor_m11821_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m11822(__this, method) (( int32_t (*) (ObjectPool_1_t61 *, MethodInfo*))ObjectPool_1_get_countAll_m11823_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m11824(__this, ___value, method) (( void (*) (ObjectPool_1_t61 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m11825_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m11826(__this, method) (( int32_t (*) (ObjectPool_1_t61 *, MethodInfo*))ObjectPool_1_get_countActive_m11827_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m11828(__this, method) (( int32_t (*) (ObjectPool_1_t61 *, MethodInfo*))ObjectPool_1_get_countInactive_m11829_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m11830(__this, method) (( List_1_t83 * (*) (ObjectPool_1_t61 *, MethodInfo*))ObjectPool_1_Get_m11831_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m11832(__this, ___element, method) (( void (*) (ObjectPool_1_t61 *, List_1_t83 *, MethodInfo*))ObjectPool_1_Release_m11833_gshared)(__this, ___element, method)
