﻿#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t971;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1171;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t486;
// System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureDef.h"
// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct  RSASslSignatureDeformatter_t1230  : public AsymmetricSignatureDeformatter_t1231
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::key
	RSA_t971 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::hash
	HashAlgorithm_t1171 * ___hash_1;
};
struct RSASslSignatureDeformatter_t1230_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::<>f__switch$map15
	Dictionary_2_t486 * ___U3CU3Ef__switch$map15_2;
};
