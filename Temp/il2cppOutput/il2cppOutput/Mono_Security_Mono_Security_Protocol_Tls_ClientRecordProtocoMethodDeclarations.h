#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t1209;
// System.IO.Stream
struct Stream_t1211;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t1208;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1212;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t1213;
// System.Byte[]
struct ByteU5BU5D_t504;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
extern "C" void ClientRecordProtocol__ctor_m5470 (ClientRecordProtocol_t1209 * __this, Stream_t1211 * ___innerStream, ClientContext_t1208 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t1212 * ClientRecordProtocol_GetMessage_m5471 (ClientRecordProtocol_t1209 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C" void ClientRecordProtocol_ProcessHandshakeMessage_m5472 (ClientRecordProtocol_t1209 * __this, TlsStream_t1213 * ___handMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t1212 * ClientRecordProtocol_createClientHandshakeMessage_m5473 (ClientRecordProtocol_t1209 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C" HandshakeMessage_t1212 * ClientRecordProtocol_createServerHandshakeMessage_m5474 (ClientRecordProtocol_t1209 * __this, uint8_t ___type, ByteU5BU5D_t504* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
