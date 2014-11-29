#include "pch.h"
#include "Root.h"
#include "Utility.h"
#include "Logger.h"
#include "MyData.h"
#include "Collection.h"

namespace ABI
{
	namespace Library1
	{
		STDMETHODIMP Root::GetLoggerAsync(IAsyncOperation<ILogger*>** value)
		{
			ComPtr<task_based_async_operation<ILogger>> pObject = Make<task_based_async_operation<ILogger>>(
				std::async([&]() -> ILogger*
			{
				ComPtr<Logger> p = Make<Logger>();
				return p.Detach();
			}));
			*value = pObject.Detach();
			return S_OK;
		}

#ifdef ASYNC_CLIENT_CS_CODE
		private async void Button_Click(object sender, RoutedEventArgs e)
		{
			Library1.Root root = new Root();
			Library1.ILogger logger = await root.GetLoggerAsync();
			logger.LogInfo("LogInfo()...");
		}
#endif

		STDMETHODIMP Root::GetVector(IVector<HSTRING>** value)
		{
			try
			{
				ComPtr<Vector<HSTRING>> v = Make<Vector<HSTRING>>();
				HString str1;
				str1.Set(L"Edith");
				v->Append(str1.Get());
				HString str2;
				str2.Set(L"Lisa");
				v->Append(str2.Get());
				HString str3;
				str3.Set(L"Audrey");
				v->Append(str3.Get());
				*value = v.Detach();
				return S_OK;
			}
			catch (...)
			{
				return E_FAIL;
			}
		}

		STDMETHODIMP Root::GetVectorInt(IVector<int>** value)
		{
			ComPtr<Vector<int>> v = Make<Vector<int>>();
			v->Append(11);
			v->Append(8);
			v->Append(3);
			*value = v.Detach();
			return S_OK;
		}

		STDMETHODIMP Root::GetVectorData(IVector<IMyData *>** value)
		{
			ComPtr<Vector<IMyData *>> v = Make<Vector<IMyData *>>();

			HString str1;
			str1.Set(L"Lisa");
			ComPtr<MyData> data1 = Make<MyData>();
			data1->put_Name(str1.Detach());
			data1->put_Age(8);
			v->Append(data1.Detach());

			HString str2;
			str2.Set(L"Audrey");
			ComPtr<MyData> data2 = Make<MyData>();
			data2->put_Name(str2.Detach());
			data2->put_Age(3);
			v->Append(data2.Detach());

			*value = v.Detach();
			return S_OK;
		}
	}
}