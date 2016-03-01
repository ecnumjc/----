// CategoryDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "animals.h"
#include "CategoryDlg.h"
#include "afxdialogex.h"
#include "MainDlg.h"
#include "MainCatDlg.h"

// CCategoryDlg �Ի���

IMPLEMENT_DYNAMIC(CCategoryDlg, CDialogEx)

CCategoryDlg::CCategoryDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCategoryDlg::IDD, pParent)
{

}

CCategoryDlg::~CCategoryDlg()
{
}

void CCategoryDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_DOGBTN, m_aigouwu);
	DDX_Control(pDX, IDC_CATBTN, m_aimaowu);
}


BEGIN_MESSAGE_MAP(CCategoryDlg, CDialogEx)
	ON_BN_CLICKED(IDC_DOGBTN, &CCategoryDlg::OnBnClickedDogbtn)
	ON_BN_CLICKED(IDC_CATBTN, &CCategoryDlg::OnBnClickedCatbtn)
END_MESSAGE_MAP()


// CCategoryDlg ��Ϣ�������


void CCategoryDlg::OnBnClickedDogbtn()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CMainDlg dlg;
	dlg.DoModal();
	//CDialogEx::OnOK();
}


void CCategoryDlg::OnBnClickedCatbtn()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CMainCatDlg dlg;
	dlg.DoModal();
	//CDialogEx::OnOK();
}
