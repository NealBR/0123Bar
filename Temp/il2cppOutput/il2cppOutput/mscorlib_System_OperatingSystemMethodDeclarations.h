#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.OperatingSystem
struct OperatingSystem_t1789;
// System.Version
struct Version_t948;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.String
struct String_t;
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.OperatingSystem::.ctor(System.PlatformID,System.Version)
extern "C" void OperatingSystem__ctor_m10264 (OperatingSystem_t1789 * __this, int32_t ___platform, Version_t948 * ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.OperatingSystem::get_Platform()
extern "C" int32_t OperatingSystem_get_Platform_m10265 (OperatingSystem_t1789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OperatingSystem::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OperatingSystem_GetObjectData_m10266 (OperatingSystem_t1789 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.OperatingSystem::ToString()
extern "C" String_t* OperatingSystem_ToString_m10267 (OperatingSystem_t1789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
