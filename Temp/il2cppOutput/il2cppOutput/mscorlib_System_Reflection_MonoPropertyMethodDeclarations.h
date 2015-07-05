#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty
struct MonoProperty_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1307;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t729;
// System.Object[]
struct ObjectU5BU5D_t269;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t1520;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t736;
// System.Globalization.CultureInfo
struct CultureInfo_t702;
// System.Type[]
struct TypeU5BU5D_t606;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoProperty::.ctor()
extern "C" void MonoProperty__ctor_m8456 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::CachePropertyInfo(System.Reflection.PInfo)
extern "C" void MonoProperty_CachePropertyInfo_m8457 (MonoProperty_t * __this, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyAttributes System.Reflection.MonoProperty::get_Attributes()
extern "C" int32_t MonoProperty_get_Attributes_m8458 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanRead()
extern "C" bool MonoProperty_get_CanRead_m8459 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanWrite()
extern "C" bool MonoProperty_get_CanWrite_m8460 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_PropertyType()
extern "C" Type_t * MonoProperty_get_PropertyType_m8461 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_ReflectedType()
extern "C" Type_t * MonoProperty_get_ReflectedType_m8462 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_DeclaringType()
extern "C" Type_t * MonoProperty_get_DeclaringType_m8463 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::get_Name()
extern "C" String_t* MonoProperty_get_Name_m8464 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.MonoProperty::GetAccessors(System.Boolean)
extern "C" MethodInfoU5BU5D_t1307* MonoProperty_GetAccessors_m8465 (MonoProperty_t * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean)
extern "C" MethodInfo_t * MonoProperty_GetGetMethod_m8466 (MonoProperty_t * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoProperty::GetIndexParameters()
extern "C" ParameterInfoU5BU5D_t729* MonoProperty_GetIndexParameters_m8467 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean)
extern "C" MethodInfo_t * MonoProperty_GetSetMethod_m8468 (MonoProperty_t * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::IsDefined(System.Type,System.Boolean)
extern "C" bool MonoProperty_IsDefined_m8469 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t269* MonoProperty_GetCustomAttributes_m8470 (MonoProperty_t * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t269* MonoProperty_GetCustomAttributes_m8471 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::CreateGetterDelegate(System.Reflection.MethodInfo)
extern "C" GetterAdapter_t1520 * MonoProperty_CreateGetterDelegate_m8472 (Object_t * __this /* static, unused */, MethodInfo_t * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Object[])
extern "C" Object_t * MonoProperty_GetValue_m8473 (MonoProperty_t * __this, Object_t * ___obj, ObjectU5BU5D_t269* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoProperty_GetValue_m8474 (MonoProperty_t * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t736 * ___binder, ObjectU5BU5D_t269* ___index, CultureInfo_t702 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" void MonoProperty_SetValue_m8475 (MonoProperty_t * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t736 * ___binder, ObjectU5BU5D_t269* ___index, CultureInfo_t702 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::ToString()
extern "C" String_t* MonoProperty_ToString_m8476 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetOptionalCustomModifiers()
extern "C" TypeU5BU5D_t606* MonoProperty_GetOptionalCustomModifiers_m8477 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetRequiredCustomModifiers()
extern "C" TypeU5BU5D_t606* MonoProperty_GetRequiredCustomModifiers_m8478 (MonoProperty_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoProperty_GetObjectData_m8479 (MonoProperty_t * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
