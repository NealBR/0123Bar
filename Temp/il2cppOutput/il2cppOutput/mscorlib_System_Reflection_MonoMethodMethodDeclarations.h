#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodBase
struct MethodBase_t718;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t729;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t269;
// System.Exception
struct Exception_t275;
// System.Reflection.Binder
struct Binder_t736;
// System.Globalization.CultureInfo
struct CultureInfo_t702;
// System.Runtime.InteropServices.DllImportAttribute
struct DllImportAttribute_t1310;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Type[]
struct TypeU5BU5D_t606;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoMethod::.ctor()
extern "C" void MonoMethod__ctor_m8406 (MonoMethod_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)
extern "C" String_t* MonoMethod_get_name_m8407 (Object_t * __this /* static, unused */, MethodBase_t718 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethod System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)
extern "C" MonoMethod_t * MonoMethod_get_base_definition_m8408 (Object_t * __this /* static, unused */, MonoMethod_t * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetBaseDefinition()
extern "C" MethodInfo_t * MonoMethod_GetBaseDefinition_m8409 (MonoMethod_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReturnType()
extern "C" Type_t * MonoMethod_get_ReturnType_m8410 (MonoMethod_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters()
extern "C" ParameterInfoU5BU5D_t729* MonoMethod_GetParameters_m8411 (MonoMethod_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoMethod_InternalInvoke_m8412 (MonoMethod_t * __this, Object_t * ___obj, ObjectU5BU5D_t269* ___parameters, Exception_t275 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoMethod_Invoke_m8413 (MonoMethod_t * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t736 * ___binder, ObjectU5BU5D_t269* ___parameters, CultureInfo_t702 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1482  MonoMethod_get_MethodHandle_m8414 (MonoMethod_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethod::get_Attributes()
extern "C" int32_t MonoMethod_get_Attributes_m8415 (MonoMethod_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention()
extern "C" int32_t MonoMethod_get_CallingConvention_m8416 (MonoMethod_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReflectedType()
extern "C" Type_t * MonoMethod_get_ReflectedType_m8417 (MonoMethod_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_DeclaringType()
extern "C" Type_t * MonoMethod_get_DeclaringType_m8418 (MonoMethod_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_Name()
extern "C" String_t* MonoMethod_get_Name_m8419 (MonoMethod_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::IsDefined(System.Type,System.Boolean)
extern "C" bool MonoMethod_IsDefined_m8420 (MonoMethod_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t269* MonoMethod_GetCustomAttributes_m8421 (MonoMethod_t * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t269* MonoMethod_GetCustomAttributes_m8422 (MonoMethod_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.DllImportAttribute System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)
extern "C" DllImportAttribute_t1310 * MonoMethod_GetDllImportAttribute_m8423 (Object_t * __this /* static, unused */, IntPtr_t ___mhandle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetPseudoCustomAttributes()
extern "C" ObjectU5BU5D_t269* MonoMethod_GetPseudoCustomAttributes_m8424 (MonoMethod_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::ShouldPrintFullName(System.Type)
extern "C" bool MonoMethod_ShouldPrintFullName_m8425 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::ToString()
extern "C" String_t* MonoMethod_ToString_m8426 (MonoMethod_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoMethod_GetObjectData_m8427 (MonoMethod_t * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod(System.Type[])
extern "C" MethodInfo_t * MonoMethod_MakeGenericMethod_m8428 (MonoMethod_t * __this, TypeU5BU5D_t606* ___methodInstantiation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])
extern "C" MethodInfo_t * MonoMethod_MakeGenericMethod_impl_m8429 (MonoMethod_t * __this, TypeU5BU5D_t606* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoMethod::GetGenericArguments()
extern "C" TypeU5BU5D_t606* MonoMethod_GetGenericArguments_m8430 (MonoMethod_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition()
extern "C" bool MonoMethod_get_IsGenericMethodDefinition_m8431 (MonoMethod_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod()
extern "C" bool MonoMethod_get_IsGenericMethod_m8432 (MonoMethod_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters()
extern "C" bool MonoMethod_get_ContainsGenericParameters_m8433 (MonoMethod_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
