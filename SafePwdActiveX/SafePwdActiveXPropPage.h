#pragma once

// SafePwdActiveXPropPage.h : CSafePwdActiveXPropPage ����ҳ���������


// CSafePwdActiveXPropPage : �й�ʵ�ֵ���Ϣ������� SafePwdActiveXPropPage.cpp��

class CSafePwdActiveXPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CSafePwdActiveXPropPage)
	DECLARE_OLECREATE_EX(CSafePwdActiveXPropPage)

// ���캯��
public:
	CSafePwdActiveXPropPage();

// �Ի�������
	enum { IDD = IDD_PROPPAGE_SAFEPWDACTIVEX };

// ʵ��
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ��Ϣӳ��
protected:
	DECLARE_MESSAGE_MAP()
};

