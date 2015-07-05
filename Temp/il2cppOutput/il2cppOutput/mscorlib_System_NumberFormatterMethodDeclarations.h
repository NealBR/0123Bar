#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.NumberFormatter
struct NumberFormatter_t1811;
// System.Globalization.CultureInfo
struct CultureInfo_t702;
// System.Threading.Thread
struct Thread_t1575;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1295;
// System.IFormatProvider
struct IFormatProvider_t707;
// System.Text.StringBuilder
struct StringBuilder_t265;
// System.Int32[]
struct Int32U5BU5D_t1029;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.NumberFormatter::.ctor(System.Threading.Thread)
extern "C" void NumberFormatter__ctor_m10166 (NumberFormatter_t1811 * __this, Thread_t1575 * ___current, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::.cctor()
extern "C" void NumberFormatter__cctor_m10167 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)
extern "C" void NumberFormatter_GetFormatterTables_m10168 (Object_t * __this /* static, unused */, uint64_t** ___MantissaBitsTable, int32_t** ___TensExponentTable, uint16_t** ___DigitLowerTable, uint16_t** ___DigitUpperTable, int64_t** ___TenPowersList, int32_t** ___DecHexDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.NumberFormatter::GetTenPowerOf(System.Int32)
extern "C" int64_t NumberFormatter_GetTenPowerOf_m10169 (Object_t * __this /* static, unused */, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32)
extern "C" void NumberFormatter_InitDecHexDigits_m10170 (NumberFormatter_t1811 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt64)
extern "C" void NumberFormatter_InitDecHexDigits_m10171 (NumberFormatter_t1811 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32,System.UInt64)
extern "C" void NumberFormatter_InitDecHexDigits_m10172 (NumberFormatter_t1811 * __this, uint32_t ___hi, uint64_t ___lo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::FastToDecHex(System.Int32)
extern "C" uint32_t NumberFormatter_FastToDecHex_m10173 (Object_t * __this /* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::ToDecHex(System.Int32)
extern "C" uint32_t NumberFormatter_ToDecHex_m10174 (Object_t * __this /* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::FastDecHexLen(System.Int32)
extern "C" int32_t NumberFormatter_FastDecHexLen_m10175 (Object_t * __this /* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen(System.UInt32)
extern "C" int32_t NumberFormatter_DecHexLen_m10176 (Object_t * __this /* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen()
extern "C" int32_t NumberFormatter_DecHexLen_m10177 (NumberFormatter_t1811 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ScaleOrder(System.Int64)
extern "C" int32_t NumberFormatter_ScaleOrder_m10178 (Object_t * __this /* static, unused */, int64_t ___hi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::InitialFloatingPrecision()
extern "C" int32_t NumberFormatter_InitialFloatingPrecision_m10179 (NumberFormatter_t1811 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ParsePrecision(System.String)
extern "C" int32_t NumberFormatter_ParsePrecision_m10180 (Object_t * __this /* static, unused */, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String)
extern "C" void NumberFormatter_Init_m10181 (NumberFormatter_t1811 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitHex(System.UInt64)
extern "C" void NumberFormatter_InitHex_m10182 (NumberFormatter_t1811 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int32,System.Int32)
extern "C" void NumberFormatter_Init_m10183 (NumberFormatter_t1811 * __this, String_t* ___format, int32_t ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt32,System.Int32)
extern "C" void NumberFormatter_Init_m10184 (NumberFormatter_t1811 * __this, String_t* ___format, uint32_t ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int64)
extern "C" void NumberFormatter_Init_m10185 (NumberFormatter_t1811 * __this, String_t* ___format, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt64)
extern "C" void NumberFormatter_Init_m10186 (NumberFormatter_t1811 * __this, String_t* ___format, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Double,System.Int32)
extern "C" void NumberFormatter_Init_m10187 (NumberFormatter_t1811 * __this, String_t* ___format, double ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Decimal)
extern "C" void NumberFormatter_Init_m10188 (NumberFormatter_t1811 * __this, String_t* ___format, Decimal_t709  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ResetCharBuf(System.Int32)
extern "C" void NumberFormatter_ResetCharBuf_m10189 (NumberFormatter_t1811 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Resize(System.Int32)
extern "C" void NumberFormatter_Resize_m10190 (NumberFormatter_t1811 * __this, int32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char)
extern "C" void NumberFormatter_Append_m10191 (NumberFormatter_t1811 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char,System.Int32)
extern "C" void NumberFormatter_Append_m10192 (NumberFormatter_t1811 * __this, uint16_t ___c, int32_t ___cnt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.String)
extern "C" void NumberFormatter_Append_m10193 (NumberFormatter_t1811 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.NumberFormatter::GetNumberFormatInstance(System.IFormatProvider)
extern "C" NumberFormatInfo_t1295 * NumberFormatter_GetNumberFormatInstance_m10194 (NumberFormatter_t1811 * __this, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::set_CurrentCulture(System.Globalization.CultureInfo)
extern "C" void NumberFormatter_set_CurrentCulture_m10195 (NumberFormatter_t1811 * __this, CultureInfo_t702 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_IntegerDigits()
extern "C" int32_t NumberFormatter_get_IntegerDigits_m10196 (NumberFormatter_t1811 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_DecimalDigits()
extern "C" int32_t NumberFormatter_get_DecimalDigits_m10197 (NumberFormatter_t1811 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsFloatingSource()
extern "C" bool NumberFormatter_get_IsFloatingSource_m10198 (NumberFormatter_t1811 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZero()
extern "C" bool NumberFormatter_get_IsZero_m10199 (NumberFormatter_t1811 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZeroInteger()
extern "C" bool NumberFormatter_get_IsZeroInteger_m10200 (NumberFormatter_t1811 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RoundPos(System.Int32)
extern "C" void NumberFormatter_RoundPos_m10201 (NumberFormatter_t1811 * __this, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundDecimal(System.Int32)
extern "C" bool NumberFormatter_RoundDecimal_m10202 (NumberFormatter_t1811 * __this, int32_t ___decimals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundBits(System.Int32)
extern "C" bool NumberFormatter_RoundBits_m10203 (NumberFormatter_t1811 * __this, int32_t ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RemoveTrailingZeros()
extern "C" void NumberFormatter_RemoveTrailingZeros_m10204 (NumberFormatter_t1811 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AddOneToDecHex()
extern "C" void NumberFormatter_AddOneToDecHex_m10205 (NumberFormatter_t1811 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::AddOneToDecHex(System.UInt32)
extern "C" uint32_t NumberFormatter_AddOneToDecHex_m10206 (Object_t * __this /* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros()
extern "C" int32_t NumberFormatter_CountTrailingZeros_m10207 (NumberFormatter_t1811 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros(System.UInt32)
extern "C" int32_t NumberFormatter_CountTrailingZeros_m10208 (Object_t * __this /* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetInstance()
extern "C" NumberFormatter_t1811 * NumberFormatter_GetInstance_m10209 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Release()
extern "C" void NumberFormatter_Release_m10210 (NumberFormatter_t1811 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::SetThreadCurrentCulture(System.Globalization.CultureInfo)
extern "C" void NumberFormatter_SetThreadCurrentCulture_m10211 (Object_t * __this /* static, unused */, CultureInfo_t702 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.SByte,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10212 (Object_t * __this /* static, unused */, String_t* ___format, int8_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Byte,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10213 (Object_t * __this /* static, unused */, String_t* ___format, uint8_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt16,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10214 (Object_t * __this /* static, unused */, String_t* ___format, uint16_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int16,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10215 (Object_t * __this /* static, unused */, String_t* ___format, int16_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10216 (Object_t * __this /* static, unused */, String_t* ___format, uint32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10217 (Object_t * __this /* static, unused */, String_t* ___format, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt64,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10218 (Object_t * __this /* static, unused */, String_t* ___format, uint64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int64,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10219 (Object_t * __this /* static, unused */, String_t* ___format, int64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Single,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10220 (Object_t * __this /* static, unused */, String_t* ___format, float ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Double,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10221 (Object_t * __this /* static, unused */, String_t* ___format, double ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Decimal,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10222 (Object_t * __this /* static, unused */, String_t* ___format, Decimal_t709  ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10223 (Object_t * __this /* static, unused */, uint32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10224 (Object_t * __this /* static, unused */, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt64,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10225 (Object_t * __this /* static, unused */, uint64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int64,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10226 (Object_t * __this /* static, unused */, int64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Single,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10227 (Object_t * __this /* static, unused */, float ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Double,System.IFormatProvider)
extern "C" String_t* NumberFormatter_NumberToString_m10228 (Object_t * __this /* static, unused */, double ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FastIntegerToString(System.Int32,System.IFormatProvider)
extern "C" String_t* NumberFormatter_FastIntegerToString_m10229 (NumberFormatter_t1811 * __this, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::IntegerToString(System.String,System.IFormatProvider)
extern "C" String_t* NumberFormatter_IntegerToString_m10230 (NumberFormatter_t1811 * __this, String_t* ___format, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_NumberToString_m10231 (NumberFormatter_t1811 * __this, String_t* ___format, NumberFormatInfo_t1295 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCurrency(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatCurrency_m10232 (NumberFormatter_t1811 * __this, int32_t ___precision, NumberFormatInfo_t1295 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatDecimal(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatDecimal_m10233 (NumberFormatter_t1811 * __this, int32_t ___precision, NumberFormatInfo_t1295 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatHexadecimal(System.Int32)
extern "C" String_t* NumberFormatter_FormatHexadecimal_m10234 (NumberFormatter_t1811 * __this, int32_t ___precision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatFixedPoint(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatFixedPoint_m10235 (NumberFormatter_t1811 * __this, int32_t ___precision, NumberFormatInfo_t1295 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Double,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatRoundtrip_m10236 (NumberFormatter_t1811 * __this, double ___origval, NumberFormatInfo_t1295 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Single,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatRoundtrip_m10237 (NumberFormatter_t1811 * __this, float ___origval, NumberFormatInfo_t1295 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatGeneral(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatGeneral_m10238 (NumberFormatter_t1811 * __this, int32_t ___precision, NumberFormatInfo_t1295 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatNumber(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatNumber_m10239 (NumberFormatter_t1811 * __this, int32_t ___precision, NumberFormatInfo_t1295 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatPercent(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatPercent_m10240 (NumberFormatter_t1811 * __this, int32_t ___precision, NumberFormatInfo_t1295 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatExponential_m10241 (NumberFormatter_t1811 * __this, int32_t ___precision, NumberFormatInfo_t1295 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo,System.Int32)
extern "C" String_t* NumberFormatter_FormatExponential_m10242 (NumberFormatter_t1811 * __this, int32_t ___precision, NumberFormatInfo_t1295 * ___nfi, int32_t ___expDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCustom(System.String,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatCustom_m10243 (NumberFormatter_t1811 * __this, String_t* ___format, NumberFormatInfo_t1295 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ZeroTrimEnd(System.Text.StringBuilder,System.Boolean)
extern "C" void NumberFormatter_ZeroTrimEnd_m10244 (Object_t * __this /* static, unused */, StringBuilder_t265 * ___sb, bool ___canEmpty, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::IsZeroOnly(System.Text.StringBuilder)
extern "C" bool NumberFormatter_IsZeroOnly_m10245 (Object_t * __this /* static, unused */, StringBuilder_t265 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendNonNegativeNumber(System.Text.StringBuilder,System.Int32)
extern "C" void NumberFormatter_AppendNonNegativeNumber_m10246 (Object_t * __this /* static, unused */, StringBuilder_t265 * ___sb, int32_t ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32,System.Text.StringBuilder)
extern "C" void NumberFormatter_AppendIntegerString_m10247 (NumberFormatter_t1811 * __this, int32_t ___minLength, StringBuilder_t265 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32)
extern "C" void NumberFormatter_AppendIntegerString_m10248 (NumberFormatter_t1811 * __this, int32_t ___minLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32,System.Text.StringBuilder)
extern "C" void NumberFormatter_AppendDecimalString_m10249 (NumberFormatter_t1811 * __this, int32_t ___precision, StringBuilder_t265 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32)
extern "C" void NumberFormatter_AppendDecimalString_m10250 (NumberFormatter_t1811 * __this, int32_t ___precision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerStringWithGroupSeparator(System.Int32[],System.String)
extern "C" void NumberFormatter_AppendIntegerStringWithGroupSeparator_m10251 (NumberFormatter_t1811 * __this, Int32U5BU5D_t1029* ___groups, String_t* ___groupSeparator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendExponent(System.Globalization.NumberFormatInfo,System.Int32,System.Int32)
extern "C" void NumberFormatter_AppendExponent_m10252 (NumberFormatter_t1811 * __this, NumberFormatInfo_t1295 * ___nfi, int32_t ___exponent, int32_t ___minDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendOneDigit(System.Int32)
extern "C" void NumberFormatter_AppendOneDigit_m10253 (NumberFormatter_t1811 * __this, int32_t ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::FastAppendDigits(System.Int32,System.Boolean)
extern "C" void NumberFormatter_FastAppendDigits_m10254 (NumberFormatter_t1811 * __this, int32_t ___val, bool ___force, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32)
extern "C" void NumberFormatter_AppendDigits_m10255 (NumberFormatter_t1811 * __this, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32,System.Text.StringBuilder)
extern "C" void NumberFormatter_AppendDigits_m10256 (NumberFormatter_t1811 * __this, int32_t ___start, int32_t ___end, StringBuilder_t265 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Multiply10(System.Int32)
extern "C" void NumberFormatter_Multiply10_m10257 (NumberFormatter_t1811 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Divide10(System.Int32)
extern "C" void NumberFormatter_Divide10_m10258 (NumberFormatter_t1811 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetClone()
extern "C" NumberFormatter_t1811 * NumberFormatter_GetClone_m10259 (NumberFormatter_t1811 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
