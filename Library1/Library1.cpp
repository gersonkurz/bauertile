#include "pch.h"

#include "Library1_h.h"

namespace ABI
{
	namespace Library1
	{
		class WinRTClass: public RuntimeClass<IWinRTClass>
		{
			InspectableClass(L"Library1.WinRTClass", BaseTrust)

			public:
			WinRTClass()
			{
			}
		};

		ActivatableClass(WinRTClass);
	}
}