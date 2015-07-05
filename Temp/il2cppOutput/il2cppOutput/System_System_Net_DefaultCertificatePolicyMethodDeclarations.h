#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t934;
// System.Net.ServicePoint
struct ServicePoint_t935;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t936;
// System.Net.WebRequest
struct WebRequest_t937;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C" void DefaultCertificatePolicy__ctor_m3923 (DefaultCertificatePolicy_t934 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C" bool DefaultCertificatePolicy_CheckValidationResult_m3924 (DefaultCertificatePolicy_t934 * __this, ServicePoint_t935 * ___point, X509Certificate_t936 * ___certificate, WebRequest_t937 * ___request, int32_t ___certificateProblem, MethodInfo* method) IL2CPP_METHOD_ATTR;
