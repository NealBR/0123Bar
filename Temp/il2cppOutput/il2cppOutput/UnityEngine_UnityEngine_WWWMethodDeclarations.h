#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWW
struct WWW_t501;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t502;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t503;
// System.Byte[]
struct ByteU5BU5D_t504;
// UnityEngine.WWWForm
struct WWWForm_t505;
// System.String[]
struct StringU5BU5D_t423;

// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C" void WWW__ctor_m2597 (WWW_t501 * __this, String_t* ___url, WWWForm_t505 * ___form, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m2598 (WWW_t501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m2599 (WWW_t501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m2600 (WWW_t501 * __this, bool ___cancel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m2601 (WWW_t501 * __this, String_t* ___url, ByteU5BU5D_t504* ___postData, StringU5BU5D_t423* ___iHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern "C" Dictionary_2_t502 * WWW_get_responseHeaders_m2602 (WWW_t501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m2603 (WWW_t501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
extern "C" String_t* WWW_get_text_m2604 (WWW_t501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C" Encoding_t503 * WWW_get_DefaultEncoding_m2605 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern "C" Encoding_t503 * WWW_GetTextEncoder_m2606 (WWW_t501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t504* WWW_get_bytes_m2607 (WWW_t501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m2608 (WWW_t501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m2609 (WWW_t501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" StringU5BU5D_t423* WWW_FlattenedHeadersFrom_m2610 (Object_t * __this /* static, unused */, Dictionary_2_t502 * ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern "C" Dictionary_2_t502 * WWW_ParseHTTPHeaderString_m2611 (Object_t * __this /* static, unused */, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
