#pragma once
#include "afxwin.h"
#include "LinkButton.h"


// CCategoryDlg �Ի���

class CCategoryDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CCategoryDlg)

public:
	CCategoryDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CCategoryDlg();

// �Ի�������
	enum { IDD = IDD_DOGandCAT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedDogbtn();
	afx_msg void OnBnClickedCatbtn();
	CLinkButton m_aigouwu;
	CLinkButton m_aimaowu;
};
