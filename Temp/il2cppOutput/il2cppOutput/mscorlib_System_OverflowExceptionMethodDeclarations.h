#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.OverflowException
struct OverflowException_t1813;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.OverflowException::.ctor()
extern "C" void OverflowException__ctor_m10270 (OverflowException_t1813 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OverflowException::.ctor(System.String)
extern "C" void OverflowException__ctor_m10271 (OverflowException_t1813 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OverflowException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OverflowException__ctor_m10272 (OverflowException_t1813 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
