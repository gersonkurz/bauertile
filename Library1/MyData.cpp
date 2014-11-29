#include "pch.h"
#include "MyData.h"
#include "Utility.h"
#include "Logger.h"
#include "Collection.h"

namespace ABI
{
	namespace Library1
	{
		STDMETHODIMP MyData::get_Name(HSTRING* value)
		{
			HString str;
			str.Set(_name.c_str());
			*value = str.Detach();
			return S_OK;
		}

		STDMETHODIMP MyData::put_Name(HSTRING value)
		{
			HString str;
			str.Set(value);
			unsigned int length = 0;
			_name = str.GetRawBuffer(&length);
			return S_OK;
		}

		STDMETHODIMP MyData::get_Age(int* value)
		{
			*value = _age;
			return S_OK;
		}

		STDMETHODIMP MyData::put_Age(int value)
		{
			_age = value;
			return S_OK;
		}
	}
}