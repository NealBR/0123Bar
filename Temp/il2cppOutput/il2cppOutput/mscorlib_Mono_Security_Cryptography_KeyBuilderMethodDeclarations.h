#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.KeyBuilder
struct KeyBuilder_t1361;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1154;
// System.Byte[]
struct ByteU5BU5D_t504;

// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::get_Rng()
extern "C" RandomNumberGenerator_t1154 * KeyBuilder_get_Rng_m7052 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::Key(System.Int32)
extern "C" ByteU5BU5D_t504* KeyBuilder_Key_m7053 (Object_t * __this /* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::IV(System.Int32)
extern "C" ByteU5BU5D_t504* KeyBuilder_IV_m7054 (Object_t * __this /* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
