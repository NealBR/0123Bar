#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Debug
struct Debug_t515;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t20;
struct Object_t20_marshaled;
// System.Exception
struct Exception_t275;
// System.Object
struct Object_t;

// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m2656 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t20 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m2657 (Object_t * __this /* static, unused */, Exception_t275 * ___exception, Object_t20 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" void Debug_Log_m2658 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" void Debug_LogError_m1266 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" void Debug_LogError_m1616 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t20 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" void Debug_LogException_m2659 (Object_t * __this /* static, unused */, Exception_t275 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_LogException_m1464 (Object_t * __this /* static, unused */, Exception_t275 * ___exception, Object_t20 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m2660 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" void Debug_LogWarning_m1820 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t20 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
