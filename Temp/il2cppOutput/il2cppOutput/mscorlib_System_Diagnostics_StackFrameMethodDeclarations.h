#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.StackFrame
struct StackFrame_t739;
// System.Reflection.MethodBase
struct MethodBase_t718;
// System.String
struct String_t;

// System.Void System.Diagnostics.StackFrame::.ctor()
extern "C" void StackFrame__ctor_m7541 (StackFrame_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackFrame::.ctor(System.Int32,System.Boolean)
extern "C" void StackFrame__ctor_m7542 (StackFrame_t739 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.StackFrame::get_frame_info(System.Int32,System.Boolean,System.Reflection.MethodBase&,System.Int32&,System.Int32&,System.String&,System.Int32&,System.Int32&)
extern "C" bool StackFrame_get_frame_info_m7543 (Object_t * __this /* static, unused */, int32_t ___skip, bool ___needFileInfo, MethodBase_t718 ** ___method, int32_t* ___iloffset, int32_t* ___native_offset, String_t** ___file, int32_t* ___line, int32_t* ___column, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber()
extern "C" int32_t StackFrame_GetFileLineNumber_m3571 (StackFrame_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetFileName()
extern "C" String_t* StackFrame_GetFileName_m3570 (StackFrame_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetSecureFileName()
extern "C" String_t* StackFrame_GetSecureFileName_m7544 (StackFrame_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetILOffset()
extern "C" int32_t StackFrame_GetILOffset_m7545 (StackFrame_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod()
extern "C" MethodBase_t718 * StackFrame_GetMethod_m3567 (StackFrame_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetNativeOffset()
extern "C" int32_t StackFrame_GetNativeOffset_m7546 (StackFrame_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetInternalMethodName()
extern "C" String_t* StackFrame_GetInternalMethodName_m7547 (StackFrame_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::ToString()
extern "C" String_t* StackFrame_ToString_m7548 (StackFrame_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
