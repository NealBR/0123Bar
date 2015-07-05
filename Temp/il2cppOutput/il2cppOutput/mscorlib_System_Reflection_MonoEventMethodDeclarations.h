#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoEvent
struct MonoEvent_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t269;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Reflection.EventAttributes
#include "mscorlib_System_Reflection_EventAttributes.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoEvent::.ctor()
extern "C" void MonoEvent__ctor_m8364 (MonoEvent_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventAttributes System.Reflection.MonoEvent::get_Attributes()
extern "C" int32_t MonoEvent_get_Attributes_m8365 (MonoEvent_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoEvent::GetAddMethod(System.Boolean)
extern "C" MethodInfo_t * MonoEvent_GetAddMethod_m8366 (MonoEvent_t * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoEvent::get_DeclaringType()
extern "C" Type_t * MonoEvent_get_DeclaringType_m8367 (MonoEvent_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoEvent::get_ReflectedType()
extern "C" Type_t * MonoEvent_get_ReflectedType_m8368 (MonoEvent_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoEvent::get_Name()
extern "C" String_t* MonoEvent_get_Name_m8369 (MonoEvent_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoEvent::ToString()
extern "C" String_t* MonoEvent_ToString_m8370 (MonoEvent_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoEvent::IsDefined(System.Type,System.Boolean)
extern "C" bool MonoEvent_IsDefined_m8371 (MonoEvent_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t269* MonoEvent_GetCustomAttributes_m8372 (MonoEvent_t * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t269* MonoEvent_GetCustomAttributes_m8373 (MonoEvent_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoEvent::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoEvent_GetObjectData_m8374 (MonoEvent_t * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
