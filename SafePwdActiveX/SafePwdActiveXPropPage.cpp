// SafePwdActiveXPropPage.cpp : CSafePwdActiveXPropPage ����ҳ���ʵ�֡�

#include "stdafx.h"
#include "SafePwdActiveX.h"
#include "SafePwdActiveXPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CSafePwdActiveXPropPage, COlePropertyPage)

// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CSafePwdActiveXPropPage, COlePropertyPage)
END_MESSAGE_MAP()

// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CSafePwdActiveXPropPage, "SAFEPWDACTIVEX.SafePwdActiveXPropPage.1",
	0x37e6ecab, 0xd9fb, 0x4ecd, 0xba, 0x44, 0x93, 0xe, 0x93, 0xfb, 0xc1, 0xab)

// CSafePwdActiveXPropPage::CSafePwdActiveXPropPageFactory::UpdateRegistry -
// ��ӻ��Ƴ� CSafePwdActiveXPropPage ��ϵͳע�����

BOOL CSafePwdActiveXPropPage::CSafePwdActiveXPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_SAFEPWDACTIVEX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CSafePwdActiveXPropPage::CSafePwdActiveXPropPage - ���캯��

CSafePwdActiveXPropPage::CSafePwdActiveXPropPage() :
	COlePropertyPage(IDD, IDS_SAFEPWDACTIVEX_PPG_CAPTION)
{
}

// CSafePwdActiveXPropPage::DoDataExchange - ��ҳ�����Լ��ƶ�����

void CSafePwdActiveXPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CSafePwdActiveXPropPage ��Ϣ�������
