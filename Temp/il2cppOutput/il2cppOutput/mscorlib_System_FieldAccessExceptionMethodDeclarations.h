#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.FieldAccessException
struct FieldAccessException_t1792;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.FieldAccessException::.ctor()
extern "C" void FieldAccessException__ctor_m10028 (FieldAccessException_t1792 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FieldAccessException::.ctor(System.String)
extern "C" void FieldAccessException__ctor_m10029 (FieldAccessException_t1792 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FieldAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FieldAccessException__ctor_m10030 (FieldAccessException_t1792 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
