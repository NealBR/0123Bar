#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t1240;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t936;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1112;
// System.IO.Stream
struct Stream_t1211;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t950;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1029;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1237;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t965;
// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t1242;
// System.Byte[]
struct ByteU5BU5D_t504;
// Mono.Security.Protocol.Tls.CipherAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
// Mono.Security.Protocol.Tls.HashAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.ctor(System.IO.Stream,System.Boolean)
extern "C" void SslStreamBase__ctor_m5693 (SslStreamBase_t1240 * __this, Stream_t1211 * ___stream, bool ___ownsStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.cctor()
extern "C" void SslStreamBase__cctor_m5694 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::AsyncHandshakeCallback(System.IAsyncResult)
extern "C" void SslStreamBase_AsyncHandshakeCallback_m5695 (SslStreamBase_t1240 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_MightNeedHandshake()
extern "C" bool SslStreamBase_get_MightNeedHandshake_m5696 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::NegotiateHandshake()
extern "C" void SslStreamBase_NegotiateHandshake_m5697 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::OnNegotiateHandshakeCallback(System.IAsyncResult)
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslStreamBase::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_HaveRemoteValidation2Callback()
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslStreamBase::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t936 * SslStreamBase_RaiseLocalCertificateSelection_m5698 (SslStreamBase_t1240 * __this, X509CertificateCollection_t950 * ___certificates, X509Certificate_t936 * ___remoteCertificate, String_t* ___targetHost, X509CertificateCollection_t950 * ___requestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslStreamBase_RaiseRemoteCertificateValidation_m5699 (SslStreamBase_t1240 * __this, X509Certificate_t936 * ___certificate, Int32U5BU5D_t1029* ___errors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t1237 * SslStreamBase_RaiseRemoteCertificateValidation2_m5700 (SslStreamBase_t1240 * __this, X509CertificateCollection_t1112 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t965 * SslStreamBase_RaiseLocalPrivateKeySelection_m5701 (SslStreamBase_t1240 * __this, X509Certificate_t936 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CheckCertRevocationStatus()
extern "C" bool SslStreamBase_get_CheckCertRevocationStatus_m5702 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_CheckCertRevocationStatus(System.Boolean)
extern "C" void SslStreamBase_set_CheckCertRevocationStatus_m5703 (SslStreamBase_t1240 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_CipherAlgorithm()
extern "C" int32_t SslStreamBase_get_CipherAlgorithm_m5704 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_CipherStrength()
extern "C" int32_t SslStreamBase_get_CipherStrength_m5705 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_HashAlgorithm()
extern "C" int32_t SslStreamBase_get_HashAlgorithm_m5706 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_HashStrength()
extern "C" int32_t SslStreamBase_get_HashStrength_m5707 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeStrength()
extern "C" int32_t SslStreamBase_get_KeyExchangeStrength_m5708 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeAlgorithm()
extern "C" int32_t SslStreamBase_get_KeyExchangeAlgorithm_m5709 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.SslStreamBase::get_SecurityProtocol()
extern "C" int32_t SslStreamBase_get_SecurityProtocol_m5710 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificate()
extern "C" X509Certificate_t936 * SslStreamBase_get_ServerCertificate_m5711 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificates()
extern "C" X509CertificateCollection_t1112 * SslStreamBase_get_ServerCertificates_m5712 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::BeginNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C" bool SslStreamBase_BeginNegotiateHandshake_m5713 (SslStreamBase_t1240 * __this, InternalAsyncResult_t1242 * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C" void SslStreamBase_EndNegotiateHandshake_m5714 (SslStreamBase_t1240 * __this, InternalAsyncResult_t1242 * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStreamBase_BeginRead_m5715 (SslStreamBase_t1240 * __this, ByteU5BU5D_t504* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t171 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginRead(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C" void SslStreamBase_InternalBeginRead_m5716 (SslStreamBase_t1240 * __this, InternalAsyncResult_t1242 * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalReadCallback(System.IAsyncResult)
extern "C" void SslStreamBase_InternalReadCallback_m5717 (SslStreamBase_t1240 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginWrite(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C" void SslStreamBase_InternalBeginWrite_m5718 (SslStreamBase_t1240 * __this, InternalAsyncResult_t1242 * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalWriteCallback(System.IAsyncResult)
extern "C" void SslStreamBase_InternalWriteCallback_m5719 (SslStreamBase_t1240 * __this, Object_t * ___ar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStreamBase_BeginWrite_m5720 (SslStreamBase_t1240 * __this, ByteU5BU5D_t504* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t171 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::EndRead(System.IAsyncResult)
extern "C" int32_t SslStreamBase_EndRead_m5721 (SslStreamBase_t1240 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndWrite(System.IAsyncResult)
extern "C" void SslStreamBase_EndWrite_m5722 (SslStreamBase_t1240 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Close()
extern "C" void SslStreamBase_Close_m5723 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Flush()
extern "C" void SslStreamBase_Flush_m5724 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[])
extern "C" int32_t SslStreamBase_Read_m5725 (SslStreamBase_t1240 * __this, ByteU5BU5D_t504* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t SslStreamBase_Read_m5726 (SslStreamBase_t1240 * __this, ByteU5BU5D_t504* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t SslStreamBase_Seek_m5727 (SslStreamBase_t1240 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::SetLength(System.Int64)
extern "C" void SslStreamBase_SetLength_m5728 (SslStreamBase_t1240 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[])
extern "C" void SslStreamBase_Write_m5729 (SslStreamBase_t1240 * __this, ByteU5BU5D_t504* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void SslStreamBase_Write_m5730 (SslStreamBase_t1240 * __this, ByteU5BU5D_t504* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanRead()
extern "C" bool SslStreamBase_get_CanRead_m5731 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanSeek()
extern "C" bool SslStreamBase_get_CanSeek_m5732 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanWrite()
extern "C" bool SslStreamBase_get_CanWrite_m5733 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Length()
extern "C" int64_t SslStreamBase_get_Length_m5734 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Position()
extern "C" int64_t SslStreamBase_get_Position_m5735 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_Position(System.Int64)
extern "C" void SslStreamBase_set_Position_m5736 (SslStreamBase_t1240 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Finalize()
extern "C" void SslStreamBase_Finalize_m5737 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Dispose(System.Boolean)
extern "C" void SslStreamBase_Dispose_m5738 (SslStreamBase_t1240 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::resetBuffer()
extern "C" void SslStreamBase_resetBuffer_m5739 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::checkDisposed()
extern "C" void SslStreamBase_checkDisposed_m5740 (SslStreamBase_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
