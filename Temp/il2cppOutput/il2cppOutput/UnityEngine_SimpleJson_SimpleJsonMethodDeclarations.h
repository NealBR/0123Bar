#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.SimpleJson
struct SimpleJson_t602;
// SimpleJson.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t600;
// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t601;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t562;
// System.Char[]
struct CharU5BU5D_t179;
// SimpleJson.JsonArray
struct JsonArray_t592;
// System.Text.StringBuilder
struct StringBuilder_t265;
// System.Collections.IEnumerable
struct IEnumerable_t399;

// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern "C" bool SimpleJson_TryDeserializeObject_m3065 (Object_t * __this /* static, unused */, String_t* ___json, Object_t ** ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern "C" String_t* SimpleJson_SerializeObject_m3066 (Object_t * __this /* static, unused */, Object_t * ___json, Object_t * ___jsonSerializerStrategy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C" String_t* SimpleJson_SerializeObject_m3067 (Object_t * __this /* static, unused */, Object_t * ___json, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t* SimpleJson_ParseObject_m3068 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t* ___index, bool* ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern "C" JsonArray_t592 * SimpleJson_ParseArray_m3069 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t* ___index, bool* ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t * SimpleJson_ParseValue_m3070 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t* ___index, bool* ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern "C" String_t* SimpleJson_ParseString_m3071 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t* ___index, bool* ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern "C" String_t* SimpleJson_ConvertFromUtf32_m3072 (Object_t * __this /* static, unused */, int32_t ___utf32, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t * SimpleJson_ParseNumber_m3073 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t* ___index, bool* ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_GetLastIndexOfNumber_m3074 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern "C" void SimpleJson_EatWhitespace_m3075 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_LookAhead_m3076 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C" int32_t SimpleJson_NextToken_m3077 (Object_t * __this /* static, unused */, CharU5BU5D_t179* ___json, int32_t* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeValue_m3078 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___value, StringBuilder_t265 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeObject_m3079 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___keys, Object_t * ___values, StringBuilder_t265 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeArray_m3080 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___anArray, StringBuilder_t265 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeString_m3081 (Object_t * __this /* static, unused */, String_t* ___aString, StringBuilder_t265 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeNumber_m3082 (Object_t * __this /* static, unused */, Object_t * ___number, StringBuilder_t265 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern "C" bool SimpleJson_IsNumeric_m3083 (Object_t * __this /* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern "C" Object_t * SimpleJson_get_CurrentJsonSerializerStrategy_m3084 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern "C" PocoJsonSerializerStrategy_t601 * SimpleJson_get_PocoJsonSerializerStrategy_m3085 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
