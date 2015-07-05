#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t981;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t979;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
struct X509Certificate2Enumerator_t982;
// System.Security.Cryptography.X509Certificates.X509FindType
#include "System_System_Security_Cryptography_X509Certificates_X509Fin.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor()
extern "C" void X509Certificate2Collection__ctor_m4094 (X509Certificate2Collection_t981 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" void X509Certificate2Collection__ctor_m4095 (X509Certificate2Collection_t981 * __this, X509Certificate2Collection_t981 * ___certificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::get_Item(System.Int32)
extern "C" X509Certificate2_t979 * X509Certificate2Collection_get_Item_m4096 (X509Certificate2Collection_t981 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" int32_t X509Certificate2Collection_Add_m4097 (X509Certificate2Collection_t981 * __this, X509Certificate2_t979 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" void X509Certificate2Collection_AddRange_m4098 (X509Certificate2Collection_t981 * __this, X509Certificate2Collection_t981 * ___certificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509Certificate2Collection_Contains_m4099 (X509Certificate2Collection_t981 * __this, X509Certificate2_t979 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Find(System.Security.Cryptography.X509Certificates.X509FindType,System.Object,System.Boolean)
extern "C" X509Certificate2Collection_t981 * X509Certificate2Collection_Find_m4100 (X509Certificate2Collection_t981 * __this, int32_t ___findType, Object_t * ___findValue, bool ___validOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator System.Security.Cryptography.X509Certificates.X509Certificate2Collection::GetEnumerator()
extern "C" X509Certificate2Enumerator_t982 * X509Certificate2Collection_GetEnumerator_m4101 (X509Certificate2Collection_t981 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
