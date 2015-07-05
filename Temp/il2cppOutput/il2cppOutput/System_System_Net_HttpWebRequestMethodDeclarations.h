#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t951;
// System.Uri
struct Uri_t586;
// System.Net.ServicePoint
struct ServicePoint_t935;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m3940 (HttpWebRequest_t951 * __this, Uri_t586 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m3941 (HttpWebRequest_t951 * __this, SerializationInfo_t653 * ___serializationInfo, StreamingContext_t654  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m3942 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3943 (HttpWebRequest_t951 * __this, SerializationInfo_t653 * ___serializationInfo, StreamingContext_t654  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t586 * HttpWebRequest_get_Address_m3944 (HttpWebRequest_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t935 * HttpWebRequest_get_ServicePoint_m3945 (HttpWebRequest_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t935 * HttpWebRequest_GetServicePoint_m3946 (HttpWebRequest_t951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m3947 (HttpWebRequest_t951 * __this, SerializationInfo_t653 * ___serializationInfo, StreamingContext_t654  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
