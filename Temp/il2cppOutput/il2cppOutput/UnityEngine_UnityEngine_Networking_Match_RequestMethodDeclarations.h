#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.Request
struct Request_t560;
// System.String
struct String_t;
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"

// System.Void UnityEngine.Networking.Match.Request::.ctor()
extern "C" void Request__ctor_m2906 (Request_t560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern "C" uint64_t Request_get_sourceId_m2907 (Request_t560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Match.Request::get_appId()
extern "C" uint64_t Request_get_appId_m2908 (Request_t560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern "C" int32_t Request_get_domain_m2909 (Request_t560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.Request::ToString()
extern "C" String_t* Request_ToString_m2910 (Request_t560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
