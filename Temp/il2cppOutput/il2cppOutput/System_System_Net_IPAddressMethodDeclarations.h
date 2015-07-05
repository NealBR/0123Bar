#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.IPAddress
struct IPAddress_t953;
// System.UInt16[]
struct UInt16U5BU5D_t952;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.IPAddress::.ctor(System.Int64)
extern "C" void IPAddress__ctor_m3948 (IPAddress_t953 * __this, int64_t ___addr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.ctor(System.UInt16[],System.Int64)
extern "C" void IPAddress__ctor_m3949 (IPAddress_t953 * __this, UInt16U5BU5D_t952* ___address, int64_t ___scopeId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.cctor()
extern "C" void IPAddress__cctor_m3950 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::SwapShort(System.Int16)
extern "C" int16_t IPAddress_SwapShort_m3951 (Object_t * __this /* static, unused */, int16_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::HostToNetworkOrder(System.Int16)
extern "C" int16_t IPAddress_HostToNetworkOrder_m3952 (Object_t * __this /* static, unused */, int16_t ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::NetworkToHostOrder(System.Int16)
extern "C" int16_t IPAddress_NetworkToHostOrder_m3953 (Object_t * __this /* static, unused */, int16_t ___network, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
extern "C" IPAddress_t953 * IPAddress_Parse_m3954 (Object_t * __this /* static, unused */, String_t* ___ipString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
extern "C" bool IPAddress_TryParse_m3955 (Object_t * __this /* static, unused */, String_t* ___ipString, IPAddress_t953 ** ___address, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV4(System.String)
extern "C" IPAddress_t953 * IPAddress_ParseIPV4_m3956 (Object_t * __this /* static, unused */, String_t* ___ip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV6(System.String)
extern "C" IPAddress_t953 * IPAddress_ParseIPV6_m3957 (Object_t * __this /* static, unused */, String_t* ___ip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_InternalIPv4Address()
extern "C" int64_t IPAddress_get_InternalIPv4Address_m3958 (IPAddress_t953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_ScopeId()
extern "C" int64_t IPAddress_get_ScopeId_m3959 (IPAddress_t953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
extern "C" int32_t IPAddress_get_AddressFamily_m3960 (IPAddress_t953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::IsLoopback(System.Net.IPAddress)
extern "C" bool IPAddress_IsLoopback_m3961 (Object_t * __this /* static, unused */, IPAddress_t953 * ___addr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString()
extern "C" String_t* IPAddress_ToString_m3962 (IPAddress_t953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString(System.Int64)
extern "C" String_t* IPAddress_ToString_m3963 (Object_t * __this /* static, unused */, int64_t ___addr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::Equals(System.Object)
extern "C" bool IPAddress_Equals_m3964 (IPAddress_t953 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::GetHashCode()
extern "C" int32_t IPAddress_GetHashCode_m3965 (IPAddress_t953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::Hash(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t IPAddress_Hash_m3966 (Object_t * __this /* static, unused */, int32_t ___i, int32_t ___j, int32_t ___k, int32_t ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
