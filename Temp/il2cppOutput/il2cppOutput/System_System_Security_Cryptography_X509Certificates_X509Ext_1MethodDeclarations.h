#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t1000;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t977;
// System.Collections.ArrayList
struct ArrayList_t924;

// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::.ctor(System.Collections.ArrayList)
extern "C" void X509ExtensionEnumerator__ctor_m4201 (X509ExtensionEnumerator_t1000 * __this, ArrayList_t924 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * X509ExtensionEnumerator_System_Collections_IEnumerator_get_Current_m4202 (X509ExtensionEnumerator_t1000 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::get_Current()
extern "C" X509Extension_t977 * X509ExtensionEnumerator_get_Current_m4203 (X509ExtensionEnumerator_t1000 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::MoveNext()
extern "C" bool X509ExtensionEnumerator_MoveNext_m4204 (X509ExtensionEnumerator_t1000 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
