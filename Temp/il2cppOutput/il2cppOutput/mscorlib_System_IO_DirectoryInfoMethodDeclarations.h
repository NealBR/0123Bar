#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.DirectoryInfo
struct DirectoryInfo_t1445;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.DirectoryInfo::.ctor(System.String)
extern "C" void DirectoryInfo__ctor_m7766 (DirectoryInfo_t1445 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.String,System.Boolean)
extern "C" void DirectoryInfo__ctor_m7767 (DirectoryInfo_t1445 * __this, String_t* ___path, bool ___simpleOriginalPath, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DirectoryInfo__ctor_m7768 (DirectoryInfo_t1445 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Initialize()
extern "C" void DirectoryInfo_Initialize_m7769 (DirectoryInfo_t1445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.DirectoryInfo::get_Exists()
extern "C" bool DirectoryInfo_get_Exists_m7770 (DirectoryInfo_t1445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.DirectoryInfo::get_Parent()
extern "C" DirectoryInfo_t1445 * DirectoryInfo_get_Parent_m7771 (DirectoryInfo_t1445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Create()
extern "C" void DirectoryInfo_Create_m7772 (DirectoryInfo_t1445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.DirectoryInfo::ToString()
extern "C" String_t* DirectoryInfo_ToString_m7773 (DirectoryInfo_t1445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
