#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Delegate
struct Delegate_t295;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Delegate[]
struct DelegateU5BU5D_t1298;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Reflection.MethodInfo System.Delegate::get_Method()
extern "C" MethodInfo_t * Delegate_get_Method_m3580 (Delegate_t295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::get_Target()
extern "C" Object_t * Delegate_get_Target_m3581 (Delegate_t295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate_internal(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
extern "C" Delegate_t295 * Delegate_CreateDelegate_internal_m6611 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, MethodInfo_t * ___info, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::SetMulticastInvoke()
extern "C" void Delegate_SetMulticastInvoke_m6612 (Delegate_t295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::arg_type_match(System.Type,System.Type)
extern "C" bool Delegate_arg_type_match_m6613 (Object_t * __this /* static, unused */, Type_t * ___delArgType, Type_t * ___argType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::return_type_match(System.Type,System.Type)
extern "C" bool Delegate_return_type_match_m6614 (Object_t * __this /* static, unused */, Type_t * ___delReturnType, Type_t * ___returnType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
extern "C" Delegate_t295 * Delegate_CreateDelegate_m6615 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t * ___method, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
extern "C" Delegate_t295 * Delegate_CreateDelegate_m3582 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo,System.Boolean)
extern "C" Delegate_t295 * Delegate_CreateDelegate_m6616 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo_t * ___method, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String)
extern "C" Delegate_t295 * Delegate_CreateDelegate_m6617 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Delegate::GetCandidateMethod(System.Type,System.Type,System.String,System.Reflection.BindingFlags,System.Boolean,System.Boolean)
extern "C" MethodInfo_t * Delegate_GetCandidateMethod_m6618 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, int32_t ___bflags, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String,System.Boolean,System.Boolean)
extern "C" Delegate_t295 * Delegate_CreateDelegate_m6619 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String)
extern "C" Delegate_t295 * Delegate_CreateDelegate_m6620 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean,System.Boolean)
extern "C" Delegate_t295 * Delegate_CreateDelegate_m6621 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean)
extern "C" Delegate_t295 * Delegate_CreateDelegate_m6622 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::Clone()
extern "C" Object_t * Delegate_Clone_m1976 (Delegate_t295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::Equals(System.Object)
extern "C" bool Delegate_Equals_m6623 (Delegate_t295 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Delegate::GetHashCode()
extern "C" int32_t Delegate_GetHashCode_m6624 (Delegate_t295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Delegate_GetObjectData_m6625 (Delegate_t295 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.Delegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1298* Delegate_GetInvocationList_m6626 (Delegate_t295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" Delegate_t295 * Delegate_Combine_m1525 (Object_t * __this /* static, unused */, Delegate_t295 * ___a, Delegate_t295 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate[])
extern "C" Delegate_t295 * Delegate_Combine_m6627 (Object_t * __this /* static, unused */, DelegateU5BU5D_t1298* ___delegates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CombineImpl(System.Delegate)
extern "C" Delegate_t295 * Delegate_CombineImpl_m6628 (Delegate_t295 * __this, Delegate_t295 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" Delegate_t295 * Delegate_Remove_m1526 (Object_t * __this /* static, unused */, Delegate_t295 * ___source, Delegate_t295 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t295 * Delegate_RemoveImpl_m6629 (Delegate_t295 * __this, Delegate_t295 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
