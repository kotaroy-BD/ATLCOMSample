// ATLCOMSample.cpp : WinMain の実装


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "ATLCOMSample_i.h"


using namespace ATL;


class CATLCOMSampleModule : public ATL::CAtlExeModuleT< CATLCOMSampleModule >
{
public :
	DECLARE_LIBID(LIBID_ATLCOMSampleLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLCOMSAMPLE, "{77b9de87-2fee-4160-a014-91a2caeec839}")
};

CATLCOMSampleModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

