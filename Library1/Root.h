#pragma once
#include "pch.h"
#include "Library1_h.h"



#define AC_LINE_OFFLINE                 0x00
#define AC_LINE_ONLINE                  0x01
#define AC_LINE_BACKUP_POWER            0x02
#define AC_LINE_UNKNOWN                 0xFF

#define BATTERY_FLAG_HIGH               0x01
#define BATTERY_FLAG_LOW                0x02
#define BATTERY_FLAG_CRITICAL           0x04
#define BATTERY_FLAG_CHARGING           0x08
#define BATTERY_FLAG_NO_BATTERY         0x80
#define BATTERY_FLAG_UNKNOWN            0xFF

#define BATTERY_PERCENTAGE_UNKNOWN      0xFF

#define BATTERY_LIFE_UNKNOWN        0xFFFFFFFF

typedef struct _SYSTEM_POWER_STATUS {
    BYTE ACLineStatus;
    BYTE BatteryFlag;
    BYTE BatteryLifePercent;
    BYTE Reserved1;
    DWORD BatteryLifeTime;
    DWORD BatteryFullLifeTime;
}   SYSTEM_POWER_STATUS, *LPSYSTEM_POWER_STATUS;

WINBASEAPI
EXTERN_C BOOL
WINAPI
GetSystemPowerStatus(
_Out_ LPSYSTEM_POWER_STATUS lpSystemPowerStatus
); 

namespace ABI
{
	namespace Library1
	{
		class Root : public RuntimeClass<IRoot>
		{
			InspectableClass(L"Library1.Root", BaseTrust)

		public:
            Root();

		public:
			STDMETHOD(GetLoggerAsync)(IAsyncOperation<ILogger*>** value);
			STDMETHOD(GetVector)(IVector<HSTRING>** value);
			STDMETHOD(GetVectorInt)(IVector<int>** value);
			STDMETHOD(GetVectorData)(IVector<IMyData *>** value);


            STDMETHOD(get_ACLineStatus)(AC_LINE_STATUS* value);
            STDMETHOD(get_BatteryFlag)(BATTERY_FLAG* value);
            STDMETHOD(get_BatteryLifePercent)(int* value);
            STDMETHOD(get_BatteryLifeTime)(int* value);
            STDMETHOD(get_BatteryFullLifeTime)(int* value);


        private:
            SYSTEM_POWER_STATUS m_SystemPowerStatus;
		};

		ActivatableClass(Root);
	}
}
