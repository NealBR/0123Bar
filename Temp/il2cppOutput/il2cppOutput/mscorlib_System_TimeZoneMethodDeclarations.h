#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZone
struct TimeZone_t1822;
// System.Globalization.DaylightTime
struct DaylightTime_t1436;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.TimeZone::.ctor()
extern "C" void TimeZone__ctor_m10337 (TimeZone_t1822 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
extern "C" void TimeZone__cctor_m10338 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern "C" TimeZone_t1822 * TimeZone_get_CurrentTimeZone_m10339 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32)
// System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime)
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m10340 (TimeZone_t1822 * __this, DateTime_t465  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m10341 (Object_t * __this /* static, unused */, DateTime_t465  ___time, DaylightTime_t1436 * ___daylightTimes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern "C" DateTime_t465  TimeZone_ToLocalTime_m10342 (TimeZone_t1822 * __this, DateTime_t465  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern "C" DateTime_t465  TimeZone_ToUniversalTime_m10343 (TimeZone_t1822 * __this, DateTime_t465  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern "C" TimeSpan_t997  TimeZone_GetLocalTimeDiff_m10344 (TimeZone_t1822 * __this, DateTime_t465  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern "C" TimeSpan_t997  TimeZone_GetLocalTimeDiff_m10345 (TimeZone_t1822 * __this, DateTime_t465  ___time, TimeSpan_t997  ___utc_offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
