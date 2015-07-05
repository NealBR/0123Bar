#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished
struct TlsClientFinished_t1249;
// Mono.Security.Protocol.Tls.Context
struct Context_t1201;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientFinished__ctor_m5825 (TlsClientFinished_t1249 * __this, Context_t1201 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::.cctor()
extern "C" void TlsClientFinished__cctor_m5826 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::Update()
extern "C" void TlsClientFinished_Update_m5827 (TlsClientFinished_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::ProcessAsSsl3()
extern "C" void TlsClientFinished_ProcessAsSsl3_m5828 (TlsClientFinished_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::ProcessAsTls1()
extern "C" void TlsClientFinished_ProcessAsTls1_m5829 (TlsClientFinished_t1249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
