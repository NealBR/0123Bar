﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CipherSuiteFactory
struct CipherSuiteFactory_t1206;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t1203;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.CipherSuiteFactory::GetSupportedCiphers(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" CipherSuiteCollection_t1203 * CipherSuiteFactory_GetSupportedCiphers_m5462 (Object_t * __this /* static, unused */, int32_t ___protocol, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.CipherSuiteFactory::GetTls1SupportedCiphers()
extern "C" CipherSuiteCollection_t1203 * CipherSuiteFactory_GetTls1SupportedCiphers_m5463 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.CipherSuiteFactory::GetSsl3SupportedCiphers()
extern "C" CipherSuiteCollection_t1203 * CipherSuiteFactory_GetSsl3SupportedCiphers_m5464 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
