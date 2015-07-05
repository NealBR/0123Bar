#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t1102;
// System.Security.Cryptography.CspParameters
struct CspParameters_t1269;
// System.Byte[]
struct ByteU5BU5D_t504;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1179;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
extern "C" void RSACryptoServiceProvider__ctor_m9119 (RSACryptoServiceProvider_t1102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
extern "C" void RSACryptoServiceProvider__ctor_m5911 (RSACryptoServiceProvider_t1102 * __this, CspParameters_t1269 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Int32)
extern "C" void RSACryptoServiceProvider__ctor_m4831 (RSACryptoServiceProvider_t1102 * __this, int32_t ___dwKeySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.cctor()
extern "C" void RSACryptoServiceProvider__cctor_m9120 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Common(System.Int32,System.Security.Cryptography.CspParameters)
extern "C" void RSACryptoServiceProvider_Common_m9121 (RSACryptoServiceProvider_t1102 * __this, int32_t ___dwKeySize, CspParameters_t1269 * ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Finalize()
extern "C" void RSACryptoServiceProvider_Finalize_m9122 (RSACryptoServiceProvider_t1102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RSACryptoServiceProvider::get_KeySize()
extern "C" int32_t RSACryptoServiceProvider_get_KeySize_m9123 (RSACryptoServiceProvider_t1102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::get_PublicOnly()
extern "C" bool RSACryptoServiceProvider_get_PublicOnly_m4810 (RSACryptoServiceProvider_t1102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::DecryptValue(System.Byte[])
extern "C" ByteU5BU5D_t504* RSACryptoServiceProvider_DecryptValue_m9124 (RSACryptoServiceProvider_t1102 * __this, ByteU5BU5D_t504* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::EncryptValue(System.Byte[])
extern "C" ByteU5BU5D_t504* RSACryptoServiceProvider_EncryptValue_m9125 (RSACryptoServiceProvider_t1102 * __this, ByteU5BU5D_t504* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSACryptoServiceProvider::ExportParameters(System.Boolean)
extern "C" RSAParameters_t1104  RSACryptoServiceProvider_ExportParameters_m9126 (RSACryptoServiceProvider_t1102 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C" void RSACryptoServiceProvider_ImportParameters_m9127 (RSACryptoServiceProvider_t1102 * __this, RSAParameters_t1104  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Dispose(System.Boolean)
extern "C" void RSACryptoServiceProvider_Dispose_m9128 (RSACryptoServiceProvider_t1102 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
extern "C" void RSACryptoServiceProvider_OnKeyGenerated_m9129 (RSACryptoServiceProvider_t1102 * __this, Object_t * ___sender, EventArgs_t1179 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
