﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Repetition
struct Repetition_t1072;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1062;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1066;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1067;

// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
extern "C" void Repetition__ctor_m4581 (Repetition_t1072 * __this, int32_t ___min, int32_t ___max, bool ___lazy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
extern "C" Expression_t1062 * Repetition_get_Expression_m4582 (Repetition_t1072 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Repetition_set_Expression_m4583 (Repetition_t1072 * __this, Expression_t1062 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
extern "C" int32_t Repetition_get_Minimum_m4584 (Repetition_t1072 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Repetition_Compile_m4585 (Repetition_t1072 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
extern "C" void Repetition_GetWidth_m4586 (Repetition_t1072 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t1067 * Repetition_GetAnchorInfo_m4587 (Repetition_t1072 * __this, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
