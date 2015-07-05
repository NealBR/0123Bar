#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_t1105;
// System.Security.Cryptography.CspParameters
struct CspParameters_t1269;
// System.Byte[]
struct ByteU5BU5D_t504;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1179;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor()
extern "C" void DSACryptoServiceProvider__ctor_m8995 (DSACryptoServiceProvider_t1105 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32)
extern "C" void DSACryptoServiceProvider__ctor_m4830 (DSACryptoServiceProvider_t1105 * __this, int32_t ___dwKeySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32,System.Security.Cryptography.CspParameters)
extern "C" void DSACryptoServiceProvider__ctor_m8996 (DSACryptoServiceProvider_t1105 * __this, int32_t ___dwKeySize, CspParameters_t1269 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.cctor()
extern "C" void DSACryptoServiceProvider__cctor_m8997 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Finalize()
extern "C" void DSACryptoServiceProvider_Finalize_m8998 (DSACryptoServiceProvider_t1105 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.DSACryptoServiceProvider::get_KeySize()
extern "C" int32_t DSACryptoServiceProvider_get_KeySize_m8999 (DSACryptoServiceProvider_t1105 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::get_PublicOnly()
extern "C" bool DSACryptoServiceProvider_get_PublicOnly_m4816 (DSACryptoServiceProvider_t1105 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSACryptoServiceProvider::ExportParameters(System.Boolean)
extern "C" DSAParameters_t1106  DSACryptoServiceProvider_ExportParameters_m9000 (DSACryptoServiceProvider_t1105 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.DSAParameters)
extern "C" void DSACryptoServiceProvider_ImportParameters_m9001 (DSACryptoServiceProvider_t1105 * __this, DSAParameters_t1106  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t504* DSACryptoServiceProvider_CreateSignature_m9002 (DSACryptoServiceProvider_t1105 * __this, ByteU5BU5D_t504* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSACryptoServiceProvider_VerifySignature_m9003 (DSACryptoServiceProvider_t1105 * __this, ByteU5BU5D_t504* ___rgbHash, ByteU5BU5D_t504* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Dispose(System.Boolean)
extern "C" void DSACryptoServiceProvider_Dispose_m9004 (DSACryptoServiceProvider_t1105 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
extern "C" void DSACryptoServiceProvider_OnKeyGenerated_m9005 (DSACryptoServiceProvider_t1105 * __this, Object_t * ___sender, EventArgs_t1179 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
