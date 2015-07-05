#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoCustomAttrs/AttributeInfo
struct AttributeInfo_t1803;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t821;

// System.Void System.MonoCustomAttrs/AttributeInfo::.ctor(System.AttributeUsageAttribute,System.Int32)
extern "C" void AttributeInfo__ctor_m10085 (AttributeInfo_t1803 * __this, AttributeUsageAttribute_t821 * ___usage, int32_t ___inheritanceLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AttributeUsageAttribute System.MonoCustomAttrs/AttributeInfo::get_Usage()
extern "C" AttributeUsageAttribute_t821 * AttributeInfo_get_Usage_m10086 (AttributeInfo_t1803 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MonoCustomAttrs/AttributeInfo::get_InheritanceLevel()
extern "C" int32_t AttributeInfo_get_InheritanceLevel_m10087 (AttributeInfo_t1803 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
