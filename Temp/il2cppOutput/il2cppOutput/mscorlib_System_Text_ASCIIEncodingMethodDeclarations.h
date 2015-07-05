#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t1715;
// System.Char[]
struct CharU5BU5D_t179;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t504;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1716;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1717;
// System.Text.Decoder
struct Decoder_t1442;

// System.Void System.Text.ASCIIEncoding::.ctor()
extern "C" void ASCIIEncoding__ctor_m9318 (ASCIIEncoding_t1715 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m9319 (ASCIIEncoding_t1715 * __this, CharU5BU5D_t179* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
extern "C" int32_t ASCIIEncoding_GetByteCount_m9320 (ASCIIEncoding_t1715 * __this, String_t* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m9321 (ASCIIEncoding_t1715 * __this, CharU5BU5D_t179* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t504* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m9322 (ASCIIEncoding_t1715 * __this, CharU5BU5D_t179* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t504* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1716 ** ___buffer, CharU5BU5D_t179** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m9323 (ASCIIEncoding_t1715 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t504* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m9324 (ASCIIEncoding_t1715 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t504* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1716 ** ___buffer, CharU5BU5D_t179** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetCharCount_m9325 (ASCIIEncoding_t1715 * __this, ByteU5BU5D_t504* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetChars_m9326 (ASCIIEncoding_t1715 * __this, ByteU5BU5D_t504* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t179* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
extern "C" int32_t ASCIIEncoding_GetChars_m9327 (ASCIIEncoding_t1715 * __this, ByteU5BU5D_t504* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t179* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t1717 ** ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxByteCount_m9328 (ASCIIEncoding_t1715 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxCharCount_m9329 (ASCIIEncoding_t1715 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* ASCIIEncoding_GetString_m9330 (ASCIIEncoding_t1715 * __this, ByteU5BU5D_t504* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m9331 (ASCIIEncoding_t1715 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m9332 (ASCIIEncoding_t1715 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
extern "C" Decoder_t1442 * ASCIIEncoding_GetDecoder_m9333 (ASCIIEncoding_t1715 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
