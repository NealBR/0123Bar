#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.Oid
struct Oid_t967;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.Oid::.ctor()
extern "C" void Oid__ctor_m4250 (Oid_t967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Oid::.ctor(System.String)
extern "C" void Oid__ctor_m4251 (Oid_t967 * __this, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.String)
extern "C" void Oid__ctor_m4252 (Oid_t967 * __this, String_t* ___value, String_t* ___friendlyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Oid::.ctor(System.Security.Cryptography.Oid)
extern "C" void Oid__ctor_m4253 (Oid_t967 * __this, Oid_t967 * ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Oid::get_FriendlyName()
extern "C" String_t* Oid_get_FriendlyName_m4254 (Oid_t967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Oid::get_Value()
extern "C" String_t* Oid_get_Value_m4255 (Oid_t967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Oid::GetName(System.String)
extern "C" String_t* Oid_GetName_m4256 (Oid_t967 * __this, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
