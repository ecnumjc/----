// LoginDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "animals.h"
#include "LoginDlg.h"
#include "afxdialogex.h"
#include "RegDlg.h"
#include "FindpwdDlg.h"
#include "MainDlg.h"
#include "CategoryDlg.h"

// CLoginDlg 对话框

IMPLEMENT_DYNAMIC(CLoginDlg, CDialogEx)

CLoginDlg::CLoginDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CLoginDlg::IDD, pParent)
	, m_strusername(_T(""))
	, m_pwd(_T(""))
{

}

CLoginDlg::~CLoginDlg()
{
}

void CLoginDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_strusername);
	DDX_Text(pDX, IDC_EDIT2, m_pwd);
	DDX_Control(pDX, IDOK, m_queding);
	DDX_Control(pDX, IDCANCEL, m_quxiao);
}


BEGIN_MESSAGE_MAP(CLoginDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CLoginDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CLoginDlg::OnBnClickedCancel)
END_MESSAGE_MAP()


// CLoginDlg 消息处理程序


void CLoginDlg::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData();
	CString str;
	if (m_strusername.IsEmpty())
	{
		MessageBox("用户名不能为空");
		return;
	}
	if (m_pwd.IsEmpty())
	{
		MessageBox("密码不能为空");
		return;
	}

	CString sql = "select*from login where user_id='" + m_strusername + "' and pw='" + m_pwd + "' ";
	try
	{
		m_AdoConn.OnInitADOConn();
		m_pRs = m_AdoConn.GetRecordSet((_bstr_t)sql);
		if (m_pRs->adoEOF)
		{
			sql = "select*from login where user_id='" + m_strusername + "'";
			m_pRs = m_AdoConn.GetRecordSet((_bstr_t)sql);
			if (!m_pRs->adoEOF)
			{
				if (m_pwd != (char*)(_bstr_t)m_pRs->GetCollect("pw"))
				{
					if (MessageBox("密码错误,是否找回密码?", "提示", MB_YESNO) == IDYES)
					{
						CFindpwdDlg dlg;
						dlg.Name = m_strusername;
						CDialog::OnCancel();
						dlg.DoModal();

					}
				}

			}
			else
			{
				if (MessageBox("用户名不存在，是否注册？", "提示", MB_YESNO) == IDYES)
				{
					
					CRegDlg dlg;
					dlg.m_username = m_strusername;
					CDialog::OnCancel();
					dlg.DoModal();
					CLoginDlg dd;
					dd.DoModal();

				}
				else
					CDialog::OnCancel();
			}
		}
		else
		{
			CDialog::OnCancel();
			//登录成功则打开主界面
			//CMainDlg dlg;
			//dlg.DoModal();
			CCategoryDlg dlg;
			dlg.DoModal();
			//islogin = 1;

		}
		m_AdoConn.ExitADOConn();
	}
	catch (...)
	{
		AfxMessageBox("操作失败");
		return;
	}
}


void CLoginDlg::OnBnClickedCancel()
{
	// TODO:  在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}
