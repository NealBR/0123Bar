﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.JoinMatchRequest
struct JoinMatchRequest_t568;
// System.String
struct String_t;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
extern "C" void JoinMatchRequest__ctor_m2951 (JoinMatchRequest_t568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern "C" uint64_t JoinMatchRequest_get_networkId_m2952 (JoinMatchRequest_t568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchRequest_set_networkId_m2953 (JoinMatchRequest_t568 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern "C" String_t* JoinMatchRequest_get_password_m2954 (JoinMatchRequest_t568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
extern "C" void JoinMatchRequest_set_password_m2955 (JoinMatchRequest_t568 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.JoinMatchRequest::ToString()
extern "C" String_t* JoinMatchRequest_ToString_m2956 (JoinMatchRequest_t568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
