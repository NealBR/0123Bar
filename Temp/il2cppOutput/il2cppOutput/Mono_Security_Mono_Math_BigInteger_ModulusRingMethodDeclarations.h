#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1150;
// Mono.Math.BigInteger
struct BigInteger_t1149;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m5083 (ModulusRing_t1150 * __this, BigInteger_t1149 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m5084 (ModulusRing_t1150 * __this, BigInteger_t1149 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1149 * ModulusRing_Multiply_m5085 (ModulusRing_t1150 * __this, BigInteger_t1149 * ___a, BigInteger_t1149 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1149 * ModulusRing_Difference_m5086 (ModulusRing_t1150 * __this, BigInteger_t1149 * ___a, BigInteger_t1149 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1149 * ModulusRing_Pow_m5087 (ModulusRing_t1150 * __this, BigInteger_t1149 * ___a, BigInteger_t1149 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1149 * ModulusRing_Pow_m5088 (ModulusRing_t1150 * __this, uint32_t ___b, BigInteger_t1149 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
