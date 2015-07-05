#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t174;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1298;
// System.Delegate
struct Delegate_t295;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m1975 (MulticastDelegate_t174 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m1973 (MulticastDelegate_t174 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m1974 (MulticastDelegate_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1298* MulticastDelegate_GetInvocationList_m1977 (MulticastDelegate_t174 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t295 * MulticastDelegate_CombineImpl_m1978 (MulticastDelegate_t174 * __this, Delegate_t295 * ___follow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m6609 (MulticastDelegate_t174 * __this, MulticastDelegate_t174 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t174 * MulticastDelegate_KPM_m6610 (Object_t * __this /* static, unused */, MulticastDelegate_t174 * ___needle, MulticastDelegate_t174 * ___haystack, MulticastDelegate_t174 ** ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t295 * MulticastDelegate_RemoveImpl_m1979 (MulticastDelegate_t174 * __this, Delegate_t295 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
