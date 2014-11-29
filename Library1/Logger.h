#pragma once

#include "Library1_h.h"

namespace ABI
{
	namespace Library1
	{
		class Logger : public RuntimeClass<ILogger>
		{
			InspectableClass(L"Library1.Logger", BaseTrust)

		public:
			Logger();
			STDMETHOD(get_Name)(HSTRING* value);
			STDMETHOD(put_Name)(HSTRING value);
			STDMETHOD(LogInfo)(HSTRING value);
			STDMETHOD(GetInt32)(int * pValue);
			STDMETHOD(add_LoggerChanged)(ILoggerEventHandler* handler, EventRegistrationToken* token);
			STDMETHOD(remove_LoggerChanged)(EventRegistrationToken token);

		private:
			void Notify(HSTRING value);

		private:
			std::wstring name;		
			bool m_observed;
			EventSource<ILoggerEventHandler> m_events;
		};

		ActivatableClass(Logger);
	}
}
