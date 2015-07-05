﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Enum
struct Enum_t334;
// System.Object
struct Object_t;
// System.IFormatProvider
struct IFormatProvider_t707;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t911;
// System.String[]
struct StringU5BU5D_t423;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Void System.Enum::.ctor()
extern "C" void Enum__ctor_m6630 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Enum::.cctor()
extern "C" void Enum__cctor_m6631 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Enum::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Enum_System_IConvertible_ToBoolean_m1936 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Enum::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Enum_System_IConvertible_ToByte_m1937 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Enum::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Enum_System_IConvertible_ToChar_m1938 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Enum::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t465  Enum_System_IConvertible_ToDateTime_m1939 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Enum::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t709  Enum_System_IConvertible_ToDecimal_m1940 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Enum::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Enum_System_IConvertible_ToDouble_m1941 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Enum::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Enum_System_IConvertible_ToInt16_m1942 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Enum_System_IConvertible_ToInt32_m1943 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Enum::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Enum_System_IConvertible_ToInt64_m1944 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Enum::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Enum_System_IConvertible_ToSByte_m1945 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Enum::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Enum_System_IConvertible_ToSingle_m1946 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Enum_System_IConvertible_ToType_m1948 (Object_t * __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Enum::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Enum_System_IConvertible_ToUInt16_m1949 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Enum::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Enum_System_IConvertible_ToUInt32_m1950 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Enum::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Enum_System_IConvertible_ToUInt64_m1951 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Enum::GetTypeCode()
extern "C" int32_t Enum_GetTypeCode_m1953 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::get_value()
extern "C" Object_t * Enum_get_value_m6632 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::get_Value()
extern "C" Object_t * Enum_get_Value_m6633 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::FindPosition(System.Object,System.Array)
extern "C" int32_t Enum_FindPosition_m6634 (Object_t * __this /* static, unused */, Object_t * ___value, Array_t * ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::GetName(System.Type,System.Object)
extern "C" String_t* Enum_GetName_m6635 (Object_t * __this /* static, unused */, Type_t * ___enumType, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
extern "C" bool Enum_IsDefined_m6000 (Object_t * __this /* static, unused */, Type_t * ___enumType, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Enum::get_underlying_type(System.Type)
extern "C" Type_t * Enum_get_underlying_type_m6636 (Object_t * __this /* static, unused */, Type_t * ___enumType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Enum::GetUnderlyingType(System.Type)
extern "C" Type_t * Enum_GetUnderlyingType_m6637 (Object_t * __this /* static, unused */, Type_t * ___enumType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::FindName(System.Collections.Hashtable,System.String[],System.String,System.Boolean)
extern "C" int32_t Enum_FindName_m6638 (Object_t * __this /* static, unused */, Hashtable_t911 * ___name_hash, StringU5BU5D_t423* ___names, String_t* ___name, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Enum::GetValue(System.Object,System.TypeCode)
extern "C" uint64_t Enum_GetValue_m6639 (Object_t * __this /* static, unused */, Object_t * ___value, int32_t ___typeCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
extern "C" Object_t * Enum_Parse_m4954 (Object_t * __this /* static, unused */, Type_t * ___enumType, String_t* ___value, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::compare_value_to(System.Object)
extern "C" int32_t Enum_compare_value_to_m6640 (Object_t * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::CompareTo(System.Object)
extern "C" int32_t Enum_CompareTo_m1952 (Object_t * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString()
extern "C" String_t* Enum_ToString_m1934 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString(System.IFormatProvider)
extern "C" String_t* Enum_ToString_m1947 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString(System.String)
extern "C" String_t* Enum_ToString_m3418 (Object_t * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Enum_ToString_m1935 (Object_t * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Byte)
extern "C" Object_t * Enum_ToObject_m6641 (Object_t * __this /* static, unused */, Type_t * ___enumType, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Int16)
extern "C" Object_t * Enum_ToObject_m6642 (Object_t * __this /* static, unused */, Type_t * ___enumType, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Int32)
extern "C" Object_t * Enum_ToObject_m6643 (Object_t * __this /* static, unused */, Type_t * ___enumType, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Int64)
extern "C" Object_t * Enum_ToObject_m6644 (Object_t * __this /* static, unused */, Type_t * ___enumType, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Object)
extern "C" Object_t * Enum_ToObject_m6645 (Object_t * __this /* static, unused */, Type_t * ___enumType, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.SByte)
extern "C" Object_t * Enum_ToObject_m6646 (Object_t * __this /* static, unused */, Type_t * ___enumType, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.UInt16)
extern "C" Object_t * Enum_ToObject_m6647 (Object_t * __this /* static, unused */, Type_t * ___enumType, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.UInt32)
extern "C" Object_t * Enum_ToObject_m6648 (Object_t * __this /* static, unused */, Type_t * ___enumType, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.UInt64)
extern "C" Object_t * Enum_ToObject_m6649 (Object_t * __this /* static, unused */, Type_t * ___enumType, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Enum::Equals(System.Object)
extern "C" bool Enum_Equals_m1932 (Object_t * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::get_hashcode()
extern "C" int32_t Enum_get_hashcode_m6650 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::GetHashCode()
extern "C" int32_t Enum_GetHashCode_m1933 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::FormatSpecifier_X(System.Type,System.Object,System.Boolean)
extern "C" String_t* Enum_FormatSpecifier_X_m6651 (Object_t * __this /* static, unused */, Type_t * ___enumType, Object_t * ___value, bool ___upper, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::FormatFlags(System.Type,System.Object)
extern "C" String_t* Enum_FormatFlags_m6652 (Object_t * __this /* static, unused */, Type_t * ___enumType, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::Format(System.Type,System.Object,System.String)
extern "C" String_t* Enum_Format_m6653 (Object_t * __this /* static, unused */, Type_t * ___enumType, Object_t * ___value, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
