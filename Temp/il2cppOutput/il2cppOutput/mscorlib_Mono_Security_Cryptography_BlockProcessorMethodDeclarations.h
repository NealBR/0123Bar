#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t1362;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1167;
// System.Byte[]
struct ByteU5BU5D_t504;

// System.Void Mono.Security.Cryptography.BlockProcessor::.ctor(System.Security.Cryptography.ICryptoTransform,System.Int32)
extern "C" void BlockProcessor__ctor_m7055 (BlockProcessor_t1362 * __this, Object_t * ___transform, int32_t ___blockSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Finalize()
extern "C" void BlockProcessor_Finalize_m7056 (BlockProcessor_t1362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Initialize()
extern "C" void BlockProcessor_Initialize_m7057 (BlockProcessor_t1362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[])
extern "C" void BlockProcessor_Core_m7058 (BlockProcessor_t1362 * __this, ByteU5BU5D_t504* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[],System.Int32,System.Int32)
extern "C" void BlockProcessor_Core_m7059 (BlockProcessor_t1362 * __this, ByteU5BU5D_t504* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.BlockProcessor::Final()
extern "C" ByteU5BU5D_t504* BlockProcessor_Final_m7060 (BlockProcessor_t1362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
