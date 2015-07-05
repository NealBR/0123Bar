#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t1392;
// System.Exception
struct Exception_t275;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1396;
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t1395;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t1394;

// System.Void Mono.Xml.SmallXmlParser::.ctor()
extern "C" void SmallXmlParser__ctor_m7310 (SmallXmlParser_t1392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::Error(System.String)
extern "C" Exception_t275 * SmallXmlParser_Error_m7311 (SmallXmlParser_t1392 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::UnexpectedEndError()
extern "C" Exception_t275 * SmallXmlParser_UnexpectedEndError_m7312 (SmallXmlParser_t1392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsNameChar(System.Char,System.Boolean)
extern "C" bool SmallXmlParser_IsNameChar_m7313 (SmallXmlParser_t1392 * __this, uint16_t ___c, bool ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsWhitespace(System.Int32)
extern "C" bool SmallXmlParser_IsWhitespace_m7314 (SmallXmlParser_t1392 * __this, int32_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces()
extern "C" void SmallXmlParser_SkipWhitespaces_m7315 (SmallXmlParser_t1392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleWhitespaces()
extern "C" void SmallXmlParser_HandleWhitespaces_m7316 (SmallXmlParser_t1392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces(System.Boolean)
extern "C" void SmallXmlParser_SkipWhitespaces_m7317 (SmallXmlParser_t1392 * __this, bool ___expected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Peek()
extern "C" int32_t SmallXmlParser_Peek_m7318 (SmallXmlParser_t1392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Read()
extern "C" int32_t SmallXmlParser_Read_m7319 (SmallXmlParser_t1392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Expect(System.Int32)
extern "C" void SmallXmlParser_Expect_m7320 (SmallXmlParser_t1392 * __this, int32_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadUntil(System.Char,System.Boolean)
extern "C" String_t* SmallXmlParser_ReadUntil_m7321 (SmallXmlParser_t1392 * __this, uint16_t ___until, bool ___handleReferences, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadName()
extern "C" String_t* SmallXmlParser_ReadName_m7322 (SmallXmlParser_t1392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Parse(System.IO.TextReader,Mono.Xml.SmallXmlParser/IContentHandler)
extern "C" void SmallXmlParser_Parse_m7323 (SmallXmlParser_t1392 * __this, TextReader_t1396 * ___input, Object_t * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Cleanup()
extern "C" void SmallXmlParser_Cleanup_m7324 (SmallXmlParser_t1392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadContent()
extern "C" void SmallXmlParser_ReadContent_m7325 (SmallXmlParser_t1392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleBufferedContent()
extern "C" void SmallXmlParser_HandleBufferedContent_m7326 (SmallXmlParser_t1392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCharacters()
extern "C" void SmallXmlParser_ReadCharacters_m7327 (SmallXmlParser_t1392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadReference()
extern "C" void SmallXmlParser_ReadReference_m7328 (SmallXmlParser_t1392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::ReadCharacterReference()
extern "C" int32_t SmallXmlParser_ReadCharacterReference_m7329 (SmallXmlParser_t1392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadAttribute(Mono.Xml.SmallXmlParser/AttrListImpl)
extern "C" void SmallXmlParser_ReadAttribute_m7330 (SmallXmlParser_t1392 * __this, AttrListImpl_t1394 * ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCDATASection()
extern "C" void SmallXmlParser_ReadCDATASection_m7331 (SmallXmlParser_t1392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadComment()
extern "C" void SmallXmlParser_ReadComment_m7332 (SmallXmlParser_t1392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
