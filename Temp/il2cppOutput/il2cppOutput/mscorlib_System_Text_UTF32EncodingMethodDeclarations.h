#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF32Encoding
struct UTF32Encoding_t1733;
// System.Char[]
struct CharU5BU5D_t179;
// System.Byte[]
struct ByteU5BU5D_t504;
// System.Text.Decoder
struct Decoder_t1442;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void System.Text.UTF32Encoding::.ctor()
extern "C" void UTF32Encoding__ctor_m9464 (UTF32Encoding_t1733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean)
extern "C" void UTF32Encoding__ctor_m9465 (UTF32Encoding_t1733 * __this, bool ___bigEndian, bool ___byteOrderMark, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
extern "C" void UTF32Encoding__ctor_m9466 (UTF32Encoding_t1733 * __this, bool ___bigEndian, bool ___byteOrderMark, bool ___throwOnInvalidCharacters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t UTF32Encoding_GetByteCount_m9467 (UTF32Encoding_t1733 * __this, CharU5BU5D_t179* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF32Encoding_GetBytes_m9468 (UTF32Encoding_t1733 * __this, CharU5BU5D_t179* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t504* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t UTF32Encoding_GetCharCount_m9469 (UTF32Encoding_t1733 * __this, ByteU5BU5D_t504* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF32Encoding_GetChars_m9470 (UTF32Encoding_t1733 * __this, ByteU5BU5D_t504* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t179* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetMaxByteCount(System.Int32)
extern "C" int32_t UTF32Encoding_GetMaxByteCount_m9471 (UTF32Encoding_t1733 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetMaxCharCount(System.Int32)
extern "C" int32_t UTF32Encoding_GetMaxCharCount_m9472 (UTF32Encoding_t1733 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF32Encoding::GetDecoder()
extern "C" Decoder_t1442 * UTF32Encoding_GetDecoder_m9473 (UTF32Encoding_t1733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UTF32Encoding::GetPreamble()
extern "C" ByteU5BU5D_t504* UTF32Encoding_GetPreamble_m9474 (UTF32Encoding_t1733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF32Encoding::Equals(System.Object)
extern "C" bool UTF32Encoding_Equals_m9475 (UTF32Encoding_t1733 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetHashCode()
extern "C" int32_t UTF32Encoding_GetHashCode_m9476 (UTF32Encoding_t1733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t UTF32Encoding_GetByteCount_m9477 (UTF32Encoding_t1733 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.String)
extern "C" int32_t UTF32Encoding_GetByteCount_m9478 (UTF32Encoding_t1733 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t UTF32Encoding_GetBytes_m9479 (UTF32Encoding_t1733 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF32Encoding_GetBytes_m9480 (UTF32Encoding_t1733 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t504* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF32Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* UTF32Encoding_GetString_m9481 (UTF32Encoding_t1733 * __this, ByteU5BU5D_t504* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
