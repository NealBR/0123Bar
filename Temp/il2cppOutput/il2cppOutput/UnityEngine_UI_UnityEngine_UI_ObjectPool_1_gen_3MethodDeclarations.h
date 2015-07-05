#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2418;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2417;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m11821_gshared (ObjectPool_1_t2418 * __this, UnityAction_1_t2417 * ___actionOnGet, UnityAction_1_t2417 * ___actionOnRelease, MethodInfo* method);
#define ObjectPool_1__ctor_m11821(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2418 *, UnityAction_1_t2417 *, UnityAction_1_t2417 *, MethodInfo*))ObjectPool_1__ctor_m11821_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m11823_gshared (ObjectPool_1_t2418 * __this, MethodInfo* method);
#define ObjectPool_1_get_countAll_m11823(__this, method) (( int32_t (*) (ObjectPool_1_t2418 *, MethodInfo*))ObjectPool_1_get_countAll_m11823_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m11825_gshared (ObjectPool_1_t2418 * __this, int32_t ___value, MethodInfo* method);
#define ObjectPool_1_set_countAll_m11825(__this, ___value, method) (( void (*) (ObjectPool_1_t2418 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m11825_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m11827_gshared (ObjectPool_1_t2418 * __this, MethodInfo* method);
#define ObjectPool_1_get_countActive_m11827(__this, method) (( int32_t (*) (ObjectPool_1_t2418 *, MethodInfo*))ObjectPool_1_get_countActive_m11827_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m11829_gshared (ObjectPool_1_t2418 * __this, MethodInfo* method);
#define ObjectPool_1_get_countInactive_m11829(__this, method) (( int32_t (*) (ObjectPool_1_t2418 *, MethodInfo*))ObjectPool_1_get_countInactive_m11829_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m11831_gshared (ObjectPool_1_t2418 * __this, MethodInfo* method);
#define ObjectPool_1_Get_m11831(__this, method) (( Object_t * (*) (ObjectPool_1_t2418 *, MethodInfo*))ObjectPool_1_Get_m11831_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m11833_gshared (ObjectPool_1_t2418 * __this, Object_t * ___element, MethodInfo* method);
#define ObjectPool_1_Release_m11833(__this, ___element, method) (( void (*) (ObjectPool_1_t2418 *, Object_t *, MethodInfo*))ObjectPool_1_Release_m11833_gshared)(__this, ___element, method)
