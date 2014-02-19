// SafePwdActiveX.cpp : CSafePwdActiveXApp 和 DLL 注册的实现。

#include "stdafx.h"
#include "SafePwdActiveX.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CSafePwdActiveXApp theApp;

const GUID CDECL _tlid = { 0x1383FB43, 0xB727, 0x494A, { 0xAC, 0xF5, 0x10, 0xDD, 0x1B, 0x30, 0x16, 0x89 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CSafePwdActiveXApp::InitInstance - DLL 初始化

BOOL CSafePwdActiveXApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: 在此添加您自己的模块初始化代码。
	}

	return bInit;
}



// CSafePwdActiveXApp::ExitInstance - DLL 终止

int CSafePwdActiveXApp::ExitInstance()
{
	// TODO: 在此添加您自己的模块终止代码。

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - 将项添加到系统注册表

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - 将项从系统注册表中移除

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
