
// sjtestDlg.h : 头文件
//

#pragma once
#include "ADOConn.h"
#include "afxcmn.h"
#include "afxwin.h"
#include "LinkButton.h"
// CsjtestDlg 对话框
class CsjtestDlg : public CDialogEx
{
// 构造
public:
	CsjtestDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_SJTEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	_RecordsetPtr m_pRs;
	ADOConn m_AdoConn;
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton4();

	CString m_id;
	CString m_mingzi;
	CString m_bieming;
	CString m_yingwenming;
	CString m_leixing;
	CString m_gongneng;
	CString m_maochang;
	CString m_shengao;
	CString m_tizhong;
	CString m_shouming;
	CString m_yuanchandi;
	CString m_tupianlaiyuan;
	CString m_cankaojiage;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	CString m_chazhao;
	CTabCtrl m_tab;
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
	CStatic m_s1;
	CStatic m_s2;
	CStatic m_s4;
	CStatic m_s5;
	CStatic m_s13;
	CStatic m_s6;
	CStatic m_s11;
	CStatic m_s8;
	CStatic m_s10;
	CStatic m_s7;
	CStatic m_s12;
	CStatic m_s99;
	CEdit m_e1;
	CEdit m_e2;
	CEdit m_e4;
	CEdit m_e5;
	CEdit m_e13;
	CEdit m_e8;
	CEdit m_e10;
	CEdit m_e12;
	CEdit m_e7;
	CEdit m_e6;
	CEdit m_e11;
	CEdit m_e9;

	int dogorcat;
	CLinkButton m_diyitiaojilu;
	CLinkButton m_shangyige;
	CLinkButton m_xiayige;
	CLinkButton m_zuihouyige;
	CLinkButton m_tianjiajilu;
	CLinkButton m_shanchujilu;
	CLinkButton m_gengxinjilu;
	CLinkButton m_zhuandao;
};
