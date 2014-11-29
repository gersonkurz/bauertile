#include "pch.h"
#include "Logger.h"
#include "Root.h"
#include "Collection.h"


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
		Logger::Logger()
		{
			m_observed = false;
		}

		STDMETHODIMP Logger::get_Name(HSTRING* value)
		{
			HString str;
			str.Set(name.c_str());
			*value = str.Detach();
			return S_OK;
		}

		STDMETHODIMP Logger::put_Name(HSTRING value)
		{
			HString str;
			str.Set(value);
			name = str.GetRawBuffer(nullptr);
			return S_OK;
		}

		STDMETHODIMP Logger::LogInfo(HSTRING value)
		{
			HString str;

            SYSTEM_POWER_STATUS sps;
            if (GetSystemPowerStatus(&sps))
            {
                str.Set(L"OK, Did get SPS");
            }
            else
            {
                str.Set(L"Did not get SPS");
            }
			std::wstring ws = str.GetRawBuffer(nullptr);


			_LogInfo(ws.c_str());
			Notify(str.Get());
			return S_OK;
		}

		STDMETHODIMP Logger::GetInt32(int * pValue)
		{
			*pValue = 10;
			return S_OK;
		}

		STDMETHODIMP Logger::add_LoggerChanged(ILoggerEventHandler* handler, EventRegistrationToken* token)
		{
			m_observed = true;
			m_events.Add(handler, token);
			return S_OK;
		}

		STDMETHODIMP Logger::remove_LoggerChanged(EventRegistrationToken token)
		{
			m_events.Remove(token);
			return S_OK;
		}

		void Logger::Notify(HSTRING value)
		{
			if (m_observed)
			{
				HString str;
				str.Set(value);
				m_events.InvokeAll(str.Detach());
			}
		}
	}
}
