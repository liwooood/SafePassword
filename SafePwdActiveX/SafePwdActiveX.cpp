// SafePwdActiveX.cpp : CSafePwdActiveXApp �� DLL ע���ʵ�֡�

#include "stdafx.h"
#include "SafePwdActiveX.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CSafePwdActiveXApp theApp;

const GUID CDECL _tlid = { 0x1383FB43, 0xB727, 0x494A, { 0xAC, 0xF5, 0x10, 0xDD, 0x1B, 0x30, 0x16, 0x89 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CSafePwdActiveXApp::InitInstance - DLL ��ʼ��

BOOL CSafePwdActiveXApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: �ڴ�������Լ���ģ���ʼ�����롣
	}

	return bInit;
}



// CSafePwdActiveXApp::ExitInstance - DLL ��ֹ

int CSafePwdActiveXApp::ExitInstance()
{
	// TODO: �ڴ�������Լ���ģ����ֹ���롣

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - ������ӵ�ϵͳע���

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - �����ϵͳע������Ƴ�

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
