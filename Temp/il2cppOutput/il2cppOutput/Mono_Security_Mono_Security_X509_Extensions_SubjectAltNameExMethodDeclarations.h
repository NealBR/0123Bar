#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct SubjectAltNameExtension_t1193;
// System.String[]
struct StringU5BU5D_t423;
// Mono.Security.X509.X509Extension
struct X509Extension_t993;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void SubjectAltNameExtension__ctor_m5377 (SubjectAltNameExtension_t1193 * __this, X509Extension_t993 * ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::Decode()
extern "C" void SubjectAltNameExtension_Decode_m5378 (SubjectAltNameExtension_t1193 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_DNSNames()
extern "C" StringU5BU5D_t423* SubjectAltNameExtension_get_DNSNames_m5379 (SubjectAltNameExtension_t1193 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_IPAddresses()
extern "C" StringU5BU5D_t423* SubjectAltNameExtension_get_IPAddresses_m5380 (SubjectAltNameExtension_t1193 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.SubjectAltNameExtension::ToString()
extern "C" String_t* SubjectAltNameExtension_ToString_m5381 (SubjectAltNameExtension_t1193 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
