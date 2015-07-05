#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t992;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1115;
// System.Byte[]
struct ByteU5BU5D_t504;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t994;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t969;
// System.Security.Cryptography.DSA
struct DSA_t970;
// System.Security.Cryptography.RSA
struct RSA_t971;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t965;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m5322 (X509Crl_t992 * __this, ByteU5BU5D_t504* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m5323 (X509Crl_t992 * __this, ByteU5BU5D_t504* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t1115 * X509Crl_get_Extensions_m4892 (X509Crl_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t504* X509Crl_get_Hash_m5324 (X509Crl_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m4900 (X509Crl_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t465  X509Crl_get_NextUpdate_m4898 (X509Crl_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m5325 (X509Crl_t992 * __this, ByteU5BU5D_t504* ___array1, ByteU5BU5D_t504* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t994 * X509Crl_GetCrlEntry_m4896 (X509Crl_t992 * __this, X509Certificate_t969 * ___x509, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t994 * X509Crl_GetCrlEntry_m5326 (X509Crl_t992 * __this, ByteU5BU5D_t504* ___serialNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m5327 (X509Crl_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m5328 (X509Crl_t992 * __this, DSA_t970 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m5329 (X509Crl_t992 * __this, RSA_t971 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m4895 (X509Crl_t992 * __this, AsymmetricAlgorithm_t965 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
