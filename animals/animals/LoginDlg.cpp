// LoginDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "animals.h"
#include "LoginDlg.h"
#include "afxdialogex.h"
#include "RegDlg.h"
#include "FindpwdDlg.h"
#include "MainDlg.h"
#include "CategoryDlg.h"

// CLoginDlg �Ի���

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


// CLoginDlg ��Ϣ�������


void CLoginDlg::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData();
	CString str;
	if (m_strusername.IsEmpty())
	{
		MessageBox("�û�������Ϊ��");
		return;
	}
	if (m_pwd.IsEmpty())
	{
		MessageBox("���벻��Ϊ��");
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
					if (MessageBox("�������,�Ƿ��һ�����?", "��ʾ", MB_YESNO) == IDYES)
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
				if (MessageBox("�û��������ڣ��Ƿ�ע�᣿", "��ʾ", MB_YESNO) == IDYES)
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
			//��¼�ɹ����������
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
		AfxMessageBox("����ʧ��");
		return;
	}
}


void CLoginDlg::OnBnClickedCancel()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}
