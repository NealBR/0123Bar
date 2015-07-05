#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.DecoderReplacementFallbackBuffer
struct DecoderReplacementFallbackBuffer_t1723;
// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t1722;
// System.Byte[]
struct ByteU5BU5D_t504;

// System.Void System.Text.DecoderReplacementFallbackBuffer::.ctor(System.Text.DecoderReplacementFallback)
extern "C" void DecoderReplacementFallbackBuffer__ctor_m9361 (DecoderReplacementFallbackBuffer_t1723 * __this, DecoderReplacementFallback_t1722 * ___fallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderReplacementFallbackBuffer::get_Remaining()
extern "C" int32_t DecoderReplacementFallbackBuffer_get_Remaining_m9362 (DecoderReplacementFallbackBuffer_t1723 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderReplacementFallbackBuffer::Fallback(System.Byte[],System.Int32)
extern "C" bool DecoderReplacementFallbackBuffer_Fallback_m9363 (DecoderReplacementFallbackBuffer_t1723 * __this, ByteU5BU5D_t504* ___bytesUnknown, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderReplacementFallbackBuffer::GetNextChar()
extern "C" uint16_t DecoderReplacementFallbackBuffer_GetNextChar_m9364 (DecoderReplacementFallbackBuffer_t1723 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderReplacementFallbackBuffer::Reset()
extern "C" void DecoderReplacementFallbackBuffer_Reset_m9365 (DecoderReplacementFallbackBuffer_t1723 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
