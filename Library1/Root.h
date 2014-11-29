#pragma once
#include "pch.h"
#include "Library1_h.h"

namespace ABI
{
	namespace Library1
	{
		class Root : public RuntimeClass<IRoot>
		{
			InspectableClass(L"Library1.Root", BaseTrust)

		public:
			Root() {}

		public:
			STDMETHOD(GetLoggerAsync)(IAsyncOperation<ILogger*>** value);
			STDMETHOD(GetVector)(IVector<HSTRING>** value);
			STDMETHOD(GetVectorInt)(IVector<int>** value);
			STDMETHOD(GetVectorData)(IVector<IMyData *>** value);
		};

		ActivatableClass(Root);
	}
}
