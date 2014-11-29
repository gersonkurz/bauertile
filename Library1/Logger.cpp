#include "pch.h"
#include "Logger.h"
#include "Root.h"
#include "Collection.h"


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
