#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebProxy
struct WebProxy_t962;
// System.Uri
struct Uri_t586;
// System.String[]
struct StringU5BU5D_t423;
// System.Net.ICredentials
struct ICredentials_t961;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m4027 (WebProxy_t962 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m4028 (WebProxy_t962 * __this, Uri_t586 * ___address, bool ___bypassOnLocal, StringU5BU5D_t423* ___bypassList, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m4029 (WebProxy_t962 * __this, SerializationInfo_t653 * ___serializationInfo, StreamingContext_t654  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m4030 (WebProxy_t962 * __this, SerializationInfo_t653 * ___serializationInfo, StreamingContext_t654  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m4031 (WebProxy_t962 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t586 * WebProxy_GetProxy_m4032 (WebProxy_t962 * __this, Uri_t586 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m4033 (WebProxy_t962 * __this, Uri_t586 * ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m4034 (WebProxy_t962 * __this, SerializationInfo_t653 * ___serializationInfo, StreamingContext_t654  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m4035 (WebProxy_t962 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
