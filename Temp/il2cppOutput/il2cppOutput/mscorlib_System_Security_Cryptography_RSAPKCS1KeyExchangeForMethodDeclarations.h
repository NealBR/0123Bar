#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1290;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t965;
// System.Byte[]
struct ByteU5BU5D_t504;

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter__ctor_m6039 (RSAPKCS1KeyExchangeFormatter_t1290 * __this, AsymmetricAlgorithm_t965 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t504* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m6040 (RSAPKCS1KeyExchangeFormatter_t1290 * __this, ByteU5BU5D_t504* ___rgbData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m9130 (RSAPKCS1KeyExchangeFormatter_t1290 * __this, AsymmetricAlgorithm_t965 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
