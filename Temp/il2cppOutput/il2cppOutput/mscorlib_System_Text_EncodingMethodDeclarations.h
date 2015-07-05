#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Encoding
struct Encoding_t503;
// System.Text.DecoderFallback
struct DecoderFallback_t1718;
// System.Text.EncoderFallback
struct EncoderFallback_t1725;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t179;
// System.Byte[]
struct ByteU5BU5D_t504;
// System.Text.Decoder
struct Decoder_t1442;
// System.Object[]
struct ObjectU5BU5D_t269;

// System.Void System.Text.Encoding::.ctor()
extern "C" void Encoding__ctor_m9399 (Encoding_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.ctor(System.Int32)
extern "C" void Encoding__ctor_m9400 (Encoding_t503 * __this, int32_t ___codePage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.cctor()
extern "C" void Encoding__cctor_m9401 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::_(System.String)
extern "C" String_t* Encoding___m9402 (Object_t * __this /* static, unused */, String_t* ___arg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::get_IsReadOnly()
extern "C" bool Encoding_get_IsReadOnly_m9403 (Encoding_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallback System.Text.Encoding::get_DecoderFallback()
extern "C" DecoderFallback_t1718 * Encoding_get_DecoderFallback_m9404 (Encoding_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::set_DecoderFallback(System.Text.DecoderFallback)
extern "C" void Encoding_set_DecoderFallback_m9405 (Encoding_t503 * __this, DecoderFallback_t1718 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallback System.Text.Encoding::get_EncoderFallback()
extern "C" EncoderFallback_t1725 * Encoding_get_EncoderFallback_m9406 (Encoding_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::SetFallbackInternal(System.Text.EncoderFallback,System.Text.DecoderFallback)
extern "C" void Encoding_SetFallbackInternal_m9407 (Encoding_t503 * __this, EncoderFallback_t1725 * ___e, DecoderFallback_t1718 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::Equals(System.Object)
extern "C" bool Encoding_Equals_m9408 (Encoding_t503 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
// System.Int32 System.Text.Encoding::GetByteCount(System.String)
extern "C" int32_t Encoding_GetByteCount_m9409 (Encoding_t503 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char[])
extern "C" int32_t Encoding_GetByteCount_m9410 (Encoding_t503 * __this, CharU5BU5D_t179* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
// System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t Encoding_GetBytes_m5924 (Encoding_t503 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t504* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.String)
extern "C" ByteU5BU5D_t504* Encoding_GetBytes_m3394 (Encoding_t503 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t504* Encoding_GetBytes_m9411 (Encoding_t503 * __this, CharU5BU5D_t179* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[])
extern "C" ByteU5BU5D_t504* Encoding_GetBytes_m5016 (Encoding_t503 * __this, CharU5BU5D_t179* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
// System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
// System.Char[] System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32)
extern "C" CharU5BU5D_t179* Encoding_GetChars_m9412 (Encoding_t503 * __this, ByteU5BU5D_t504* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.Encoding::GetDecoder()
extern "C" Decoder_t1442 * Encoding_GetDecoder_m9413 (Encoding_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.Encoding::InvokeI18N(System.String,System.Object[])
extern "C" Object_t * Encoding_InvokeI18N_m9414 (Object_t * __this /* static, unused */, String_t* ___name, ObjectU5BU5D_t269* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.Int32)
extern "C" Encoding_t503 * Encoding_GetEncoding_m9415 (Object_t * __this /* static, unused */, int32_t ___codepage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
extern "C" Encoding_t503 * Encoding_GetEncoding_m3378 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetHashCode()
extern "C" int32_t Encoding_GetHashCode_m9416 (Encoding_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetMaxByteCount(System.Int32)
// System.Int32 System.Text.Encoding::GetMaxCharCount(System.Int32)
// System.Byte[] System.Text.Encoding::GetPreamble()
extern "C" ByteU5BU5D_t504* Encoding_GetPreamble_m9417 (Encoding_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* Encoding_GetString_m3371 (Encoding_t503 * __this, ByteU5BU5D_t504* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[])
extern "C" String_t* Encoding_GetString_m4858 (Encoding_t503 * __this, ByteU5BU5D_t504* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::get_HeaderName()
extern "C" String_t* Encoding_get_HeaderName_m3398 (Encoding_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::get_WebName()
extern "C" String_t* Encoding_get_WebName_m3407 (Encoding_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
extern "C" Encoding_t503 * Encoding_get_ASCII_m3372 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUnicode()
extern "C" Encoding_t503 * Encoding_get_BigEndianUnicode_m5923 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::InternalCodePage(System.Int32&)
extern "C" String_t* Encoding_InternalCodePage_m9418 (Object_t * __this /* static, unused */, int32_t* ___code_page, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Default()
extern "C" Encoding_t503 * Encoding_get_Default_m9419 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ISOLatin1()
extern "C" Encoding_t503 * Encoding_get_ISOLatin1_m9420 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF7()
extern "C" Encoding_t503 * Encoding_get_UTF7_m5935 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" Encoding_t503 * Encoding_get_UTF8_m3379 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8Unmarked()
extern "C" Encoding_t503 * Encoding_get_UTF8Unmarked_m9421 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8UnmarkedUnsafe()
extern "C" Encoding_t503 * Encoding_get_UTF8UnmarkedUnsafe_m9422 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Unicode()
extern "C" Encoding_t503 * Encoding_get_Unicode_m9423 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF32()
extern "C" Encoding_t503 * Encoding_get_UTF32_m9424 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUTF32()
extern "C" Encoding_t503 * Encoding_get_BigEndianUTF32_m9425 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t Encoding_GetByteCount_m9426 (Encoding_t503 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t Encoding_GetBytes_m9427 (Encoding_t503 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
