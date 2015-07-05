﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t1223;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t936;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t950;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateSelectionCallback__ctor_m5881 (CertificateSelectionCallback_t1223 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t936 * CertificateSelectionCallback_Invoke_m5882 (CertificateSelectionCallback_t1223 * __this, X509CertificateCollection_t950 * ___clientCertificates, X509Certificate_t936 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t950 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" X509Certificate_t936 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t1223(Il2CppObject* delegate, X509CertificateCollection_t950 * ___clientCertificates, X509Certificate_t936 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t950 * ___serverRequestedCertificates);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateSelectionCallback_BeginInvoke_m5883 (CertificateSelectionCallback_t1223 * __this, X509CertificateCollection_t950 * ___clientCertificates, X509Certificate_t936 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t950 * ___serverRequestedCertificates, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t936 * CertificateSelectionCallback_EndInvoke_m5884 (CertificateSelectionCallback_t1223 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
