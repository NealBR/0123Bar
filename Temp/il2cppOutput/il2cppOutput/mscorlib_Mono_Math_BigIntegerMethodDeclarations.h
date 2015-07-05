#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger
struct BigInteger_t1352;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1154;
// System.Byte[]
struct ByteU5BU5D_t504;
// System.String
struct String_t;
// System.Object
struct Object_t;
// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
extern "C" void BigInteger__ctor_m6995 (BigInteger_t1352 * __this, int32_t ___sign, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
extern "C" void BigInteger__ctor_m6996 (BigInteger_t1352 * __this, BigInteger_t1352 * ___bi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
extern "C" void BigInteger__ctor_m6997 (BigInteger_t1352 * __this, BigInteger_t1352 * ___bi, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
extern "C" void BigInteger__ctor_m6998 (BigInteger_t1352 * __this, ByteU5BU5D_t504* ___inData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
extern "C" void BigInteger__ctor_m6999 (BigInteger_t1352 * __this, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.cctor()
extern "C" void BigInteger__cctor_m7000 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
extern "C" RandomNumberGenerator_t1154 * BigInteger_get_Rng_m7001 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
extern "C" BigInteger_t1352 * BigInteger_GenerateRandom_m7002 (Object_t * __this /* static, unused */, int32_t ___bits, RandomNumberGenerator_t1154 * ___rng, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
extern "C" BigInteger_t1352 * BigInteger_GenerateRandom_m7003 (Object_t * __this /* static, unused */, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize(System.Security.Cryptography.RandomNumberGenerator)
extern "C" void BigInteger_Randomize_m7004 (BigInteger_t1352 * __this, RandomNumberGenerator_t1154 * ___rng, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize()
extern "C" void BigInteger_Randomize_m7005 (BigInteger_t1352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::BitCount()
extern "C" int32_t BigInteger_BitCount_m7006 (BigInteger_t1352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.UInt32)
extern "C" bool BigInteger_TestBit_m7007 (BigInteger_t1352 * __this, uint32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
extern "C" bool BigInteger_TestBit_m7008 (BigInteger_t1352 * __this, int32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
extern "C" void BigInteger_SetBit_m7009 (BigInteger_t1352 * __this, uint32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
extern "C" void BigInteger_SetBit_m7010 (BigInteger_t1352 * __this, uint32_t ___bitNum, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
extern "C" int32_t BigInteger_LowestSetBit_m7011 (BigInteger_t1352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
extern "C" ByteU5BU5D_t504* BigInteger_GetBytes_m7012 (BigInteger_t1352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
extern "C" String_t* BigInteger_ToString_m7013 (BigInteger_t1352 * __this, uint32_t ___radix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
extern "C" String_t* BigInteger_ToString_m7014 (BigInteger_t1352 * __this, uint32_t ___radix, String_t* ___characterSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Normalize()
extern "C" void BigInteger_Normalize_m7015 (BigInteger_t1352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Clear()
extern "C" void BigInteger_Clear_m7016 (BigInteger_t1352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::GetHashCode()
extern "C" int32_t BigInteger_GetHashCode_m7017 (BigInteger_t1352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString()
extern "C" String_t* BigInteger_ToString_m7018 (BigInteger_t1352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
extern "C" bool BigInteger_Equals_m7019 (BigInteger_t1352 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
extern "C" BigInteger_t1352 * BigInteger_ModInverse_m7020 (BigInteger_t1352 * __this, BigInteger_t1352 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1352 * BigInteger_ModPow_m7021 (BigInteger_t1352 * __this, BigInteger_t1352 * ___exp, BigInteger_t1352 * ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::IsProbablePrime()
extern "C" bool BigInteger_IsProbablePrime_m7022 (BigInteger_t1352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
extern "C" BigInteger_t1352 * BigInteger_GeneratePseudoPrime_m7023 (Object_t * __this /* static, unused */, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Incr2()
extern "C" void BigInteger_Incr2_m7024 (BigInteger_t1352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
extern "C" BigInteger_t1352 * BigInteger_op_Implicit_m7025 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
extern "C" BigInteger_t1352 * BigInteger_op_Implicit_m7026 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Addition(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1352 * BigInteger_op_Addition_m7027 (Object_t * __this /* static, unused */, BigInteger_t1352 * ___bi1, BigInteger_t1352 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1352 * BigInteger_op_Subtraction_m7028 (Object_t * __this /* static, unused */, BigInteger_t1352 * ___bi1, BigInteger_t1352 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t BigInteger_op_Modulus_m7029 (Object_t * __this /* static, unused */, BigInteger_t1352 * ___bi, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1352 * BigInteger_op_Modulus_m7030 (Object_t * __this /* static, unused */, BigInteger_t1352 * ___bi1, BigInteger_t1352 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1352 * BigInteger_op_Division_m7031 (Object_t * __this /* static, unused */, BigInteger_t1352 * ___bi1, BigInteger_t1352 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1352 * BigInteger_op_Multiply_m7032 (Object_t * __this /* static, unused */, BigInteger_t1352 * ___bi1, BigInteger_t1352 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1352 * BigInteger_op_Multiply_m7033 (Object_t * __this /* static, unused */, BigInteger_t1352 * ___bi, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1352 * BigInteger_op_LeftShift_m7034 (Object_t * __this /* static, unused */, BigInteger_t1352 * ___bi1, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1352 * BigInteger_op_RightShift_m7035 (Object_t * __this /* static, unused */, BigInteger_t1352 * ___bi1, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
extern "C" bool BigInteger_op_Equality_m7036 (Object_t * __this /* static, unused */, BigInteger_t1352 * ___bi1, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
extern "C" bool BigInteger_op_Inequality_m7037 (Object_t * __this /* static, unused */, BigInteger_t1352 * ___bi1, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_Equality_m7038 (Object_t * __this /* static, unused */, BigInteger_t1352 * ___bi1, BigInteger_t1352 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_Inequality_m7039 (Object_t * __this /* static, unused */, BigInteger_t1352 * ___bi1, BigInteger_t1352 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_GreaterThan_m7040 (Object_t * __this /* static, unused */, BigInteger_t1352 * ___bi1, BigInteger_t1352 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_LessThan_m7041 (Object_t * __this /* static, unused */, BigInteger_t1352 * ___bi1, BigInteger_t1352 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_GreaterThanOrEqual_m7042 (Object_t * __this /* static, unused */, BigInteger_t1352 * ___bi1, BigInteger_t1352 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_LessThanOrEqual_m7043 (Object_t * __this /* static, unused */, BigInteger_t1352 * ___bi1, BigInteger_t1352 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
