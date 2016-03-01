#pragma once
#include "ADOConn.h"
#include "Picture.h"
#include "afxwin.h"
// CDataDlg �Ի���
#include "LinkButton.h"
class CDataDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CDataDlg)

public:
	CDataDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDataDlg();

// �Ի�������
	enum { IDD = IDD_DATA_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	_RecordsetPtr m_pRs;
	ADOConn m_AdoConn;
	CPicture m_Pic;

	int sec;
	CString id;
	CString mingz;
	CString bieming;
	CString yingwenming;
	CString leixing;
	CString gongneng;
	CString maochang;
	CString shengao;
	CString tizhong;
	CString shouming;
	CString yuanchandi;
	CString cankaojiage;
	CString tupianlaiyuan;
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton1();
	CLinkButton m_liulan;
	CLinkButton m_queding;
	CLinkButton m_quxiao;
};
