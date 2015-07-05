#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Utility
struct Utility_t585;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t582;
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void UnityEngine.Networking.Utility::.cctor()
extern "C" void Utility__cctor_m3026 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern "C" uint64_t Utility_GetSourceID_m3027 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Utility::SetAppID(UnityEngine.Networking.Types.AppID)
extern "C" void Utility_SetAppID_m3028 (Object_t * __this /* static, unused */, uint64_t ___newAppID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::GetAppID()
extern "C" uint64_t Utility_GetAppID_m3029 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern "C" NetworkAccessToken_t582 * Utility_GetAccessTokenForNetwork_m3030 (Object_t * __this /* static, unused */, uint64_t ___netId, MethodInfo* method) IL2CPP_METHOD_ATTR;
