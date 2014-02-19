#pragma once

// SafePwdActiveXCtrl.h : CSafePwdActiveXCtrl ActiveX 控件类的声明。


// CSafePwdActiveXCtrl : 有关实现的信息，请参阅 SafePwdActiveXCtrl.cpp。

class CSafePwdActiveXCtrl : public COleControl
{
	DECLARE_DYNCREATE(CSafePwdActiveXCtrl)

// 构造函数
public:
	CSafePwdActiveXCtrl();

// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~CSafePwdActiveXCtrl();

	DECLARE_OLECREATE_EX(CSafePwdActiveXCtrl)    // 类工厂和 guid
	DECLARE_OLETYPELIB(CSafePwdActiveXCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CSafePwdActiveXCtrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(CSafePwdActiveXCtrl)		// 类型名称和杂项状态

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

// 事件映射
	DECLARE_EVENT_MAP()

// 调度和事件 ID
public:
	enum {
	};
};

