﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Chain
struct X509Chain_t1183;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1112;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t969;
// Mono.Security.X509.X509ChainStatusFlags
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFlags.h"

// System.Void Mono.Security.X509.X509Chain::.ctor()
extern "C" void X509Chain__ctor_m5310 (X509Chain_t1183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" void X509Chain__ctor_m5311 (X509Chain_t1183 * __this, X509CertificateCollection_t1112 * ___chain, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::get_Status()
extern "C" int32_t X509Chain_get_Status_m5312 (X509Chain_t1183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
extern "C" X509CertificateCollection_t1112 * X509Chain_get_TrustAnchors_m5313 (X509Chain_t1183 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
extern "C" bool X509Chain_Build_m5314 (X509Chain_t1183 * __this, X509Certificate_t969 * ___leaf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
extern "C" bool X509Chain_IsValid_m5315 (X509Chain_t1183 * __this, X509Certificate_t969 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
extern "C" X509Certificate_t969 * X509Chain_FindCertificateParent_m5316 (X509Chain_t1183 * __this, X509Certificate_t969 * ___child, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
extern "C" X509Certificate_t969 * X509Chain_FindCertificateRoot_m5317 (X509Chain_t1183 * __this, X509Certificate_t969 * ___potentialRoot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
extern "C" bool X509Chain_IsTrusted_m5318 (X509Chain_t1183 * __this, X509Certificate_t969 * ___potentialTrusted, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
extern "C" bool X509Chain_IsParent_m5319 (X509Chain_t1183 * __this, X509Certificate_t969 * ___child, X509Certificate_t969 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
