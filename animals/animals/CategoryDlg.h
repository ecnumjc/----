#pragma once
#include "afxwin.h"
#include "LinkButton.h"


// CCategoryDlg 对话框

class CCategoryDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CCategoryDlg)

public:
	CCategoryDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CCategoryDlg();

// 对话框数据
	enum { IDD = IDD_DOGandCAT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedDogbtn();
	afx_msg void OnBnClickedCatbtn();
	CLinkButton m_aigouwu;
	CLinkButton m_aimaowu;
};
