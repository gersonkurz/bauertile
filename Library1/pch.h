//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "targetver.h"

//#define WIN32_LEAN_AND_MEAN  // Exclude rarely-used stuff from Windows headers
#include <windows.h>

#include <string>
#include <iostream>
#include <future>
#include <vector>
#include <memory>
#include <map>
using namespace std;

#include <wrl.h>
#include <wrl\async.h>
#include <wrl\client.h>
#include <wrl\def.h>
#include <wrl\event.h>
#include <wrl\ftm.h>
#include <wrl\implements.h>
#include <wrl\internal.h>
#include <wrl\module.h>
#include <wrl\wrappers\corewrappers.h>

#include <windows.foundation.h>
#include <windows.foundation.collections.h>
#include <windows.ui.xaml.interop.h>
#include <windows.devices.enumeration.h>

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;
using namespace Windows::Foundation;
using namespace ABI::Windows::Foundation::Collections;
using namespace ABI::Windows::Foundation;

#include <ppltasks.h>
using namespace Concurrency;
using namespace Concurrency::details;

#ifdef WINRT_CPP_CX
#include <collection.h>
#include <agile.h>
#endif