// SafePwdActiveXCtrl.cpp : CSafePwdActiveXCtrl ActiveX �ؼ����ʵ�֡�

#include "stdafx.h"
#include "SafePwdActiveX.h"
#include "SafePwdActiveXCtrl.h"
#include "SafePwdActiveXPropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CSafePwdActiveXCtrl, COleControl)

// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CSafePwdActiveXCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()

// ����ӳ��

BEGIN_DISPATCH_MAP(CSafePwdActiveXCtrl, COleControl)
END_DISPATCH_MAP()

// �¼�ӳ��

BEGIN_EVENT_MAP(CSafePwdActiveXCtrl, COleControl)
END_EVENT_MAP()

// ����ҳ

// TODO: ����Ҫ��Ӹ�������ҳ�����ס���Ӽ���!
BEGIN_PROPPAGEIDS(CSafePwdActiveXCtrl, 1)
	PROPPAGEID(CSafePwdActiveXPropPage::guid)
END_PROPPAGEIDS(CSafePwdActiveXCtrl)

// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CSafePwdActiveXCtrl, "SAFEPWDACTIVEX.SafePwdActiveXCtrl.1",
	0x695d9afc, 0x99c, 0x44fe, 0x9e, 0x79, 0x29, 0x3a, 0x44, 0x94, 0x21, 0xf0)

// ����� ID �Ͱ汾

IMPLEMENT_OLETYPELIB(CSafePwdActiveXCtrl, _tlid, _wVerMajor, _wVerMinor)

// �ӿ� ID

const IID IID_DSafePwdActiveX = { 0xF684383E, 0x5C9B, 0x4096, { 0x95, 0x5C, 0x7F, 0x98, 0xDA, 0x3E, 0xAA, 0x68 } };
const IID IID_DSafePwdActiveXEvents = { 0x472196CC, 0xE84A, 0x4005, { 0xB3, 0x6D, 0xC7, 0xE6, 0x38, 0x82, 0x51, 0x13 } };

// �ؼ�������Ϣ

static const DWORD _dwSafePwdActiveXOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CSafePwdActiveXCtrl, IDS_SAFEPWDACTIVEX, _dwSafePwdActiveXOleMisc)

// CSafePwdActiveXCtrl::CSafePwdActiveXCtrlFactory::UpdateRegistry -
// ��ӻ��Ƴ� CSafePwdActiveXCtrl ��ϵͳע�����

BOOL CSafePwdActiveXCtrl::CSafePwdActiveXCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: ��֤���Ŀؼ��Ƿ���ϵ�Ԫģ���̴߳������
	// �йظ�����Ϣ����ο� MFC ����˵�� 64��
	// ������Ŀؼ������ϵ�Ԫģ�͹�����
	// �����޸����´��룬��������������
	// afxRegApartmentThreading ��Ϊ 0��

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_SAFEPWDACTIVEX,
			IDB_SAFEPWDACTIVEX,
			afxRegApartmentThreading,
			_dwSafePwdActiveXOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// CSafePwdActiveXCtrl::CSafePwdActiveXCtrl - ���캯��

CSafePwdActiveXCtrl::CSafePwdActiveXCtrl()
{
	InitializeIIDs(&IID_DSafePwdActiveX, &IID_DSafePwdActiveXEvents);
	// TODO: �ڴ˳�ʼ���ؼ���ʵ�����ݡ�
}

// CSafePwdActiveXCtrl::~CSafePwdActiveXCtrl - ��������

CSafePwdActiveXCtrl::~CSafePwdActiveXCtrl()
{
	// TODO: �ڴ�����ؼ���ʵ�����ݡ�
}

// CSafePwdActiveXCtrl::OnDraw - ��ͼ����

void CSafePwdActiveXCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: �����Լ��Ļ�ͼ�����滻����Ĵ��롣
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}

// CSafePwdActiveXCtrl::DoPropExchange - �־���֧��

void CSafePwdActiveXCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Ϊÿ���־õ��Զ������Ե��� PX_ ������
}


// CSafePwdActiveXCtrl::OnResetState - ���ؼ�����ΪĬ��״̬

void CSafePwdActiveXCtrl::OnResetState()
{
	COleControl::OnResetState();  // ���� DoPropExchange ���ҵ���Ĭ��ֵ

	// TODO: �ڴ��������������ؼ�״̬��
}


// CSafePwdActiveXCtrl ��Ϣ�������
