#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t2443;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m12159_gshared (DefaultComparer_t2443 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m12159(__this, method) (( void (*) (DefaultComparer_t2443 *, MethodInfo*))DefaultComparer__ctor_m12159_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12160_gshared (DefaultComparer_t2443 * __this, RaycastResult_t36  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m12160(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2443 *, RaycastResult_t36 , MethodInfo*))DefaultComparer_GetHashCode_m12160_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12161_gshared (DefaultComparer_t2443 * __this, RaycastResult_t36  ___x, RaycastResult_t36  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m12161(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2443 *, RaycastResult_t36 , RaycastResult_t36 , MethodInfo*))DefaultComparer_Equals_m12161_gshared)(__this, ___x, ___y, method)
