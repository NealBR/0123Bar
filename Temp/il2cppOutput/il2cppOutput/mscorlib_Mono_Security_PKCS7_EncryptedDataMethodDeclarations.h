#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1379;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1387;
// System.Byte[]
struct ByteU5BU5D_t504;
// Mono.Security.ASN1
struct ASN1_t1374;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m7286 (EncryptedData_t1379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m7287 (EncryptedData_t1379 * __this, ASN1_t1374 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t1387 * EncryptedData_get_EncryptionAlgorithm_m7288 (EncryptedData_t1379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t504* EncryptedData_get_EncryptedContent_m7289 (EncryptedData_t1379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
