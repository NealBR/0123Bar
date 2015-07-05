#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UnicodeEncoding
struct UnicodeEncoding_t1740;
// System.Char[]
struct CharU5BU5D_t179;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t504;
// System.Text.Decoder
struct Decoder_t1442;
// System.Object
struct Object_t;

// System.Void System.Text.UnicodeEncoding::.ctor()
extern "C" void UnicodeEncoding__ctor_m9537 (UnicodeEncoding_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean)
extern "C" void UnicodeEncoding__ctor_m9538 (UnicodeEncoding_t1740 * __this, bool ___bigEndian, bool ___byteOrderMark, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
extern "C" void UnicodeEncoding__ctor_m9539 (UnicodeEncoding_t1740 * __this, bool ___bigEndian, bool ___byteOrderMark, bool ___throwOnInvalidBytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t UnicodeEncoding_GetByteCount_m9540 (UnicodeEncoding_t1740 * __this, CharU5BU5D_t179* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.String)
extern "C" int32_t UnicodeEncoding_GetByteCount_m9541 (UnicodeEncoding_t1740 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t UnicodeEncoding_GetByteCount_m9542 (UnicodeEncoding_t1740 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UnicodeEncoding_GetBytes_m9543 (UnicodeEncoding_t1740 * __this, CharU5BU5D_t179* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t504* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UnicodeEncoding_GetBytes_m9544 (UnicodeEncoding_t1740 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t504* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t UnicodeEncoding_GetBytes_m9545 (UnicodeEncoding_t1740 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytesInternal(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t UnicodeEncoding_GetBytesInternal_m9546 (UnicodeEncoding_t1740 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t UnicodeEncoding_GetCharCount_m9547 (UnicodeEncoding_t1740 * __this, ByteU5BU5D_t504* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UnicodeEncoding_GetChars_m9548 (UnicodeEncoding_t1740 * __this, ByteU5BU5D_t504* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t179* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UnicodeEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* UnicodeEncoding_GetString_m9549 (UnicodeEncoding_t1740 * __this, ByteU5BU5D_t504* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharsInternal(System.Byte*,System.Int32,System.Char*,System.Int32)
extern "C" int32_t UnicodeEncoding_GetCharsInternal_m9550 (UnicodeEncoding_t1740 * __this, uint8_t* ___bytes, int32_t ___byteCount, uint16_t* ___chars, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxByteCount(System.Int32)
extern "C" int32_t UnicodeEncoding_GetMaxByteCount_m9551 (UnicodeEncoding_t1740 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxCharCount(System.Int32)
extern "C" int32_t UnicodeEncoding_GetMaxCharCount_m9552 (UnicodeEncoding_t1740 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UnicodeEncoding::GetDecoder()
extern "C" Decoder_t1442 * UnicodeEncoding_GetDecoder_m9553 (UnicodeEncoding_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UnicodeEncoding::GetPreamble()
extern "C" ByteU5BU5D_t504* UnicodeEncoding_GetPreamble_m9554 (UnicodeEncoding_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UnicodeEncoding::Equals(System.Object)
extern "C" bool UnicodeEncoding_Equals_m9555 (UnicodeEncoding_t1740 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetHashCode()
extern "C" int32_t UnicodeEncoding_GetHashCode_m9556 (UnicodeEncoding_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::CopyChars(System.Byte*,System.Byte*,System.Int32,System.Boolean)
extern "C" void UnicodeEncoding_CopyChars_m9557 (Object_t * __this /* static, unused */, uint8_t* ___src, uint8_t* ___dest, int32_t ___count, bool ___bigEndian, MethodInfo* method) IL2CPP_METHOD_ATTR;
