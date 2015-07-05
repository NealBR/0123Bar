#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils
struct ReflectionUtils_t618;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
struct IEnumerable_1_t619;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t612;
// System.Type[]
struct TypeU5BU5D_t606;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t620;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t621;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t607;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t610;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
struct SetDelegate_t611;

// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern "C" void ReflectionUtils__cctor_m3118 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C" Object_t* ReflectionUtils_GetConstructors_m3119 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern "C" ConstructorInfo_t612 * ReflectionUtils_GetConstructorInfo_m3120 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t606* ___argsType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C" Object_t* ReflectionUtils_GetProperties_m3121 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C" Object_t* ReflectionUtils_GetFields_m3122 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m3123 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m3124 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern "C" ConstructorDelegate_t607 * ReflectionUtils_GetContructor_m3125 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t606* ___argsType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern "C" ConstructorDelegate_t607 * ReflectionUtils_GetConstructorByReflection_m3126 (Object_t * __this /* static, unused */, ConstructorInfo_t612 * ___constructorInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern "C" ConstructorDelegate_t607 * ReflectionUtils_GetConstructorByReflection_m3127 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t606* ___argsType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern "C" GetDelegate_t610 * ReflectionUtils_GetGetMethod_m3128 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern "C" GetDelegate_t610 * ReflectionUtils_GetGetMethod_m3129 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" GetDelegate_t610 * ReflectionUtils_GetGetMethodByReflection_m3130 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern "C" GetDelegate_t610 * ReflectionUtils_GetGetMethodByReflection_m3131 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern "C" SetDelegate_t611 * ReflectionUtils_GetSetMethod_m3132 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern "C" SetDelegate_t611 * ReflectionUtils_GetSetMethod_m3133 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" SetDelegate_t611 * ReflectionUtils_GetSetMethodByReflection_m3134 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern "C" SetDelegate_t611 * ReflectionUtils_GetSetMethodByReflection_m3135 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
