// SafePwdActiveXCtrl.cpp : CSafePwdActiveXCtrl ActiveX 控件类的实现。

#include "stdafx.h"
#include "SafePwdActiveX.h"
#include "SafePwdActiveXCtrl.h"
#include "SafePwdActiveXPropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CSafePwdActiveXCtrl, COleControl)

// 消息映射

BEGIN_MESSAGE_MAP(CSafePwdActiveXCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()

// 调度映射

BEGIN_DISPATCH_MAP(CSafePwdActiveXCtrl, COleControl)
END_DISPATCH_MAP()

// 事件映射

BEGIN_EVENT_MAP(CSafePwdActiveXCtrl, COleControl)
END_EVENT_MAP()

// 属性页

// TODO: 按需要添加更多属性页。请记住增加计数!
BEGIN_PROPPAGEIDS(CSafePwdActiveXCtrl, 1)
	PROPPAGEID(CSafePwdActiveXPropPage::guid)
END_PROPPAGEIDS(CSafePwdActiveXCtrl)

// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CSafePwdActiveXCtrl, "SAFEPWDACTIVEX.SafePwdActiveXCtrl.1",
	0x695d9afc, 0x99c, 0x44fe, 0x9e, 0x79, 0x29, 0x3a, 0x44, 0x94, 0x21, 0xf0)

// 键入库 ID 和版本

IMPLEMENT_OLETYPELIB(CSafePwdActiveXCtrl, _tlid, _wVerMajor, _wVerMinor)

// 接口 ID

const IID IID_DSafePwdActiveX = { 0xF684383E, 0x5C9B, 0x4096, { 0x95, 0x5C, 0x7F, 0x98, 0xDA, 0x3E, 0xAA, 0x68 } };
const IID IID_DSafePwdActiveXEvents = { 0x472196CC, 0xE84A, 0x4005, { 0xB3, 0x6D, 0xC7, 0xE6, 0x38, 0x82, 0x51, 0x13 } };

// 控件类型信息

static const DWORD _dwSafePwdActiveXOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CSafePwdActiveXCtrl, IDS_SAFEPWDACTIVEX, _dwSafePwdActiveXOleMisc)

// CSafePwdActiveXCtrl::CSafePwdActiveXCtrlFactory::UpdateRegistry -
// 添加或移除 CSafePwdActiveXCtrl 的系统注册表项

BOOL CSafePwdActiveXCtrl::CSafePwdActiveXCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: 验证您的控件是否符合单元模型线程处理规则。
	// 有关更多信息，请参考 MFC 技术说明 64。
	// 如果您的控件不符合单元模型规则，则
	// 必须修改如下代码，将第六个参数从
	// afxRegApartmentThreading 改为 0。

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


// CSafePwdActiveXCtrl::CSafePwdActiveXCtrl - 构造函数

CSafePwdActiveXCtrl::CSafePwdActiveXCtrl()
{
	InitializeIIDs(&IID_DSafePwdActiveX, &IID_DSafePwdActiveXEvents);
	// TODO: 在此初始化控件的实例数据。
}

// CSafePwdActiveXCtrl::~CSafePwdActiveXCtrl - 析构函数

CSafePwdActiveXCtrl::~CSafePwdActiveXCtrl()
{
	// TODO: 在此清理控件的实例数据。
}

// CSafePwdActiveXCtrl::OnDraw - 绘图函数

void CSafePwdActiveXCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: 用您自己的绘图代码替换下面的代码。
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}

// CSafePwdActiveXCtrl::DoPropExchange - 持久性支持

void CSafePwdActiveXCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: 为每个持久的自定义属性调用 PX_ 函数。
}


// CSafePwdActiveXCtrl::OnResetState - 将控件重置为默认状态

void CSafePwdActiveXCtrl::OnResetState()
{
	COleControl::OnResetState();  // 重置 DoPropExchange 中找到的默认值

	// TODO: 在此重置任意其他控件状态。
}


// CSafePwdActiveXCtrl 消息处理程序
