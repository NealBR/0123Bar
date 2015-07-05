#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Binder/Default
struct Default_t1502;
// System.Reflection.MethodBase
struct MethodBase_t718;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1503;
// System.Object[]
struct ObjectU5BU5D_t269;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t737;
// System.Globalization.CultureInfo
struct CultureInfo_t702;
// System.String[]
struct StringU5BU5D_t423;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t606;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t729;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t731;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.Binder/Default::.ctor()
extern "C" void Default__ctor_m8283 (Default_t1502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
extern "C" MethodBase_t718 * Default_BindToMethod_m8284 (Default_t1502 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1503* ___match, ObjectU5BU5D_t269** ___args, ParameterModifierU5BU5D_t737* ___modifiers, CultureInfo_t702 * ___culture, StringU5BU5D_t423* ___names, Object_t ** ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder/Default::ReorderParameters(System.String[],System.Object[]&,System.Reflection.MethodBase)
extern "C" void Default_ReorderParameters_m8285 (Default_t1502 * __this, StringU5BU5D_t423* ___names, ObjectU5BU5D_t269** ___args, MethodBase_t718 * ___selected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::IsArrayAssignable(System.Type,System.Type)
extern "C" bool Default_IsArrayAssignable_m8286 (Object_t * __this /* static, unused */, Type_t * ___object_type, Type_t * ___target_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Binder/Default::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
extern "C" Object_t * Default_ChangeType_m8287 (Default_t1502 * __this, Object_t * ___value, Type_t * ___type, CultureInfo_t702 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder/Default::ReorderArgumentArray(System.Object[]&,System.Object)
extern "C" void Default_ReorderArgumentArray_m8288 (Default_t1502 * __this, ObjectU5BU5D_t269** ___args, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::check_type(System.Type,System.Type)
extern "C" bool Default_check_type_m8289 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::check_arguments(System.Type[],System.Reflection.ParameterInfo[],System.Boolean)
extern "C" bool Default_check_arguments_m8290 (Object_t * __this /* static, unused */, TypeU5BU5D_t606* ___types, ParameterInfoU5BU5D_t729* ___args, bool ___allowByRefMatch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodBase_t718 * Default_SelectMethod_m8291 (Default_t1502 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1503* ___match, TypeU5BU5D_t606* ___types, ParameterModifierU5BU5D_t737* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[],System.Boolean)
extern "C" MethodBase_t718 * Default_SelectMethod_m8292 (Default_t1502 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1503* ___match, TypeU5BU5D_t606* ___types, ParameterModifierU5BU5D_t737* ___modifiers, bool ___allowByRefMatch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::GetBetterMethod(System.Reflection.MethodBase,System.Reflection.MethodBase,System.Type[])
extern "C" MethodBase_t718 * Default_GetBetterMethod_m8293 (Default_t1502 * __this, MethodBase_t718 * ___m1, MethodBase_t718 * ___m2, TypeU5BU5D_t606* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::CompareCloserType(System.Type,System.Type)
extern "C" int32_t Default_CompareCloserType_m8294 (Default_t1502 * __this, Type_t * ___t1, Type_t * ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Binder/Default::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * Default_SelectProperty_m8295 (Default_t1502 * __this, int32_t ___bindingAttr, PropertyInfoU5BU5D_t731* ___match, Type_t * ___returnType, TypeU5BU5D_t606* ___indexes, ParameterModifierU5BU5D_t737* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::check_arguments_with_score(System.Type[],System.Reflection.ParameterInfo[])
extern "C" int32_t Default_check_arguments_with_score_m8296 (Object_t * __this /* static, unused */, TypeU5BU5D_t606* ___types, ParameterInfoU5BU5D_t729* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::check_type_with_score(System.Type,System.Type)
extern "C" int32_t Default_check_type_with_score_m8297 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
