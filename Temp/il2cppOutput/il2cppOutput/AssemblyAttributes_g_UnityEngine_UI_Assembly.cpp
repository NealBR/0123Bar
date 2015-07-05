#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo RuntimeCompatibilityAttribute_t25_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m71_MethodInfo;
extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m72_MethodInfo;
extern TypeInfo AssemblyTitleAttribute_t405_il2cpp_TypeInfo;
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
extern MethodInfo AssemblyTitleAttribute__ctor_m2097_MethodInfo;
extern TypeInfo AssemblyDescriptionAttribute_t406_il2cpp_TypeInfo;
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
extern MethodInfo AssemblyDescriptionAttribute__ctor_m2098_MethodInfo;
extern TypeInfo AssemblyConfigurationAttribute_t407_il2cpp_TypeInfo;
// System.Reflection.AssemblyConfigurationAttribute
#include "mscorlib_System_Reflection_AssemblyConfigurationAttribute.h"
// System.Reflection.AssemblyConfigurationAttribute
#include "mscorlib_System_Reflection_AssemblyConfigurationAttributeMethodDeclarations.h"
extern MethodInfo AssemblyConfigurationAttribute__ctor_m2099_MethodInfo;
extern TypeInfo AssemblyCompanyAttribute_t408_il2cpp_TypeInfo;
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"
extern MethodInfo AssemblyCompanyAttribute__ctor_m2100_MethodInfo;
extern TypeInfo AssemblyProductAttribute_t409_il2cpp_TypeInfo;
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
extern MethodInfo AssemblyProductAttribute__ctor_m2101_MethodInfo;
extern TypeInfo AssemblyFileVersionAttribute_t410_il2cpp_TypeInfo;
// System.Reflection.AssemblyFileVersionAttribute
#include "mscorlib_System_Reflection_AssemblyFileVersionAttribute.h"
// System.Reflection.AssemblyFileVersionAttribute
#include "mscorlib_System_Reflection_AssemblyFileVersionAttributeMethodDeclarations.h"
extern MethodInfo AssemblyFileVersionAttribute__ctor_m2102_MethodInfo;
extern TypeInfo GuidAttribute_t411_il2cpp_TypeInfo;
// System.Runtime.InteropServices.GuidAttribute
#include "mscorlib_System_Runtime_InteropServices_GuidAttribute.h"
// System.Runtime.InteropServices.GuidAttribute
#include "mscorlib_System_Runtime_InteropServices_GuidAttributeMethodDeclarations.h"
extern MethodInfo GuidAttribute__ctor_m2103_MethodInfo;
extern TypeInfo ComVisibleAttribute_t412_il2cpp_TypeInfo;
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttributeMethodDeclarations.h"
extern MethodInfo ComVisibleAttribute__ctor_m2104_MethodInfo;
extern TypeInfo AssemblyTrademarkAttribute_t413_il2cpp_TypeInfo;
// System.Reflection.AssemblyTrademarkAttribute
#include "mscorlib_System_Reflection_AssemblyTrademarkAttribute.h"
// System.Reflection.AssemblyTrademarkAttribute
#include "mscorlib_System_Reflection_AssemblyTrademarkAttributeMethodDeclarations.h"
extern MethodInfo AssemblyTrademarkAttribute__ctor_m2105_MethodInfo;
extern TypeInfo AssemblyCopyrightAttribute_t414_il2cpp_TypeInfo;
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"
extern MethodInfo AssemblyCopyrightAttribute__ctor_m2106_MethodInfo;
void g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RuntimeCompatibilityAttribute_t25 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t25 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t25_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m71(tmp, &RuntimeCompatibilityAttribute__ctor_m71_MethodInfo);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m72(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m72_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t405 * tmp;
		tmp = (AssemblyTitleAttribute_t405 *)il2cpp_codegen_object_new (&AssemblyTitleAttribute_t405_il2cpp_TypeInfo);
		AssemblyTitleAttribute__ctor_m2097(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &AssemblyTitleAttribute__ctor_m2097_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t406 * tmp;
		tmp = (AssemblyDescriptionAttribute_t406 *)il2cpp_codegen_object_new (&AssemblyDescriptionAttribute_t406_il2cpp_TypeInfo);
		AssemblyDescriptionAttribute__ctor_m2098(tmp, il2cpp_codegen_string_new_wrapper(""), &AssemblyDescriptionAttribute__ctor_m2098_MethodInfo);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyConfigurationAttribute_t407 * tmp;
		tmp = (AssemblyConfigurationAttribute_t407 *)il2cpp_codegen_object_new (&AssemblyConfigurationAttribute_t407_il2cpp_TypeInfo);
		AssemblyConfigurationAttribute__ctor_m2099(tmp, il2cpp_codegen_string_new_wrapper(""), &AssemblyConfigurationAttribute__ctor_m2099_MethodInfo);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t408 * tmp;
		tmp = (AssemblyCompanyAttribute_t408 *)il2cpp_codegen_object_new (&AssemblyCompanyAttribute_t408_il2cpp_TypeInfo);
		AssemblyCompanyAttribute__ctor_m2100(tmp, il2cpp_codegen_string_new_wrapper("Microsoft"), &AssemblyCompanyAttribute__ctor_m2100_MethodInfo);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t409 * tmp;
		tmp = (AssemblyProductAttribute_t409 *)il2cpp_codegen_object_new (&AssemblyProductAttribute_t409_il2cpp_TypeInfo);
		AssemblyProductAttribute__ctor_m2101(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &AssemblyProductAttribute__ctor_m2101_MethodInfo);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		AssemblyFileVersionAttribute_t410 * tmp;
		tmp = (AssemblyFileVersionAttribute_t410 *)il2cpp_codegen_object_new (&AssemblyFileVersionAttribute_t410_il2cpp_TypeInfo);
		AssemblyFileVersionAttribute__ctor_m2102(tmp, il2cpp_codegen_string_new_wrapper("1.0.0.0"), &AssemblyFileVersionAttribute__ctor_m2102_MethodInfo);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		GuidAttribute_t411 * tmp;
		tmp = (GuidAttribute_t411 *)il2cpp_codegen_object_new (&GuidAttribute_t411_il2cpp_TypeInfo);
		GuidAttribute__ctor_m2103(tmp, il2cpp_codegen_string_new_wrapper("d4f464c7-9b15-460d-b4bc-2cacd1c1df73"), &GuidAttribute__ctor_m2103_MethodInfo);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t412 * tmp;
		tmp = (ComVisibleAttribute_t412 *)il2cpp_codegen_object_new (&ComVisibleAttribute_t412_il2cpp_TypeInfo);
		ComVisibleAttribute__ctor_m2104(tmp, false, &ComVisibleAttribute__ctor_m2104_MethodInfo);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTrademarkAttribute_t413 * tmp;
		tmp = (AssemblyTrademarkAttribute_t413 *)il2cpp_codegen_object_new (&AssemblyTrademarkAttribute_t413_il2cpp_TypeInfo);
		AssemblyTrademarkAttribute__ctor_m2105(tmp, il2cpp_codegen_string_new_wrapper(""), &AssemblyTrademarkAttribute__ctor_m2105_MethodInfo);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCopyrightAttribute_t414 * tmp;
		tmp = (AssemblyCopyrightAttribute_t414 *)il2cpp_codegen_object_new (&AssemblyCopyrightAttribute_t414_il2cpp_TypeInfo);
		AssemblyCopyrightAttribute__ctor_m2106(tmp, il2cpp_codegen_string_new_wrapper("Copyright © Microsoft 2013"), &AssemblyCopyrightAttribute__ctor_m2106_MethodInfo);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_UI_Assembly__CustomAttributeCache = {
11,
NULL,
&g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator
};
