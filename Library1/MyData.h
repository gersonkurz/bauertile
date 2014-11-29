#pragma once
#include "pch.h"
#include "Library1_h.h"

namespace ABI
{
	namespace Library1
	{
		class MyData : public RuntimeClass<IMyData>
		{
			InspectableClass(L"Library1.MyData", BaseTrust)

		public:
			MyData() {}

		public:
			STDMETHOD(get_Name)(HSTRING* value);
			STDMETHOD(put_Name)(HSTRING value);
			STDMETHOD(get_Age)(int* value);
			STDMETHOD(put_Age)(int value);

		private:
			std::wstring _name;
			int _age;
		};

		ActivatableClass(MyData);
	}
}
