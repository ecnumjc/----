// CategoryDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "animals.h"
#include "CategoryDlg.h"
#include "afxdialogex.h"
#include "MainDlg.h"
#include "MainCatDlg.h"

// CCategoryDlg 对话框

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


// CCategoryDlg 消息处理程序


void CCategoryDlg::OnBnClickedDogbtn()
{
	// TODO:  在此添加控件通知处理程序代码
	CMainDlg dlg;
	dlg.DoModal();
	//CDialogEx::OnOK();
}


void CCategoryDlg::OnBnClickedCatbtn()
{
	// TODO:  在此添加控件通知处理程序代码
	CMainCatDlg dlg;
	dlg.DoModal();
	//CDialogEx::OnOK();
}
