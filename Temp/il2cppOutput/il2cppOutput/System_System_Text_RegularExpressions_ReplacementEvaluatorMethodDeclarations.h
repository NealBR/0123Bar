#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.ReplacementEvaluator
struct ReplacementEvaluator_t1064;
// System.Text.RegularExpressions.Regex
struct Regex_t740;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t1014;
// System.Text.StringBuilder
struct StringBuilder_t265;

// System.Void System.Text.RegularExpressions.ReplacementEvaluator::.ctor(System.Text.RegularExpressions.Regex,System.String)
extern "C" void ReplacementEvaluator__ctor_m4537 (ReplacementEvaluator_t1064 * __this, Regex_t740 * ___regex, String_t* ___replacement, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.ReplacementEvaluator::Evaluate(System.Text.RegularExpressions.Match)
extern "C" String_t* ReplacementEvaluator_Evaluate_m4538 (ReplacementEvaluator_t1064 * __this, Match_t1014 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::EvaluateAppend(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern "C" void ReplacementEvaluator_EvaluateAppend_m4539 (ReplacementEvaluator_t1064 * __this, Match_t1014 * ___match, StringBuilder_t265 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.ReplacementEvaluator::get_NeedsGroupsOrCaptures()
extern "C" bool ReplacementEvaluator_get_NeedsGroupsOrCaptures_m4540 (ReplacementEvaluator_t1064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Ensure(System.Int32)
extern "C" void ReplacementEvaluator_Ensure_m4541 (ReplacementEvaluator_t1064 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddFromReplacement(System.Int32,System.Int32)
extern "C" void ReplacementEvaluator_AddFromReplacement_m4542 (ReplacementEvaluator_t1064 * __this, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddInt(System.Int32)
extern "C" void ReplacementEvaluator_AddInt_m4543 (ReplacementEvaluator_t1064 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Compile()
extern "C" void ReplacementEvaluator_Compile_m4544 (ReplacementEvaluator_t1064 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.ReplacementEvaluator::CompileTerm(System.Int32&)
extern "C" int32_t ReplacementEvaluator_CompileTerm_m4545 (ReplacementEvaluator_t1064 * __this, int32_t* ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
