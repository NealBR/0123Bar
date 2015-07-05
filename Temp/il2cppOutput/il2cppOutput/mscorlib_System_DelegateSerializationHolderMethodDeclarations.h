﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder
struct DelegateSerializationHolder_t1778;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Delegate
struct Delegate_t295;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.DelegateSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder__ctor_m9987 (DelegateSerializationHolder_t1778 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetDelegateData(System.Delegate,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder_GetDelegateData_m9988 (Object_t * __this /* static, unused */, Delegate_t295 * ___instance, SerializationInfo_t653 * ___info, StreamingContext_t654  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder_GetObjectData_m9989 (DelegateSerializationHolder_t1778 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DelegateSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * DelegateSerializationHolder_GetRealObject_m9990 (DelegateSerializationHolder_t1778 * __this, StreamingContext_t654  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
