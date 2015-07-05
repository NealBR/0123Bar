#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t1214;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t504;
// Mono.Security.Protocol.Tls.Context
struct Context_t1201;

// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.ctor(System.String,System.Byte[])
extern "C" void ClientSessionInfo__ctor_m5475 (ClientSessionInfo_t1214 * __this, String_t* ___hostname, ByteU5BU5D_t504* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.cctor()
extern "C" void ClientSessionInfo__cctor_m5476 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Finalize()
extern "C" void ClientSessionInfo_Finalize_m5477 (ClientSessionInfo_t1214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.ClientSessionInfo::get_HostName()
extern "C" String_t* ClientSessionInfo_get_HostName_m5478 (ClientSessionInfo_t1214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::get_Id()
extern "C" ByteU5BU5D_t504* ClientSessionInfo_get_Id_m5479 (ClientSessionInfo_t1214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionInfo::get_Valid()
extern "C" bool ClientSessionInfo_get_Valid_m5480 (ClientSessionInfo_t1214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::GetContext(Mono.Security.Protocol.Tls.Context)
extern "C" void ClientSessionInfo_GetContext_m5481 (ClientSessionInfo_t1214 * __this, Context_t1201 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::SetContext(Mono.Security.Protocol.Tls.Context)
extern "C" void ClientSessionInfo_SetContext_m5482 (ClientSessionInfo_t1214 * __this, Context_t1201 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::KeepAlive()
extern "C" void ClientSessionInfo_KeepAlive_m5483 (ClientSessionInfo_t1214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose()
extern "C" void ClientSessionInfo_Dispose_m5484 (ClientSessionInfo_t1214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose(System.Boolean)
extern "C" void ClientSessionInfo_Dispose_m5485 (ClientSessionInfo_t1214 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::CheckDisposed()
extern "C" void ClientSessionInfo_CheckDisposed_m5486 (ClientSessionInfo_t1214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
