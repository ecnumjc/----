
// sjtestDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "sjtest.h"
#include "sjtestDlg.h"
#include "afxdialogex.h"
#include "DataDlg.h"
#include "CatDataDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

	// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CsjtestDlg 对话框



CsjtestDlg::CsjtestDlg(CWnd* pParent /*=NULL*/)
: CDialogEx(CsjtestDlg::IDD, pParent)
, m_mingzi(_T(""))
, m_bieming(_T(""))
, m_yingwenming(_T(""))
, m_leixing(_T(""))
, m_gongneng(_T(""))
, m_maochang(_T(""))
, m_shengao(_T(""))
, m_tizhong(_T(""))
, m_shouming(_T(""))
, m_yuanchandi(_T(""))
, m_tupianlaiyuan(_T(""))
, m_cankaojiage(_T(""))
, m_chazhao(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CsjtestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_mingzi);
	DDX_Text(pDX, IDC_EDIT2, m_bieming);
	DDX_Text(pDX, IDC_EDIT4, m_yingwenming);
	DDX_Text(pDX, IDC_EDIT5, m_leixing);
	DDX_Text(pDX, IDC_EDIT6, m_gongneng);
	DDX_Text(pDX, IDC_EDIT8, m_maochang);
	DDX_Text(pDX, IDC_EDIT9, m_shengao);
	DDX_Text(pDX, IDC_EDIT10, m_tizhong);
	DDX_Text(pDX, IDC_EDIT11, m_shouming);
	DDX_Text(pDX, IDC_EDIT12, m_yuanchandi);
	DDX_Text(pDX, IDC_EDIT13, m_tupianlaiyuan);
	DDX_Text(pDX, IDC_EDIT7, m_cankaojiage);
	DDX_Text(pDX, IDC_EDIT3, m_chazhao);
	DDX_Control(pDX, IDC_TAB1, m_tab);
	DDX_Control(pDX, IDC_STATIC1, m_s1);
	DDX_Control(pDX, IDC_STATIC2, m_s2);
	DDX_Control(pDX, IDC_STATIC4, m_s4);
	DDX_Control(pDX, IDC_STATIC5, m_s5);
	DDX_Control(pDX, IDC_STATIC13, m_s13);
	DDX_Control(pDX, IDC_STATIC6, m_s6);
	DDX_Control(pDX, IDC_STATIC11, m_s11);
	DDX_Control(pDX, IDC_STATIC8, m_s8);
	DDX_Control(pDX, IDC_STATIC10, m_s10);
	DDX_Control(pDX, IDC_STATIC7, m_s7);
	DDX_Control(pDX, IDC_STATIC12, m_s12);
	DDX_Control(pDX, IDC_STATIC99, m_s99);
	DDX_Control(pDX, IDC_EDIT1, m_e1);
	DDX_Control(pDX, IDC_EDIT2, m_e2);
	DDX_Control(pDX, IDC_EDIT4, m_e4);
	DDX_Control(pDX, IDC_EDIT5, m_e5);
	DDX_Control(pDX, IDC_EDIT13, m_e13);
	DDX_Control(pDX, IDC_EDIT8, m_e8);
	DDX_Control(pDX, IDC_EDIT10, m_e10);
	DDX_Control(pDX, IDC_EDIT12, m_e12);
	DDX_Control(pDX, IDC_EDIT7, m_e7);
	DDX_Control(pDX, IDC_EDIT6, m_e6);
	DDX_Control(pDX, IDC_EDIT11, m_e11);
	DDX_Control(pDX, IDC_EDIT9, m_e9);
	DDX_Control(pDX, IDC_BUTTON5, m_diyitiaojilu);
	DDX_Control(pDX, IDC_BUTTON4, m_shangyige);
	DDX_Control(pDX, IDC_BUTTON1, m_xiayige);
	DDX_Control(pDX, IDC_BUTTON6, m_zuihouyige);
	DDX_Control(pDX, IDC_BUTTON2, m_tianjiajilu);
	DDX_Control(pDX, IDC_BUTTON3, m_shanchujilu);
	DDX_Control(pDX, IDC_BUTTON7, m_gengxinjilu);
	DDX_Control(pDX, IDC_BUTTON8, m_zhuandao);
}

BEGIN_MESSAGE_MAP(CsjtestDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON5, &CsjtestDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON4, &CsjtestDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON1, &CsjtestDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON6, &CsjtestDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON2, &CsjtestDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CsjtestDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON7, &CsjtestDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CsjtestDlg::OnBnClickedButton8)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, &CsjtestDlg::OnTcnSelchangeTab1)
END_MESSAGE_MAP()


// CsjtestDlg 消息处理程序

BOOL CsjtestDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码

	m_tab.InsertItem(0, "爱犬数据管理");  //添加参数一选项卡 
	m_tab.InsertItem(1, "爱猫数据管理");  //添加参数二选项卡 
	dogorcat = 100;
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CsjtestDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CsjtestDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CsjtestDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CsjtestDlg::OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO:  在此添加控件通知处理程序代码
	int CurSel = m_tab.GetCurSel();
	switch (CurSel)
	{
	case 0:
		dogorcat = 100;
		m_e1.SetWindowTextA("");
		m_e2.SetWindowTextA("");
		m_e4.SetWindowTextA("");
		m_e5.SetWindowTextA("");
		m_e13.SetWindowTextA("");
		m_e8.SetWindowTextA("");
		m_e10.SetWindowTextA("");
		m_e12.SetWindowTextA("");
		m_e7.SetWindowTextA("");
		m_e6.SetWindowTextA("");
		m_e11.SetWindowTextA("");
		m_e9.SetWindowTextA("");

	    m_s1.ShowWindow(true);
		m_s2.ShowWindow(true);
		m_s4.ShowWindow(true);
		m_s5.ShowWindow(true);
		m_s13.ShowWindow(true);
		m_s6.ShowWindow(true);
		m_s11.ShowWindow(true);
		m_s8.ShowWindow(true);
		m_s10.ShowWindow(true);
		m_s7.ShowWindow(true);
		m_s12.ShowWindow(true);
		m_s99.ShowWindow(true);
		m_e1.ShowWindow(true);
		m_e2.ShowWindow(true);
		m_e4.ShowWindow(true);
		m_e5.ShowWindow(true);
		m_e13.ShowWindow(true);
		m_e8.ShowWindow(true);
		m_e10.ShowWindow(true);
		m_e12.ShowWindow(true);
		m_e7.ShowWindow(true);
		m_e6.ShowWindow(true);
		m_e11.ShowWindow(true);
		m_e9.ShowWindow(true);

		break;
	case 1:
		dogorcat = 101;
		m_e1.SetWindowTextA("");
		m_e2.SetWindowTextA("");
		m_e4.SetWindowTextA("");
		m_e5.SetWindowTextA("");
		m_e13.SetWindowTextA("");
		m_e8.SetWindowTextA("");
		m_e10.SetWindowTextA("");
		m_e12.SetWindowTextA("");
		m_e7.SetWindowTextA("");
		m_e6.SetWindowTextA("");
		m_e11.SetWindowTextA("");
		m_e9.SetWindowTextA("");

		m_s1.ShowWindow(true);
		m_s2.ShowWindow(true);
		m_s4.ShowWindow(true);
		m_s5.ShowWindow(true);
		m_s13.ShowWindow(true);
		m_s8.ShowWindow(true);
		m_s10.ShowWindow(true);
		m_s7.ShowWindow(true);
		m_s12.ShowWindow(true);
		m_e1.ShowWindow(true);
		m_e2.ShowWindow(true);
		m_e4.ShowWindow(true);
		m_e5.ShowWindow(true);
		m_e13.ShowWindow(true);
		m_e8.ShowWindow(true);
		m_e10.ShowWindow(true);
		m_e12.ShowWindow(true);
		m_e7.ShowWindow(true);

		m_s6.ShowWindow(false);
		m_s11.ShowWindow(false);
		m_s99.ShowWindow(false);

		m_e6.ShowWindow(false);
		m_e11.ShowWindow(false);
		m_e9.ShowWindow(false);
		break;
	default:
		;
	}
	*pResult = 0;
}



void CsjtestDlg::OnBnClickedButton5()
{
	// TODO:  在此添加控件通知处理程序代码
	if (dogorcat == 100)
	{
		try{
			CString sql = "select * from dogdata";
			m_AdoConn.OnInitADOConn();
			m_pRs = m_AdoConn.GetRecordSet((_bstr_t)sql);
			m_pRs->MoveFirst();

			m_id = (char*)(_bstr_t)m_pRs->GetCollect("ID");
			m_mingzi = (char*)(_bstr_t)m_pRs->GetCollect("name");
			m_bieming = (char*)(_bstr_t)m_pRs->GetCollect("bm");
			m_yingwenming = (char*)(_bstr_t)m_pRs->GetCollect("ywm");
			m_leixing = (char*)(_bstr_t)m_pRs->GetCollect("lx");
			m_gongneng = (char*)(_bstr_t)m_pRs->GetCollect("gn");
			m_maochang = (char*)(_bstr_t)m_pRs->GetCollect("mc");
			m_shengao = (char*)(_bstr_t)m_pRs->GetCollect("sg");
			m_tizhong = (char*)(_bstr_t)m_pRs->GetCollect("tz");
			m_shouming = (char*)(_bstr_t)m_pRs->GetCollect("sm");
			m_yuanchandi = (char*)(_bstr_t)m_pRs->GetCollect("ycd");
			m_cankaojiage = (char*)(_bstr_t)m_pRs->GetCollect("ckjg");
			m_tupianlaiyuan = (char*)(_bstr_t)m_pRs->GetCollect("tply");

			UpdateData(false);
		}
		catch (_com_error e) {
		}
	}
	else if (dogorcat ==101)
	{
		try{
			CString sql = "select * from catdata";
			m_AdoConn.OnInitADOConn();
			m_pRs = m_AdoConn.GetRecordSet((_bstr_t)sql);
			m_pRs->MoveFirst();

			m_id = (char*)(_bstr_t)m_pRs->GetCollect("ID");
			m_mingzi = (char*)(_bstr_t)m_pRs->GetCollect("name");
			m_bieming = (char*)(_bstr_t)m_pRs->GetCollect("bm");
			m_yingwenming = (char*)(_bstr_t)m_pRs->GetCollect("ywm");
			m_leixing = (char*)(_bstr_t)m_pRs->GetCollect("lx");			
			m_maochang = (char*)(_bstr_t)m_pRs->GetCollect("mc");
			m_tizhong = (char*)(_bstr_t)m_pRs->GetCollect("tz");
			m_yuanchandi = (char*)(_bstr_t)m_pRs->GetCollect("ycd");
			m_cankaojiage = (char*)(_bstr_t)m_pRs->GetCollect("ckjg");
			m_tupianlaiyuan = (char*)(_bstr_t)m_pRs->GetCollect("tply");


			UpdateData(false);
		}
		catch (_com_error e) {
		}
	}

}


void CsjtestDlg::OnBnClickedButton4()
{
	// TODO:  在此添加控件通知处理程序代码
	if (dogorcat ==100)
	{
		try{
			m_pRs->MovePrevious();
			m_id = (char*)(_bstr_t)m_pRs->GetCollect("ID");
			m_mingzi = (char*)(_bstr_t)m_pRs->GetCollect("name");
			m_bieming = (char*)(_bstr_t)m_pRs->GetCollect("bm");
			m_yingwenming = (char*)(_bstr_t)m_pRs->GetCollect("ywm");
			m_leixing = (char*)(_bstr_t)m_pRs->GetCollect("lx");
			m_gongneng = (char*)(_bstr_t)m_pRs->GetCollect("gn");
			m_maochang = (char*)(_bstr_t)m_pRs->GetCollect("mc");
			m_shengao = (char*)(_bstr_t)m_pRs->GetCollect("sg");
			m_tizhong = (char*)(_bstr_t)m_pRs->GetCollect("tz");
			m_shouming = (char*)(_bstr_t)m_pRs->GetCollect("sm");
			m_yuanchandi = (char*)(_bstr_t)m_pRs->GetCollect("ycd");
			m_cankaojiage = (char*)(_bstr_t)m_pRs->GetCollect("ckjg");
			m_tupianlaiyuan = (char*)(_bstr_t)m_pRs->GetCollect("tply");

			UpdateData(false);
		}
		catch (_com_error e) {
		}
	}
	else if (dogorcat == 101)
	{
		try{
			m_pRs->MovePrevious();
			m_id = (char*)(_bstr_t)m_pRs->GetCollect("ID");
			m_mingzi = (char*)(_bstr_t)m_pRs->GetCollect("name");
			m_bieming = (char*)(_bstr_t)m_pRs->GetCollect("bm");
			m_yingwenming = (char*)(_bstr_t)m_pRs->GetCollect("ywm");
			m_leixing = (char*)(_bstr_t)m_pRs->GetCollect("lx");		
			m_maochang = (char*)(_bstr_t)m_pRs->GetCollect("mc");
			m_tizhong = (char*)(_bstr_t)m_pRs->GetCollect("tz");
			m_yuanchandi = (char*)(_bstr_t)m_pRs->GetCollect("ycd");
			m_cankaojiage = (char*)(_bstr_t)m_pRs->GetCollect("ckjg");
			m_tupianlaiyuan = (char*)(_bstr_t)m_pRs->GetCollect("tply");

			UpdateData(false);
		}
		catch (_com_error e) {
		}
	}

}


void CsjtestDlg::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	if (dogorcat == 100)
	{
		try{
			m_pRs->MoveNext();
			m_id = (char*)(_bstr_t)m_pRs->GetCollect("ID");
			m_mingzi = (char*)(_bstr_t)m_pRs->GetCollect("name");
			m_bieming = (char*)(_bstr_t)m_pRs->GetCollect("bm");
			m_yingwenming = (char*)(_bstr_t)m_pRs->GetCollect("ywm");
			m_leixing = (char*)(_bstr_t)m_pRs->GetCollect("lx");
			m_gongneng = (char*)(_bstr_t)m_pRs->GetCollect("gn");
			m_maochang = (char*)(_bstr_t)m_pRs->GetCollect("mc");
			m_shengao = (char*)(_bstr_t)m_pRs->GetCollect("sg");
			m_tizhong = (char*)(_bstr_t)m_pRs->GetCollect("tz");
			m_shouming = (char*)(_bstr_t)m_pRs->GetCollect("sm");
			m_yuanchandi = (char*)(_bstr_t)m_pRs->GetCollect("ycd");
			m_cankaojiage = (char*)(_bstr_t)m_pRs->GetCollect("ckjg");
			m_tupianlaiyuan = (char*)(_bstr_t)m_pRs->GetCollect("tply");

			UpdateData(false);
		}
		catch (_com_error e) {
		}
	}
	else if (dogorcat == 101)
	{
		try{
			m_pRs->MoveNext();
			m_id = (char*)(_bstr_t)m_pRs->GetCollect("ID");
			m_mingzi = (char*)(_bstr_t)m_pRs->GetCollect("name");
			m_bieming = (char*)(_bstr_t)m_pRs->GetCollect("bm");
			m_yingwenming = (char*)(_bstr_t)m_pRs->GetCollect("ywm");
			m_leixing = (char*)(_bstr_t)m_pRs->GetCollect("lx");
			m_maochang = (char*)(_bstr_t)m_pRs->GetCollect("mc");
			m_tizhong = (char*)(_bstr_t)m_pRs->GetCollect("tz");
			m_yuanchandi = (char*)(_bstr_t)m_pRs->GetCollect("ycd");
			m_cankaojiage = (char*)(_bstr_t)m_pRs->GetCollect("ckjg");
			m_tupianlaiyuan = (char*)(_bstr_t)m_pRs->GetCollect("tply");

			UpdateData(false);
		}
		catch (_com_error e) {
		}
	}

}


void CsjtestDlg::OnBnClickedButton6()
{
	// TODO:  在此添加控件通知处理程序代码
	if (dogorcat == 100)
	{
		try{
			CString sql = "select * from dogdata";
			m_AdoConn.OnInitADOConn();
			m_pRs = m_AdoConn.GetRecordSet((_bstr_t)sql);

			m_pRs->MoveLast();
			m_id = (char*)(_bstr_t)m_pRs->GetCollect("ID");
			m_mingzi = (char*)(_bstr_t)m_pRs->GetCollect("name");
			m_bieming = (char*)(_bstr_t)m_pRs->GetCollect("bm");
			m_yingwenming = (char*)(_bstr_t)m_pRs->GetCollect("ywm");
			m_leixing = (char*)(_bstr_t)m_pRs->GetCollect("lx");
			m_gongneng = (char*)(_bstr_t)m_pRs->GetCollect("gn");
			m_maochang = (char*)(_bstr_t)m_pRs->GetCollect("mc");
			m_shengao = (char*)(_bstr_t)m_pRs->GetCollect("sg");
			m_tizhong = (char*)(_bstr_t)m_pRs->GetCollect("tz");
			m_shouming = (char*)(_bstr_t)m_pRs->GetCollect("sm");
			m_yuanchandi = (char*)(_bstr_t)m_pRs->GetCollect("ycd");
			m_cankaojiage = (char*)(_bstr_t)m_pRs->GetCollect("ckjg");
			m_tupianlaiyuan = (char*)(_bstr_t)m_pRs->GetCollect("tply");

			UpdateData(false);
		}
		catch (_com_error e) {
		}
	}
	else if (dogorcat == 101)
	{
		try{
			CString sql = "select * from catdata";
			m_AdoConn.OnInitADOConn();
			m_pRs = m_AdoConn.GetRecordSet((_bstr_t)sql);

			m_pRs->MoveLast();
			m_id = (char*)(_bstr_t)m_pRs->GetCollect("ID");
			m_mingzi = (char*)(_bstr_t)m_pRs->GetCollect("name");
			m_bieming = (char*)(_bstr_t)m_pRs->GetCollect("bm");
			m_yingwenming = (char*)(_bstr_t)m_pRs->GetCollect("ywm");
			m_leixing = (char*)(_bstr_t)m_pRs->GetCollect("lx");
			m_maochang = (char*)(_bstr_t)m_pRs->GetCollect("mc");
			m_tizhong = (char*)(_bstr_t)m_pRs->GetCollect("tz");
			m_yuanchandi = (char*)(_bstr_t)m_pRs->GetCollect("ycd");
			m_cankaojiage = (char*)(_bstr_t)m_pRs->GetCollect("ckjg");
			m_tupianlaiyuan = (char*)(_bstr_t)m_pRs->GetCollect("tply");

			UpdateData(false);
		}
		catch (_com_error e) {
		}
	}

}


void CsjtestDlg::OnBnClickedButton2()
{
	// TODO:  在此添加控件通知处理程序代码,添加记录
	if (dogorcat == 100)
	{
		CDataDlg dlg;
		dlg.sec = 1;
		dlg.DoModal();
	}
	else if (dogorcat == 101)
	{
		CCatDataDlg dlg;
		dlg.sec = 1;
		dlg.DoModal();
	}

}


void CsjtestDlg::OnBnClickedButton3()
{
	// TODO:  在此添加控件通知处理程序代码，删除记录
	if (dogorcat == 100)
	{
		INT_PTR nRes;

		// 显示消息对话框   
		nRes = MessageBox(_T("您确定要删除该条数据吗？"), _T("提醒"), MB_OKCANCEL | MB_ICONQUESTION);
		// 判断消息对话框返回值。如果为IDCANCEL就return，否则继续向下执行   
		if (IDCANCEL == nRes)
			return;
		else
		{
			try
			{
				CString sql;
				sql.Format("delete from dogdata where name='%s'and bm='%s'and ywm='%s'and lx='%s'and gn='%s'and mc='%s'and sg='%s'and tz='%s'and \
						   					   					   				   				   sm='%s'and ycd='%s'and ckjg='%s'and tply='%s'", \
																								   m_mingzi, m_bieming, m_yingwenming, m_leixing, m_gongneng, m_maochang, m_shengao, m_tizhong, m_shouming, m_yuanchandi, m_cankaojiage, m_tupianlaiyuan);

				m_AdoConn.ExecuteSQL((_bstr_t)sql);
				MessageBox("删除记录成功!");
				OnBnClickedButton5();
			}
			catch (...)
			{
				AfxMessageBox("操作失败!");
				return;
			}
		}
	}

	else if (dogorcat == 101)
	{
		INT_PTR nRes;

		// 显示消息对话框   
		nRes = MessageBox(_T("您确定要删除该条数据吗？"), _T("提醒"), MB_OKCANCEL | MB_ICONQUESTION);
		// 判断消息对话框返回值。如果为IDCANCEL就return，否则继续向下执行   
		if (IDCANCEL == nRes)
			return;
		else
		{
			try
			{
				CString sql;
				sql.Format("delete from catdata where name='%s'and bm='%s'and ywm='%s'and lx='%s'and  mc='%s'and  tz='%s'and \ ycd='%s'and ckjg='%s'and tply='%s'", \
					m_mingzi, m_bieming, m_yingwenming, m_leixing,  m_maochang, m_tizhong, m_yuanchandi, m_cankaojiage, m_tupianlaiyuan);

				m_AdoConn.ExecuteSQL((_bstr_t)sql);
				MessageBox("删除记录成功!");
				OnBnClickedButton5();
			}
			catch (...)
			{
				AfxMessageBox("操作失败!");
				return;
			}
		}
	}


}


void CsjtestDlg::OnBnClickedButton7()//更新
{
	// TODO:  在此添加控件通知处理程序代码，修改记录
	if (dogorcat == 100)
	{
		CDataDlg dlg;
		dlg.sec = 2;
		dlg.id = m_id;
		dlg.mingz = m_mingzi;
		dlg.bieming = m_bieming;
		dlg.yingwenming = m_yingwenming;
		dlg.leixing = m_leixing;
		dlg.gongneng = m_gongneng;
		dlg.maochang = m_maochang;
		dlg.shengao = m_shengao;
		dlg.tizhong = m_tizhong;
		dlg.shouming = m_shouming;
		dlg.yuanchandi = m_yuanchandi;
		dlg.cankaojiage = m_cankaojiage;
		dlg.tupianlaiyuan = m_tupianlaiyuan;

		dlg.DoModal();
		try{
			CString sql = "select * from dogdata";
			m_AdoConn.OnInitADOConn();
			m_pRs = m_AdoConn.GetRecordSet((_bstr_t)sql);

			while (m_pRs->adoEOF == 0)//记录不为空
			{
				CString m_id_temp = (char*)(_bstr_t)m_pRs->GetCollect("ID");
				if (m_id == m_id_temp)
				{
					m_mingzi = (char*)(_bstr_t)m_pRs->GetCollect("name");
					m_bieming = (char*)(_bstr_t)m_pRs->GetCollect("bm");
					m_yingwenming = (char*)(_bstr_t)m_pRs->GetCollect("ywm");
					m_leixing = (char*)(_bstr_t)m_pRs->GetCollect("lx");
					m_gongneng = (char*)(_bstr_t)m_pRs->GetCollect("gn");
					m_maochang = (char*)(_bstr_t)m_pRs->GetCollect("mc");
					m_shengao = (char*)(_bstr_t)m_pRs->GetCollect("sg");
					m_tizhong = (char*)(_bstr_t)m_pRs->GetCollect("tz");
					m_shouming = (char*)(_bstr_t)m_pRs->GetCollect("sm");
					m_yuanchandi = (char*)(_bstr_t)m_pRs->GetCollect("ycd");
					m_cankaojiage = (char*)(_bstr_t)m_pRs->GetCollect("ckjg");
					m_tupianlaiyuan = (char*)(_bstr_t)m_pRs->GetCollect("tply");

					UpdateData(false);
				}
				m_pRs->MoveNext();
			}


		}
		catch (_com_error e) {
		}

	}
	else if (dogorcat == 101)
	{
		CCatDataDlg dlg;
		dlg.sec = 2;
		dlg.id = m_id;
		dlg.mingz = m_mingzi;
		dlg.bieming = m_bieming;
		dlg.yingwenming = m_yingwenming;
		dlg.leixing = m_leixing;

		dlg.maochang = m_maochang;

		dlg.tizhong = m_tizhong;

		dlg.yuanchandi = m_yuanchandi;
		dlg.cankaojiage = m_cankaojiage;
		dlg.tupianlaiyuan = m_tupianlaiyuan;

		dlg.DoModal();
		try{
			CString sql = "select * from catdata";
			m_AdoConn.OnInitADOConn();
			m_pRs = m_AdoConn.GetRecordSet((_bstr_t)sql);

			while (m_pRs->adoEOF == 0)//记录不为空
			{
				CString m_id_temp = (char*)(_bstr_t)m_pRs->GetCollect("ID");
				if (m_id == m_id_temp)
				{
					m_mingzi = (char*)(_bstr_t)m_pRs->GetCollect("name");
					m_bieming = (char*)(_bstr_t)m_pRs->GetCollect("bm");
					m_yingwenming = (char*)(_bstr_t)m_pRs->GetCollect("ywm");
					m_leixing = (char*)(_bstr_t)m_pRs->GetCollect("lx");
	
					m_maochang = (char*)(_bstr_t)m_pRs->GetCollect("mc");

					m_tizhong = (char*)(_bstr_t)m_pRs->GetCollect("tz");

					m_yuanchandi = (char*)(_bstr_t)m_pRs->GetCollect("ycd");
					m_cankaojiage = (char*)(_bstr_t)m_pRs->GetCollect("ckjg");
					m_tupianlaiyuan = (char*)(_bstr_t)m_pRs->GetCollect("tply");

					UpdateData(false);
				}
				m_pRs->MoveNext();
			}


		}
		catch (_com_error e) {
		}
	}


}


void CsjtestDlg::OnBnClickedButton8()//转到
{
	// TODO:  在此添加控件通知处理程序代码，转到
	if (dogorcat ==100)
	{
		try{
			UpdateData();
			CString sql;
			sql.Format("select * from dogdata where name='%s'", m_chazhao);

			m_AdoConn.OnInitADOConn();
			m_pRs = m_AdoConn.GetRecordSet((_bstr_t)sql);
			m_pRs->MoveFirst();

			m_mingzi = (char*)(_bstr_t)m_pRs->GetCollect("name");
			m_bieming = (char*)(_bstr_t)m_pRs->GetCollect("bm");
			m_yingwenming = (char*)(_bstr_t)m_pRs->GetCollect("ywm");
			m_leixing = (char*)(_bstr_t)m_pRs->GetCollect("lx");
			m_gongneng = (char*)(_bstr_t)m_pRs->GetCollect("gn");
			m_maochang = (char*)(_bstr_t)m_pRs->GetCollect("mc");
			m_shengao = (char*)(_bstr_t)m_pRs->GetCollect("sg");
			m_tizhong = (char*)(_bstr_t)m_pRs->GetCollect("tz");
			m_shouming = (char*)(_bstr_t)m_pRs->GetCollect("sm");
			m_yuanchandi = (char*)(_bstr_t)m_pRs->GetCollect("ycd");
			m_cankaojiage = (char*)(_bstr_t)m_pRs->GetCollect("ckjg");
			m_tupianlaiyuan = (char*)(_bstr_t)m_pRs->GetCollect("tply");

			UpdateData(false);
		}
		catch (_com_error e) {
		}

	}
	else if (dogorcat == 101)
	{
		try{
			UpdateData();
			CString sql;
			sql.Format("select * from catdata where name='%s'", m_chazhao);

			m_AdoConn.OnInitADOConn();
			m_pRs = m_AdoConn.GetRecordSet((_bstr_t)sql);
			m_pRs->MoveFirst();

			m_mingzi = (char*)(_bstr_t)m_pRs->GetCollect("name");
			m_bieming = (char*)(_bstr_t)m_pRs->GetCollect("bm");
			m_yingwenming = (char*)(_bstr_t)m_pRs->GetCollect("ywm");
			m_leixing = (char*)(_bstr_t)m_pRs->GetCollect("lx");
			m_maochang = (char*)(_bstr_t)m_pRs->GetCollect("mc");
			m_tizhong = (char*)(_bstr_t)m_pRs->GetCollect("tz");
			m_yuanchandi = (char*)(_bstr_t)m_pRs->GetCollect("ycd");
			m_cankaojiage = (char*)(_bstr_t)m_pRs->GetCollect("ckjg");
			m_tupianlaiyuan = (char*)(_bstr_t)m_pRs->GetCollect("tply");

			UpdateData(false);
		}
		catch (_com_error e) {
		}
	}
}


