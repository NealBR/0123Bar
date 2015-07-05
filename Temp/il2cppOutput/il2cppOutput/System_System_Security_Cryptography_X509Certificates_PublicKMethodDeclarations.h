#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t968;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t966;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t965;
// System.Security.Cryptography.Oid
struct Oid_t967;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t969;
// System.Byte[]
struct ByteU5BU5D_t504;
// System.Security.Cryptography.DSA
struct DSA_t970;
// System.Security.Cryptography.RSA
struct RSA_t971;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4046 (PublicKey_t968 * __this, X509Certificate_t969 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t966 * PublicKey_get_EncodedKeyValue_m4047 (PublicKey_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t966 * PublicKey_get_EncodedParameters_m4048 (PublicKey_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t965 * PublicKey_get_Key_m4049 (PublicKey_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t967 * PublicKey_get_Oid_m4050 (PublicKey_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t504* PublicKey_GetUnsignedBigInteger_m4051 (Object_t * __this /* static, unused */, ByteU5BU5D_t504* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t970 * PublicKey_DecodeDSA_m4052 (Object_t * __this /* static, unused */, ByteU5BU5D_t504* ___rawPublicKey, ByteU5BU5D_t504* ___rawParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t971 * PublicKey_DecodeRSA_m4053 (Object_t * __this /* static, unused */, ByteU5BU5D_t504* ___rawPublicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
