#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t1777;
// System.Delegate
struct Delegate_t295;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C" void DelegateEntry__ctor_m9985 (DelegateEntry_t1777 * __this, Delegate_t295 * ___del, String_t* ___targetLabel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C" Delegate_t295 * DelegateEntry_DeserializeDelegate_m9986 (DelegateEntry_t1777 * __this, SerializationInfo_t653 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
