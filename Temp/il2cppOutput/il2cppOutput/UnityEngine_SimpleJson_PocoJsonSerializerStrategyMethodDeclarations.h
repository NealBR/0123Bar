#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t601;
// System.String
struct String_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t607;
// System.Type
struct Type_t;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct IDictionary_2_t608;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct IDictionary_2_t609;
// System.Object
struct Object_t;
// System.Enum
struct Enum_t334;

// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern "C" void PocoJsonSerializerStrategy__ctor_m3086 (PocoJsonSerializerStrategy_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern "C" void PocoJsonSerializerStrategy__cctor_m3087 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern "C" String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m3088 (PocoJsonSerializerStrategy_t601 * __this, String_t* ___clrPropertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern "C" ConstructorDelegate_t607 * PocoJsonSerializerStrategy_ContructorDelegateFactory_m3089 (PocoJsonSerializerStrategy_t601 * __this, Type_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern "C" Object_t* PocoJsonSerializerStrategy_GetterValueFactory_m3090 (PocoJsonSerializerStrategy_t601 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern "C" Object_t* PocoJsonSerializerStrategy_SetterValueFactory_m3091 (PocoJsonSerializerStrategy_t601 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern "C" bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3092 (PocoJsonSerializerStrategy_t601 * __this, Object_t * ___input, Object_t ** ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern "C" Object_t * PocoJsonSerializerStrategy_SerializeEnum_m3093 (PocoJsonSerializerStrategy_t601 * __this, Enum_t334 * ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern "C" bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3094 (PocoJsonSerializerStrategy_t601 * __this, Object_t * ___input, Object_t ** ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern "C" bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m3095 (PocoJsonSerializerStrategy_t601 * __this, Object_t * ___input, Object_t ** ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
