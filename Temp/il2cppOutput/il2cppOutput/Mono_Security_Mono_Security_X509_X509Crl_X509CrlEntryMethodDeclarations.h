#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t994;
// System.Byte[]
struct ByteU5BU5D_t504;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1115;
// Mono.Security.ASN1
struct ASN1_t980;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C" void X509CrlEntry__ctor_m5320 (X509CrlEntry_t994 * __this, ASN1_t980 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C" ByteU5BU5D_t504* X509CrlEntry_get_SerialNumber_m5321 (X509CrlEntry_t994 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C" DateTime_t465  X509CrlEntry_get_RevocationDate_m4897 (X509CrlEntry_t994 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C" X509ExtensionCollection_t1115 * X509CrlEntry_get_Extensions_m4904 (X509CrlEntry_t994 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
