#pragma once
#include "ADOConn.h"
#include "Picture.h"
#include "afxwin.h"
#include "LinkButton.h"
// CCatDataDlg 对话框

class CCatDataDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CCatDataDlg)

public:
	CCatDataDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CCatDataDlg();

// 对话框数据
	enum { IDD = IDD_CATDATA_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	_RecordsetPtr m_pRs;
	ADOConn m_AdoConn;
	CPicture m_Pic;


	int sec;
	CString id;


	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton1();
	CString mingz;
	CString bieming;
	CString yingwenming;
	CString leixing;
	CString maochang;
	CString tizhong;
	CString yuanchandi;
	CString cankaojiage;
	CString tupianlaiyuan;
	CLinkButton m_liulan;
	CLinkButton m_queding;
	CLinkButton m_quxiao;
};
