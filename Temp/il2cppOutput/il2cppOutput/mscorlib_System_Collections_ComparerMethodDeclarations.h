#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Comparer
struct Comparer_t1408;
// System.Globalization.CultureInfo
struct CultureInfo_t702;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Comparer::.ctor()
extern "C" void Comparer__ctor_m7445 (Comparer_t1408 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Comparer::.ctor(System.Globalization.CultureInfo)
extern "C" void Comparer__ctor_m7446 (Comparer_t1408 * __this, CultureInfo_t702 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Comparer::.cctor()
extern "C" void Comparer__cctor_m7447 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Comparer::Compare(System.Object,System.Object)
extern "C" int32_t Comparer_Compare_m7448 (Comparer_t1408 * __this, Object_t * ___a, Object_t * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Comparer::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Comparer_GetObjectData_m7449 (Comparer_t1408 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
