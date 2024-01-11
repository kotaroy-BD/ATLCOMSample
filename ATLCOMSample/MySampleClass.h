// MySampleClass.h : CMySampleClass の宣言

#pragma once
#include "resource.h"       // メイン シンボル



#include "ATLCOMSample_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "DCOM の完全サポートを含んでいない Windows Mobile プラットフォームのような Windows CE プラットフォームでは、単一スレッド COM オブジェクトは正しくサポートされていません。ATL が単一スレッド COM オブジェクトの作成をサポートすること、およびその単一スレッド COM オブジェクトの実装の使用を許可することを強制するには、_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA を定義してください。ご使用の rgs ファイルのスレッド モデルは 'Free' に設定されており、DCOM Windows CE 以外のプラットフォームでサポートされる唯一のスレッド モデルと設定されていました。"
#endif

using namespace ATL;


// CMySampleClass

class ATL_NO_VTABLE CMySampleClass :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMySampleClass, &CLSID_MySampleClass>,
	public IInterfaceZ
{
public:
	CMySampleClass()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CMySampleClass)
	COM_INTERFACE_ENTRY(IInterfaceZ)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	HRESULT MethodX(ULONG ulParam1)
	{
		return S_OK;
	}

	HRESULT MethodY()
	{
		MessageBox(NULL, L"Hello, world!", L"ATLCOMSample", MB_OK);

		return S_OK;
	}


};

OBJECT_ENTRY_AUTO(__uuidof(MySampleClass), CMySampleClass)
