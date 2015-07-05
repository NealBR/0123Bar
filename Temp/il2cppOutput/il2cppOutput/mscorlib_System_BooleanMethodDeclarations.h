﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Boolean
struct Boolean_t13;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t707;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Void System.Boolean::.cctor()
extern "C" void Boolean__cctor_m6551 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Boolean::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Boolean_System_IConvertible_ToType_m6552 (bool* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Boolean_System_IConvertible_ToBoolean_m6553 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Boolean::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Boolean_System_IConvertible_ToByte_m6554 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Boolean::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Boolean_System_IConvertible_ToChar_m6555 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Boolean::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t465  Boolean_System_IConvertible_ToDateTime_m6556 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Boolean::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t709  Boolean_System_IConvertible_ToDecimal_m6557 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Boolean::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Boolean_System_IConvertible_ToDouble_m6558 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Boolean::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Boolean_System_IConvertible_ToInt16_m6559 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Boolean_System_IConvertible_ToInt32_m6560 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Boolean::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Boolean_System_IConvertible_ToInt64_m6561 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Boolean::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Boolean_System_IConvertible_ToSByte_m6562 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Boolean::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Boolean_System_IConvertible_ToSingle_m6563 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Boolean::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Boolean_System_IConvertible_ToUInt16_m6564 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Boolean::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Boolean_System_IConvertible_ToUInt32_m6565 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Boolean::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Boolean_System_IConvertible_ToUInt64_m6566 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::CompareTo(System.Object)
extern "C" int32_t Boolean_CompareTo_m6567 (bool* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::Equals(System.Object)
extern "C" bool Boolean_Equals_m6568 (bool* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::CompareTo(System.Boolean)
extern "C" int32_t Boolean_CompareTo_m6569 (bool* __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::Equals(System.Boolean)
extern "C" bool Boolean_Equals_m6570 (bool* __this, bool ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::GetHashCode()
extern "C" int32_t Boolean_GetHashCode_m6571 (bool* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::Parse(System.String)
extern "C" bool Boolean_Parse_m6572 (Object_t * __this /* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString()
extern "C" String_t* Boolean_ToString_m3439 (bool* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Boolean::GetTypeCode()
extern "C" int32_t Boolean_GetTypeCode_m6573 (bool* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString(System.IFormatProvider)
extern "C" String_t* Boolean_ToString_m6574 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
