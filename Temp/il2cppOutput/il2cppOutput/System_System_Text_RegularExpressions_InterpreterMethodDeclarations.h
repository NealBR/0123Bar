﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interpreter
struct Interpreter_t1053;
// System.UInt16[]
struct UInt16U5BU5D_t952;
// System.Text.RegularExpressions.Match
struct Match_t1014;
// System.Text.RegularExpressions.Regex
struct Regex_t740;
// System.String
struct String_t;
// System.Text.RegularExpressions.Group
struct Group_t1021;
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_Mode.h"
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"

// System.Void System.Text.RegularExpressions.Interpreter::.ctor(System.UInt16[])
extern "C" void Interpreter__ctor_m4446 (Interpreter_t1053 * __this, UInt16U5BU5D_t952* ___program, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::ReadProgramCount(System.Int32)
extern "C" int32_t Interpreter_ReadProgramCount_m4447 (Interpreter_t1053 * __this, int32_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" Match_t1014 * Interpreter_Scan_m4448 (Interpreter_t1053 * __this, Regex_t740 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Reset()
extern "C" void Interpreter_Reset_m4449 (Interpreter_t1053 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::Eval(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32)
extern "C" bool Interpreter_Eval_m4450 (Interpreter_t1053 * __this, int32_t ___mode, int32_t* ___ref_ptr, int32_t ___pc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::EvalChar(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32&,System.Boolean)
extern "C" bool Interpreter_EvalChar_m4451 (Interpreter_t1053 * __this, int32_t ___mode, int32_t* ___ptr, int32_t* ___pc, bool ___multi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::TryMatch(System.Int32&,System.Int32)
extern "C" bool Interpreter_TryMatch_m4452 (Interpreter_t1053 * __this, int32_t* ___ref_ptr, int32_t ___pc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::IsPosition(System.Text.RegularExpressions.Position,System.Int32)
extern "C" bool Interpreter_IsPosition_m4453 (Interpreter_t1053 * __this, uint16_t ___pos, int32_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::IsWordChar(System.Char)
extern "C" bool Interpreter_IsWordChar_m4454 (Interpreter_t1053 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Interpreter::GetString(System.Int32)
extern "C" String_t* Interpreter_GetString_m4455 (Interpreter_t1053 * __this, int32_t ___pc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Open(System.Int32,System.Int32)
extern "C" void Interpreter_Open_m4456 (Interpreter_t1053 * __this, int32_t ___gid, int32_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Close(System.Int32,System.Int32)
extern "C" void Interpreter_Close_m4457 (Interpreter_t1053 * __this, int32_t ___gid, int32_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C" bool Interpreter_Balance_m4458 (Interpreter_t1053 * __this, int32_t ___gid, int32_t ___balance_gid, bool ___capture, int32_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::Checkpoint()
extern "C" int32_t Interpreter_Checkpoint_m4459 (Interpreter_t1053 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Backtrack(System.Int32)
extern "C" void Interpreter_Backtrack_m4460 (Interpreter_t1053 * __this, int32_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::ResetGroups()
extern "C" void Interpreter_ResetGroups_m4461 (Interpreter_t1053 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::GetLastDefined(System.Int32)
extern "C" int32_t Interpreter_GetLastDefined_m4462 (Interpreter_t1053 * __this, int32_t ___gid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::CreateMark(System.Int32)
extern "C" int32_t Interpreter_CreateMark_m4463 (Interpreter_t1053 * __this, int32_t ___previous, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
extern "C" void Interpreter_GetGroupInfo_m4464 (Interpreter_t1053 * __this, int32_t ___gid, int32_t* ___first_mark_index, int32_t* ___n_caps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
extern "C" void Interpreter_PopulateGroup_m4465 (Interpreter_t1053 * __this, Group_t1021 * ___g, int32_t ___first_mark_index, int32_t ___n_caps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
extern "C" Match_t1014 * Interpreter_GenerateMatch_m4466 (Interpreter_t1053 * __this, Regex_t740 * ___regex, MethodInfo* method) IL2CPP_METHOD_ATTR;
