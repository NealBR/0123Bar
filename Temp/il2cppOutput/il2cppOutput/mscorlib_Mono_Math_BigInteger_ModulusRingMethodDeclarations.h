#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1357;
// Mono.Math.BigInteger
struct BigInteger_t1352;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m6973 (ModulusRing_t1357 * __this, BigInteger_t1352 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m6974 (ModulusRing_t1357 * __this, BigInteger_t1352 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1352 * ModulusRing_Multiply_m6975 (ModulusRing_t1357 * __this, BigInteger_t1352 * ___a, BigInteger_t1352 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1352 * ModulusRing_Difference_m6976 (ModulusRing_t1357 * __this, BigInteger_t1352 * ___a, BigInteger_t1352 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1352 * ModulusRing_Pow_m6977 (ModulusRing_t1357 * __this, BigInteger_t1352 * ___a, BigInteger_t1352 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1352 * ModulusRing_Pow_m6978 (ModulusRing_t1357 * __this, uint32_t ___b, BigInteger_t1352 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
