#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t2966;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m17562_gshared (DefaultComparer_t2966 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m17562(__this, method) (( void (*) (DefaultComparer_t2966 *, MethodInfo*))DefaultComparer__ctor_m17562_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17563_gshared (DefaultComparer_t2966 * __this, UILineInfo_t305  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m17563(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2966 *, UILineInfo_t305 , MethodInfo*))DefaultComparer_GetHashCode_m17563_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17564_gshared (DefaultComparer_t2966 * __this, UILineInfo_t305  ___x, UILineInfo_t305  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m17564(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2966 *, UILineInfo_t305 , UILineInfo_t305 , MethodInfo*))DefaultComparer_Equals_m17564_gshared)(__this, ___x, ___y, method)
