#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UInt64
struct UInt64_t708;
// System.IFormatProvider
struct IFormatProvider_t707;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t275;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Boolean System.UInt64::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool UInt64_System_IConvertible_ToBoolean_m6165 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.UInt64::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t UInt64_System_IConvertible_ToByte_m6166 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.UInt64::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t UInt64_System_IConvertible_ToChar_m6167 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.UInt64::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t465  UInt64_System_IConvertible_ToDateTime_m6168 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.UInt64::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t709  UInt64_System_IConvertible_ToDecimal_m6169 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.UInt64::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double UInt64_System_IConvertible_ToDouble_m6170 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.UInt64::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t UInt64_System_IConvertible_ToInt16_m6171 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t UInt64_System_IConvertible_ToInt32_m6172 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.UInt64::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t UInt64_System_IConvertible_ToInt64_m6173 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.UInt64::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t UInt64_System_IConvertible_ToSByte_m6174 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.UInt64::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float UInt64_System_IConvertible_ToSingle_m6175 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UInt64::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * UInt64_System_IConvertible_ToType_m6176 (uint64_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.UInt64::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t UInt64_System_IConvertible_ToUInt16_m6177 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt64::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t UInt64_System_IConvertible_ToUInt32_m6178 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt64::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t UInt64_System_IConvertible_ToUInt64_m6179 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::CompareTo(System.Object)
extern "C" int32_t UInt64_CompareTo_m6180 (uint64_t* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::Equals(System.Object)
extern "C" bool UInt64_Equals_m6181 (uint64_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::GetHashCode()
extern "C" int32_t UInt64_GetHashCode_m6182 (uint64_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::CompareTo(System.UInt64)
extern "C" int32_t UInt64_CompareTo_m6183 (uint64_t* __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::Equals(System.UInt64)
extern "C" bool UInt64_Equals_m6184 (uint64_t* __this, uint64_t ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt64::Parse(System.String,System.IFormatProvider)
extern "C" uint64_t UInt64_Parse_m6185 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.UInt64&,System.Exception&)
extern "C" bool UInt64_Parse_m6186 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, bool ___tryParse, uint64_t* ___result, Exception_t275 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" uint64_t UInt64_Parse_m6187 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::TryParse(System.String,System.UInt64&)
extern "C" bool UInt64_TryParse_m3436 (Object_t * __this /* static, unused */, String_t* ___s, uint64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString()
extern "C" String_t* UInt64_ToString_m6188 (uint64_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.IFormatProvider)
extern "C" String_t* UInt64_ToString_m3483 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.String)
extern "C" String_t* UInt64_ToString_m6189 (uint64_t* __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.String,System.IFormatProvider)
extern "C" String_t* UInt64_ToString_m6190 (uint64_t* __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
