// SafePwdActiveXPropPage.cpp : CSafePwdActiveXPropPage 属性页类的实现。

#include "stdafx.h"
#include "SafePwdActiveX.h"
#include "SafePwdActiveXPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CSafePwdActiveXPropPage, COlePropertyPage)

// 消息映射

BEGIN_MESSAGE_MAP(CSafePwdActiveXPropPage, COlePropertyPage)
END_MESSAGE_MAP()

// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CSafePwdActiveXPropPage, "SAFEPWDACTIVEX.SafePwdActiveXPropPage.1",
	0x37e6ecab, 0xd9fb, 0x4ecd, 0xba, 0x44, 0x93, 0xe, 0x93, 0xfb, 0xc1, 0xab)

// CSafePwdActiveXPropPage::CSafePwdActiveXPropPageFactory::UpdateRegistry -
// 添加或移除 CSafePwdActiveXPropPage 的系统注册表项

BOOL CSafePwdActiveXPropPage::CSafePwdActiveXPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_SAFEPWDACTIVEX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CSafePwdActiveXPropPage::CSafePwdActiveXPropPage - 构造函数

CSafePwdActiveXPropPage::CSafePwdActiveXPropPage() :
	COlePropertyPage(IDD, IDS_SAFEPWDACTIVEX_PPG_CAPTION)
{
}

// CSafePwdActiveXPropPage::DoDataExchange - 在页和属性间移动数据

void CSafePwdActiveXPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CSafePwdActiveXPropPage 消息处理程序
