#pragma once

// SafePwdActiveXCtrl.h : CSafePwdActiveXCtrl ActiveX �ؼ����������


// CSafePwdActiveXCtrl : �й�ʵ�ֵ���Ϣ������� SafePwdActiveXCtrl.cpp��

class CSafePwdActiveXCtrl : public COleControl
{
	DECLARE_DYNCREATE(CSafePwdActiveXCtrl)

// ���캯��
public:
	CSafePwdActiveXCtrl();

// ��д
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// ʵ��
protected:
	~CSafePwdActiveXCtrl();

	DECLARE_OLECREATE_EX(CSafePwdActiveXCtrl)    // �๤���� guid
	DECLARE_OLETYPELIB(CSafePwdActiveXCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CSafePwdActiveXCtrl)     // ����ҳ ID
	DECLARE_OLECTLTYPE(CSafePwdActiveXCtrl)		// �������ƺ�����״̬

// ��Ϣӳ��
	DECLARE_MESSAGE_MAP()

// ����ӳ��
	DECLARE_DISPATCH_MAP()

// �¼�ӳ��
	DECLARE_EVENT_MAP()

// ���Ⱥ��¼� ID
public:
	enum {
	};
};

