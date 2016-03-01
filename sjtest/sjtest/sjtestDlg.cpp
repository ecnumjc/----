
// sjtestDlg.cpp : ʵ���ļ�
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


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

	// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	// ʵ��
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


// CsjtestDlg �Ի���



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


// CsjtestDlg ��Ϣ�������

BOOL CsjtestDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������

	m_tab.InsertItem(0, "��Ȯ���ݹ���");  //��Ӳ���һѡ� 
	m_tab.InsertItem(1, "��è���ݹ���");  //��Ӳ�����ѡ� 
	dogorcat = 100;
	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CsjtestDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CsjtestDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CsjtestDlg::OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
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
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
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
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
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
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
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
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
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
	// TODO:  �ڴ���ӿؼ�֪ͨ����������,��Ӽ�¼
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
	// TODO:  �ڴ���ӿؼ�֪ͨ���������룬ɾ����¼
	if (dogorcat == 100)
	{
		INT_PTR nRes;

		// ��ʾ��Ϣ�Ի���   
		nRes = MessageBox(_T("��ȷ��Ҫɾ������������"), _T("����"), MB_OKCANCEL | MB_ICONQUESTION);
		// �ж���Ϣ�Ի��򷵻�ֵ�����ΪIDCANCEL��return�������������ִ��   
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
				MessageBox("ɾ����¼�ɹ�!");
				OnBnClickedButton5();
			}
			catch (...)
			{
				AfxMessageBox("����ʧ��!");
				return;
			}
		}
	}

	else if (dogorcat == 101)
	{
		INT_PTR nRes;

		// ��ʾ��Ϣ�Ի���   
		nRes = MessageBox(_T("��ȷ��Ҫɾ������������"), _T("����"), MB_OKCANCEL | MB_ICONQUESTION);
		// �ж���Ϣ�Ի��򷵻�ֵ�����ΪIDCANCEL��return�������������ִ��   
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
				MessageBox("ɾ����¼�ɹ�!");
				OnBnClickedButton5();
			}
			catch (...)
			{
				AfxMessageBox("����ʧ��!");
				return;
			}
		}
	}


}


void CsjtestDlg::OnBnClickedButton7()//����
{
	// TODO:  �ڴ���ӿؼ�֪ͨ���������룬�޸ļ�¼
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

			while (m_pRs->adoEOF == 0)//��¼��Ϊ��
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

			while (m_pRs->adoEOF == 0)//��¼��Ϊ��
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


void CsjtestDlg::OnBnClickedButton8()//ת��
{
	// TODO:  �ڴ���ӿؼ�֪ͨ���������룬ת��
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


