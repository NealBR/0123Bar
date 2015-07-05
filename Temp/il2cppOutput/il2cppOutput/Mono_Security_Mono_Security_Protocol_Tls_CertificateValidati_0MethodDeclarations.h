#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1239;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1237;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1112;
// System.IAsyncResult
struct IAsyncResult_t170;
// System.AsyncCallback
struct AsyncCallback_t171;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateValidationCallback2__ctor_m5877 (CertificateValidationCallback2_t1239 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t1237 * CertificateValidationCallback2_Invoke_m5878 (CertificateValidationCallback2_t1239 * __this, X509CertificateCollection_t1112 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" ValidationResult_t1237 * pinvoke_delegate_wrapper_CertificateValidationCallback2_t1239(Il2CppObject* delegate, X509CertificateCollection_t1112 * ___collection);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateValidationCallback2_BeginInvoke_m5879 (CertificateValidationCallback2_t1239 * __this, X509CertificateCollection_t1112 * ___collection, AsyncCallback_t171 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern "C" ValidationResult_t1237 * CertificateValidationCallback2_EndInvoke_m5880 (CertificateValidationCallback2_t1239 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
