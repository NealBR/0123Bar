﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t1383;
// System.Object
struct Object_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1382;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1377;

// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" void X509CertificateEnumerator__ctor_m7230 (X509CertificateEnumerator_t1383 * __this, X509CertificateCollection_t1377 * ___mappings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m7231 (X509CertificateEnumerator_t1383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
extern "C" bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m7232 (X509CertificateEnumerator_t1383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern "C" X509Certificate_t1382 * X509CertificateEnumerator_get_Current_m7233 (X509CertificateEnumerator_t1383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern "C" bool X509CertificateEnumerator_MoveNext_m7234 (X509CertificateEnumerator_t1383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
