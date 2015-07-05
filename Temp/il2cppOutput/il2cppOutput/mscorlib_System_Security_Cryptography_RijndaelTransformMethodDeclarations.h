#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t1685;
// System.Security.Cryptography.Rijndael
struct Rijndael_t1285;
// System.Byte[]
struct ByteU5BU5D_t504;
// System.UInt32[]
struct UInt32U5BU5D_t1153;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m9146 (RijndaelTransform_t1685 * __this, Rijndael_t1285 * ___algo, bool ___encryption, ByteU5BU5D_t504* ___key, ByteU5BU5D_t504* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m9147 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m9148 (RijndaelTransform_t1685 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m9149 (RijndaelTransform_t1685 * __this, ByteU5BU5D_t504* ___input, ByteU5BU5D_t504* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m9150 (RijndaelTransform_t1685 * __this, uint32_t ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m9151 (RijndaelTransform_t1685 * __this, ByteU5BU5D_t504* ___indata, ByteU5BU5D_t504* ___outdata, UInt32U5BU5D_t1153* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m9152 (RijndaelTransform_t1685 * __this, ByteU5BU5D_t504* ___indata, ByteU5BU5D_t504* ___outdata, UInt32U5BU5D_t1153* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m9153 (RijndaelTransform_t1685 * __this, ByteU5BU5D_t504* ___indata, ByteU5BU5D_t504* ___outdata, UInt32U5BU5D_t1153* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m9154 (RijndaelTransform_t1685 * __this, ByteU5BU5D_t504* ___indata, ByteU5BU5D_t504* ___outdata, UInt32U5BU5D_t1153* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m9155 (RijndaelTransform_t1685 * __this, ByteU5BU5D_t504* ___indata, ByteU5BU5D_t504* ___outdata, UInt32U5BU5D_t1153* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m9156 (RijndaelTransform_t1685 * __this, ByteU5BU5D_t504* ___indata, ByteU5BU5D_t504* ___outdata, UInt32U5BU5D_t1153* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
