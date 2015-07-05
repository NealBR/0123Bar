#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.GregorianCalendar
struct GregorianCalendar_t1437;
// System.Int32[]
struct Int32U5BU5D_t1029;
// System.Globalization.GregorianCalendarTypes
#include "mscorlib_System_Globalization_GregorianCalendarTypes.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.GregorianCalendar::.ctor(System.Globalization.GregorianCalendarTypes)
extern "C" void GregorianCalendar__ctor_m7681 (GregorianCalendar_t1437 * __this, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::.ctor()
extern "C" void GregorianCalendar__ctor_m7682 (GregorianCalendar_t1437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.GregorianCalendar::get_Eras()
extern "C" Int32U5BU5D_t1029* GregorianCalendar_get_Eras_m7683 (GregorianCalendar_t1437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::set_CalendarType(System.Globalization.GregorianCalendarTypes)
extern "C" void GregorianCalendar_set_CalendarType_m7684 (GregorianCalendar_t1437 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetDayOfMonth(System.DateTime)
extern "C" int32_t GregorianCalendar_GetDayOfMonth_m7685 (GregorianCalendar_t1437 * __this, DateTime_t465  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.Globalization.GregorianCalendar::GetDayOfWeek(System.DateTime)
extern "C" int32_t GregorianCalendar_GetDayOfWeek_m7686 (GregorianCalendar_t1437 * __this, DateTime_t465  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetEra(System.DateTime)
extern "C" int32_t GregorianCalendar_GetEra_m7687 (GregorianCalendar_t1437 * __this, DateTime_t465  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetMonth(System.DateTime)
extern "C" int32_t GregorianCalendar_GetMonth_m7688 (GregorianCalendar_t1437 * __this, DateTime_t465  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetYear(System.DateTime)
extern "C" int32_t GregorianCalendar_GetYear_m7689 (GregorianCalendar_t1437 * __this, DateTime_t465  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
