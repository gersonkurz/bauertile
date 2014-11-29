#pragma once
#include "pch.h"
#include "Library1_h.h"
#include <inspectable.h>

namespace ABI
{
	namespace Library1
	{
		class Device : public RuntimeClass<IDevice>
		{
			InspectableClass(L"Library1.Device", BaseTrust)

		public:
			//STDMETHOD(LogInfo)(HSTRING value);

		private:
		};

		ActivatableClass(Device);
	}

	// ITypedEventHandler<ABI::Windows::Devices::Enumeration::DeviceWatcher*, ABI::Windows::Devices::Enumeration::DeviceInformation*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceWatcher*, ABI::Windows::Devices::Enumeration::IDeviceWatcher*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::DeviceInformation*, ABI::Windows::Devices::Enumeration::IDeviceInformation*>>{
}

#ifdef ASYNC
private async void Button_Click(object sender, RoutedEventArgs e)
{
	Library1.Root root = new Root();
	Library1.ILogger logger = await root.GetLoggerAsync();
	logger.LogInfo("LogInfo()...");
}
#endif
