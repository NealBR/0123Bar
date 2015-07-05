#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.TlsException
struct TlsException_t1243;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t1199;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// Mono.Security.Protocol.Tls.AlertLevel
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLevel.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"

// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.String)
extern "C" void TlsException__ctor_m5754 (TlsException_t1243 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TlsException__ctor_m5755 (TlsException_t1243 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void TlsException__ctor_m5756 (TlsException_t1243 * __this, uint8_t ___level, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription,System.String)
extern "C" void TlsException__ctor_m5757 (TlsException_t1243 * __this, uint8_t ___level, uint8_t ___description, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void TlsException__ctor_m5758 (TlsException_t1243 * __this, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription,System.String)
extern "C" void TlsException__ctor_m5759 (TlsException_t1243 * __this, uint8_t ___description, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::get_Alert()
extern "C" Alert_t1199 * TlsException_get_Alert_m5760 (TlsException_t1243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
