#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct RSASslSignatureDeformatter_t1230;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t965;
// System.Byte[]
struct ByteU5BU5D_t504;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureDeformatter__ctor_m5611 (RSASslSignatureDeformatter_t1230 * __this, AsymmetricAlgorithm_t965 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool RSASslSignatureDeformatter_VerifySignature_m5612 (RSASslSignatureDeformatter_t1230 * __this, ByteU5BU5D_t504* ___rgbHash, ByteU5BU5D_t504* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void RSASslSignatureDeformatter_SetHashAlgorithm_m5613 (RSASslSignatureDeformatter_t1230 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureDeformatter_SetKey_m5614 (RSASslSignatureDeformatter_t1230 * __this, AsymmetricAlgorithm_t965 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
