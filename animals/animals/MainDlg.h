#pragma once
#include "afxcmn.h"
#include "Picture.h"
#include "ADOConn.h"
#include "afxwin.h"
// CMainDlg 对话框
#include "LinkButton.h"
#include "afxdtctl.h"
class CMainDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CMainDlg)

public:
	CMainDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMainDlg();

// 对话框数据
	enum { IDD = IDD_member };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_tab;
	CPicture m_Pic;

	_RecordsetPtr m_pRs;
	ADOConn m_AdoConn;


	virtual BOOL OnInitDialog();
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButtonPre();
	afx_msg void OnBnClickedButtonNext();
	CString strda;
	CString strzhong;
	CString strxiao;
	CString strduan;
	CString strchang;

	CLinkButton m_da;
	CLinkButton m_zhong;
	CLinkButton m_xiao;
	CLinkButton m_duan;
	CLinkButton m_chang;

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
	CLinkButton m_sousuo;
	CLinkButton m_shangyige;
	CLinkButton m_xiayige;

	CStatic m_s1;
	CStatic m_s3;
	CStatic m_s6;
	CStatic m_s7;
	CStatic m_s8;
	CStatic m_s9;
	CStatic m_s10;
	CStatic m_s19;
	CStatic m_s11;
	CStatic m_s12;
	CStatic m_s13;
	CStatic m_s14;
	CStatic m_s15;
	CStatic m_s4;
	CStatic m_s5;
	CStatic m_s16;
	CStatic m_s18;

	CEdit m_e11;
	CEdit m_e1;
	CEdit m_e2;
	CEdit m_e3;
	CEdit m_e8;
	CEdit m_e6;
	CEdit m_e12;
	CEdit m_e7;
	CEdit m_e4;
	CEdit m_e5;
	CEdit m_e9;
	CEdit m_e10;

	afx_msg void OnBnClickedButton4();

	CLinkButton m_b4;
	CStatic m_s27;
	CStatic m_s22;
	CStatic m_s17;
	CStatic m_s20;
	CStatic m_s21;

	CEdit m_e16;
	CEdit m_e13;
	CEdit m_e14;
	CEdit m_e15;
	CStatic m_s23;
	CEdit m_e17;
	CButton m_b5;
	CButton m_b7;
	CDateTimeCtrl m_date1;
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton7();
	CString str_lx;
	CString str_sg;
	CString str_mc;
	CString str_tz;
	CString str_rj;
};
