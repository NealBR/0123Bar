﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct PrimeGeneratorBase_t1350;
// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t1351;
// Mono.Math.BigInteger
struct BigInteger_t1352;
// Mono.Math.Prime.ConfidenceFactor
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor.h"

// System.Void Mono.Math.Prime.Generator.PrimeGeneratorBase::.ctor()
extern "C" void PrimeGeneratorBase__ctor_m6960 (PrimeGeneratorBase_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.Prime.ConfidenceFactor Mono.Math.Prime.Generator.PrimeGeneratorBase::get_Confidence()
extern "C" int32_t PrimeGeneratorBase_get_Confidence_m6961 (PrimeGeneratorBase_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.Prime.PrimalityTest Mono.Math.Prime.Generator.PrimeGeneratorBase::get_PrimalityTest()
extern "C" PrimalityTest_t1351 * PrimeGeneratorBase_get_PrimalityTest_m6962 (PrimeGeneratorBase_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.Prime.Generator.PrimeGeneratorBase::get_TrialDivisionBounds()
extern "C" int32_t PrimeGeneratorBase_get_TrialDivisionBounds_m6963 (PrimeGeneratorBase_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.PrimeGeneratorBase::GenerateNewPrime(System.Int32)
