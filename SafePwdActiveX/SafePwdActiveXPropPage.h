#pragma once

// SafePwdActiveXPropPage.h : CSafePwdActiveXPropPage 属性页类的声明。


// CSafePwdActiveXPropPage : 有关实现的信息，请参阅 SafePwdActiveXPropPage.cpp。

class CSafePwdActiveXPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CSafePwdActiveXPropPage)
	DECLARE_OLECREATE_EX(CSafePwdActiveXPropPage)

// 构造函数
public:
	CSafePwdActiveXPropPage();

// 对话框数据
	enum { IDD = IDD_PROPPAGE_SAFEPWDACTIVEX };

// 实现
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 消息映射
protected:
	DECLARE_MESSAGE_MAP()
};

