#pragma once
#include "pch.h"

//
// Utility header extracted from CXXReflect\Windows_Runtime\Utility.hpp
//
//                            Copyright James P. McNellis 2011 - 2013.                            //
//                   Distributed under the Boost Software License, Version 1.0.                   //

/// A base class for IAsyncOperation<T> implementations for use with WRL
template <typename T>
class async_operation_base : public RuntimeClass<AsyncBase<IAsyncOperationCompletedHandler<T*>>, IAsyncOperation<T*>>
{
	InspectableClass(L"Windows.Foundation.IAsyncInfo", BaseTrust)

public:

	typedef IAsyncOperationCompletedHandler<T*> HandlerType;

	async_operation_base()
	{
		this->Start();
	}

	virtual auto STDMETHODCALLTYPE put_Completed(HandlerType* handler) -> HRESULT override
	{
		return this->PutOnComplete(handler);
	}

	virtual auto STDMETHODCALLTYPE get_Completed(HandlerType** handler) -> HRESULT override
	{
		return this->GetOnComplete(handler);
	}

protected:

	virtual auto OnStart()  -> HRESULT override { return S_OK; }
	virtual auto OnClose()  -> void    override { };
	virtual auto OnCancel() -> void    override { };
};

/// An IAsyncOperation<T> implementation that returns an already-realized value
template <typename T>
class already_completed_async_operation : public async_operation_base<T>
{
public:

	already_completed_async_operation(T* const value)
		: _value(value)
	{
		this->FireCompletion();
	}

	virtual auto STDMETHODCALLTYPE GetResults(T** results)  -> HRESULT override
	{
		if (results == nullptr)
			return E_INVALIDARG;

		*results = _value.Get();
		return S_OK;
	}

private:

	ComPtr<T> _value;
};

/// An IAsyncOperation<T> implementation that waits on a std::future using PPL
template <typename T>
class task_based_async_operation : public async_operation_base<T>
{
public:

	task_based_async_operation(std::future<T*>&& f)
		: _future(std::move(f)), _task([&]() -> ComPtr<T> { return _future.get(); })
	{
		_task.then([&](ComPtr<T>)
		{
			this->FireCompletion();
		});
	}

	virtual auto STDMETHODCALLTYPE GetResults(T** results)  -> HRESULT override
	{
		if (results == nullptr)
			return E_INVALIDARG;

		*results = clone_for_return(_task.get());
		return S_OK;
	}

private:

	std::future<T*>                                  _future;
	::Concurrency::task<ComPtr<T>> _task;
};

/// A helper to AddRef an interface pointer for return to a caller.
template <typename T>
auto clone_for_return(ComPtr<T> p) -> T*
{
	return p.Detach();
}
