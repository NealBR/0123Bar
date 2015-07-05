#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESTransform
struct DESTransform_t1668;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1178;
// System.Byte[]
struct ByteU5BU5D_t504;
// System.UInt32[]
struct UInt32U5BU5D_t1153;

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
extern "C" void DESTransform__ctor_m8976 (DESTransform_t1668 * __this, SymmetricAlgorithm_t1178 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t504* ___key, ByteU5BU5D_t504* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
extern "C" void DESTransform__cctor_m8977 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
extern "C" uint32_t DESTransform_CipherFunct_m8978 (DESTransform_t1668 * __this, uint32_t ___r, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
extern "C" void DESTransform_Permutation_m8979 (Object_t * __this /* static, unused */, ByteU5BU5D_t504* ___input, ByteU5BU5D_t504* ___output, UInt32U5BU5D_t1153* ___permTab, bool ___preSwap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
extern "C" void DESTransform_BSwap_m8980 (Object_t * __this /* static, unused */, ByteU5BU5D_t504* ___byteBuff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
extern "C" void DESTransform_SetKey_m8981 (DESTransform_t1668 * __this, ByteU5BU5D_t504* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
extern "C" void DESTransform_ProcessBlock_m8982 (DESTransform_t1668 * __this, ByteU5BU5D_t504* ___input, ByteU5BU5D_t504* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void DESTransform_ECB_m8983 (DESTransform_t1668 * __this, ByteU5BU5D_t504* ___input, ByteU5BU5D_t504* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t504* DESTransform_GetStrongKey_m8984 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
