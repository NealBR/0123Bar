﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.PKCS12
struct PKCS12_t1110;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t924;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1112;
// System.Byte[]
struct ByteU5BU5D_t504;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1178;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1163;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1174;
// Mono.Security.ASN1
struct ASN1_t980;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
extern "C" void PKCS12__ctor_m5266 (PKCS12_t1110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
extern "C" void PKCS12__ctor_m4859 (PKCS12_t1110 * __this, ByteU5BU5D_t504* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
extern "C" void PKCS12__ctor_m4860 (PKCS12_t1110 * __this, ByteU5BU5D_t504* ___data, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
extern "C" void PKCS12__cctor_m5267 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
extern "C" void PKCS12_Decode_m5268 (PKCS12_t1110 * __this, ByteU5BU5D_t504* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
extern "C" void PKCS12_Finalize_m5269 (PKCS12_t1110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
extern "C" void PKCS12_set_Password_m5270 (PKCS12_t1110 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.PKCS12::get_Keys()
extern "C" ArrayList_t924 * PKCS12_get_Keys_m4864 (PKCS12_t1110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
extern "C" X509CertificateCollection_t1112 * PKCS12_get_Certificates_m4861 (PKCS12_t1110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS12_Compare_m5271 (PKCS12_t1110 * __this, ByteU5BU5D_t504* ___expected, ByteU5BU5D_t504* ___actual, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
extern "C" SymmetricAlgorithm_t1178 * PKCS12_GetSymmetricAlgorithm_m5272 (PKCS12_t1110 * __this, String_t* ___algorithmOid, ByteU5BU5D_t504* ___salt, int32_t ___iterationCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t504* PKCS12_Decrypt_m5273 (PKCS12_t1110 * __this, String_t* ___algorithmOid, ByteU5BU5D_t504* ___salt, int32_t ___iterationCount, ByteU5BU5D_t504* ___encryptedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
extern "C" ByteU5BU5D_t504* PKCS12_Decrypt_m5274 (PKCS12_t1110 * __this, EncryptedData_t1163 * ___ed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
extern "C" DSAParameters_t1106  PKCS12_GetExistingParameters_m5275 (PKCS12_t1110 * __this, bool* ___found, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
extern "C" void PKCS12_AddPrivateKey_m5276 (PKCS12_t1110 * __this, PrivateKeyInfo_t1174 * ___pki, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
extern "C" void PKCS12_ReadSafeBag_m5277 (PKCS12_t1110 * __this, ASN1_t980 * ___safeBag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t504* PKCS12_MAC_m5278 (PKCS12_t1110 * __this, ByteU5BU5D_t504* ___password, ByteU5BU5D_t504* ___salt, int32_t ___iterations, ByteU5BU5D_t504* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
extern "C" int32_t PKCS12_get_MaximumPasswordLength_m5279 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
