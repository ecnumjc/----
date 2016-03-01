// MainCatDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "animals.h"
#include "MainCatDlg.h"
#include "afxdialogex.h"


// CMainCatDlg 对话框

IMPLEMENT_DYNAMIC(CMainCatDlg, CDialogEx)

CMainCatDlg::CMainCatDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMainCatDlg::IDD, pParent)
	, m_bieming(_T(""))
	, m_yingwenming(_T(""))
	, m_leixing(_T(""))
	, m_cankaojiage(_T(""))
	, m_maochang(_T(""))
	, m_tizhong(_T(""))
	, m_shouming(_T(""))
	, m_yuanchandi(_T(""))
	, m_tupianlaiyuan(_T(""))
	, m_mingzi(_T(""))
	, str_lx(_T(""))
	, str_mc(_T(""))
	, str_tz(_T(""))
	, str_rj(_T(""))
{

}

CMainCatDlg::~CMainCatDlg()
{
}

void CMainCatDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TAB1, m_tab);
	DDX_Control(pDX, IDC_CHECK3, m_da);
	DDX_Control(pDX, IDC_CHECK4, m_zhong);
	DDX_Control(pDX, IDC_CHECK5, m_xiao);
	DDX_Control(pDX, IDC_CHECK6, m_duan);
	DDX_Control(pDX, IDC_CHECK7, m_chang);

	DDX_Control(pDX, IDC_EDIT16, m_e16);
	DDX_Control(pDX, IDC_EDIT13, m_e13);
	DDX_Control(pDX, IDC_EDIT15, m_e15);
	DDX_Control(pDX, IDC_STATIC1, m_s1);
	DDX_Control(pDX, IDC_STATIC3, m_s3);
	DDX_Control(pDX, IDC_STATIC6, m_s6);
	DDX_Control(pDX, IDC_STATIC7, m_s7);
	DDX_Control(pDX, IDC_STATIC8, m_s8);
	DDX_Control(pDX, IDC_STATIC9, m_s9);
	DDX_Control(pDX, IDC_STATIC19, m_s19);
	DDX_Control(pDX, IDC_STATIC11, m_s11);
	DDX_Control(pDX, IDC_STATIC13, m_s13);

	DDX_Control(pDX, IDC_STATIC15, m_s15);
	DDX_Control(pDX, IDC_STATIC18, m_s18);
	DDX_Control(pDX, IDC_STATIC4, m_s4);
	DDX_Control(pDX, IDC_STATIC5, m_s5);
	DDX_Control(pDX, IDC_STATIC16, m_s16);
	DDX_Control(pDX, IDC_STATIC27, m_s27);
	DDX_Control(pDX, IDC_STATIC22, m_s22);
	DDX_Control(pDX, IDC_STATIC17, m_s17);
	DDX_Control(pDX, IDC_STATIC21, m_s21);
	DDX_Control(pDX, IDC_BUTTON4, m_b4);
	DDX_Control(pDX, IDC_BUTTON1, m_sousuo);
	DDX_Control(pDX, IDC_BUTTON_PRE, m_shangyige);
	DDX_Control(pDX, IDC_BUTTON_NEXT, m_xiayige);
	DDX_Control(pDX, IDC_EDIT11, m_e11);
	DDX_Control(pDX, IDC_EDIT1, m_e1);
	DDX_Control(pDX, IDC_EDIT2, m_e2);
	DDX_Control(pDX, IDC_EDIT3, m_e3);
	DDX_Control(pDX, IDC_EDIT8, m_e8);
	DDX_Control(pDX, IDC_EDIT12, m_e12);
	DDX_Control(pDX, IDC_EDIT7, m_e7);
	DDX_Control(pDX, IDC_EDIT5, m_e5);

	DDX_Control(pDX, IDC_EDIT10, m_e10);
	DDX_Text(pDX, IDC_EDIT2, m_bieming);
	DDX_Text(pDX, IDC_EDIT3, m_yingwenming);
	DDX_Text(pDX, IDC_EDIT8, m_leixing);
	DDX_Text(pDX, IDC_EDIT12, m_cankaojiage);
	DDX_Text(pDX, IDC_EDIT7, m_maochang);
	DDX_Text(pDX, IDC_EDIT5, m_tizhong);

	DDX_Text(pDX, IDC_EDIT10, m_yuanchandi);
	DDX_Text(pDX, IDC_EDIT11, m_tupianlaiyuan);
	DDX_Text(pDX, IDC_EDIT1, m_mingzi);
	DDX_Control(pDX, IDC_EDIT17, m_e17);
	DDX_Control(pDX, IDC_STATIC23, m_s23);
	DDX_Control(pDX, IDC_BUTTON5, m_b5);
	DDX_Control(pDX, IDC_BUTTON7, m_b7);
	DDX_Control(pDX, IDC_DATETIMEPICKER1, m_date1);

	DDX_Text(pDX, IDC_EDIT16, str_lx);
	DDX_Text(pDX, IDC_EDIT13, str_mc);
	DDX_Text(pDX, IDC_EDIT15, str_tz);
	DDX_Text(pDX, IDC_EDIT17, str_rj);
}


BEGIN_MESSAGE_MAP(CMainCatDlg, CDialogEx)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, &CMainCatDlg::OnTcnSelchangeTab1)
	ON_BN_CLICKED(IDC_BUTTON1, &CMainCatDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON_PRE, &CMainCatDlg::OnBnClickedButtonPre)
	ON_BN_CLICKED(IDC_BUTTON_NEXT, &CMainCatDlg::OnBnClickedButtonNext)
	ON_BN_CLICKED(IDC_BUTTON4, &CMainCatDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CMainCatDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON7, &CMainCatDlg::OnBnClickedButton7)
END_MESSAGE_MAP()


// CMainCatDlg 消息处理程序


BOOL CMainCatDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	m_tab.InsertItem(0, "我想买猫");  //添加参数一选项卡 
	m_tab.InsertItem(1, "我的宠物猫信息");  //添加参数二选项卡 


	strda = "";
	strzhong = "";
	strxiao = "";
	strduan = "";
	strchang = "";
	m_b4.ShowWindow(false);
	m_s27.ShowWindow(false);
	m_s22.ShowWindow(false);
	m_s17.ShowWindow(false);
	m_s21.ShowWindow(false);
	m_e16.ShowWindow(false);
	m_e13.ShowWindow(false);
	m_e15.ShowWindow(false);
	m_e17.ShowWindow(false);
	m_s23.ShowWindow(false);
	m_b5.ShowWindow(false);
	m_b7.ShowWindow(false);
	m_date1.ShowWindow(false);

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常:  OCX 属性页应返回 FALSE
}


void CMainCatDlg::OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO:  在此添加控件通知处理程序代码
	int CurSel = m_tab.GetCurSel();
	switch (CurSel)
	{
	case 0:
		m_sousuo.ShowWindow(true);
		m_s1.ShowWindow(true);
		m_s3.ShowWindow(true);
		m_s6.ShowWindow(true);
		m_s7.ShowWindow(true);
		m_s8.ShowWindow(true);
		m_s9.ShowWindow(true);
		m_s19.ShowWindow(true);
		m_s11.ShowWindow(true);
		m_s13.ShowWindow(true);

		m_s15.ShowWindow(true);
		m_s4.ShowWindow(true);
		m_s5.ShowWindow(true);
		m_s16.ShowWindow(true);
		m_da.ShowWindow(true);
		m_zhong.ShowWindow(true);
		m_xiao.ShowWindow(true);
		m_duan.ShowWindow(true);
		m_chang.ShowWindow(true);
		m_shangyige.ShowWindow(true);
		m_xiayige.ShowWindow(true);
		m_s18.ShowWindow(true);
		m_e11.ShowWindow(true);
		m_e1.ShowWindow(true);
		m_e2.ShowWindow(true);
		m_e3.ShowWindow(true);
		m_e8.ShowWindow(true);
		m_e12.ShowWindow(true);
		m_e7.ShowWindow(true);
		m_e5.ShowWindow(true);

		m_e10.ShowWindow(true);
		m_b4.ShowWindow(false);
		m_s27.ShowWindow(false);
		m_s22.ShowWindow(false);
		m_s17.ShowWindow(false);
		m_s21.ShowWindow(false);
		m_e16.ShowWindow(false);
		m_e13.ShowWindow(false);
		m_e15.ShowWindow(false);

		m_e17.ShowWindow(false);
		m_s23.ShowWindow(false);
		m_b5.ShowWindow(false);
		m_b7.ShowWindow(false);
		m_date1.ShowWindow(false);


		break;
	case 1:
		m_sousuo.ShowWindow(false);
		m_s1.ShowWindow(false);
		m_s3.ShowWindow(false);
		m_s6.ShowWindow(false);
		m_s7.ShowWindow(false);
		m_s8.ShowWindow(false);
		m_s9.ShowWindow(false);
		m_s19.ShowWindow(false);
		m_s11.ShowWindow(false);
		m_s13.ShowWindow(false);

		m_s15.ShowWindow(false);
		m_s4.ShowWindow(false);
		m_s5.ShowWindow(false);
		m_s16.ShowWindow(false);
		m_da.ShowWindow(false);
		m_zhong.ShowWindow(false);
		m_xiao.ShowWindow(false);
		m_duan.ShowWindow(false);
		m_chang.ShowWindow(false);
		m_shangyige.ShowWindow(false);
		m_xiayige.ShowWindow(false);
		m_s18.ShowWindow(false);
		m_e11.ShowWindow(false);
		m_e1.ShowWindow(false);
		m_e2.ShowWindow(false);
		m_e3.ShowWindow(false);
		m_e8.ShowWindow(false);
		m_e12.ShowWindow(false);
		m_e7.ShowWindow(false);
		m_e5.ShowWindow(false);
		m_e10.ShowWindow(false);

		m_b4.ShowWindow(true);
		m_s27.ShowWindow(true);
		m_s22.ShowWindow(true);
		m_s17.ShowWindow(true);
		m_s21.ShowWindow(true);
		m_e16.ShowWindow(true);
		m_e13.ShowWindow(true);
		m_e15.ShowWindow(true);

		m_e17.ShowWindow(true);
		m_s23.ShowWindow(true);
		m_b5.ShowWindow(true);
		m_b7.ShowWindow(true);
		m_date1.ShowWindow(true);

		break;
	default:
		;
	}
	*pResult = 0;
}


void CMainCatDlg::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	strda = "11";
	strzhong = "11";
	strxiao = "11";
	strduan = "11";
	strchang = "11";

	if (m_da.GetCheck())
	{
		strda = "大型";
	}
	if (m_zhong.GetCheck())
	{
		strzhong = "中型";
	}
	if (m_xiao.GetCheck())
	{
		strxiao = "小型";
	}
	if (m_duan.GetCheck())
	{
		strduan = "短毛";
	}
	if (m_chang.GetCheck())
	{
		strchang = "长毛";
	}
	if (!m_da.GetCheck() && !m_zhong.GetCheck() && !m_xiao.GetCheck())
	{
		MessageBox("请选择类型！");
	}
	if (!m_duan.GetCheck() && !m_chang.GetCheck())
	{
		MessageBox("请选择毛长！");
	}

	try
	{

		CString sql = "select * from catdata where (lx='" + strda + "' or lx ='" + strzhong + "' or lx ='" + strxiao + "') and (mc='" + strduan + "'or mc='" + strchang + "' )";
		m_AdoConn.OnInitADOConn();
		m_pRs = m_AdoConn.GetRecordSet((_bstr_t)sql);

		m_mingzi = (char*)(_bstr_t)m_pRs->GetCollect("name");
		m_bieming = (char*)(_bstr_t)m_pRs->GetCollect("bm");
		m_yingwenming = (char*)(_bstr_t)m_pRs->GetCollect("ywm");
		m_leixing = (char*)(_bstr_t)m_pRs->GetCollect("lx");
		m_maochang = (char*)(_bstr_t)m_pRs->GetCollect("mc");
		m_tizhong = (char*)(_bstr_t)m_pRs->GetCollect("tz");
		m_yuanchandi = (char*)(_bstr_t)m_pRs->GetCollect("ycd");
		m_cankaojiage = (char*)(_bstr_t)m_pRs->GetCollect("ckjg");
		m_tupianlaiyuan = (char*)(_bstr_t)m_pRs->GetCollect("tply");


		long nSize = m_pRs->GetFields()->GetItem("pic")->ActualSize;
		if (nSize > 0)
		{
			_variant_t	varBLOB;
			varBLOB = m_pRs->GetFields()->GetItem("pic")->GetChunk(nSize);
			if (varBLOB.vt == (VT_ARRAY | VT_UI1))
			{
				if (BYTE *pBuffer = new BYTE[nSize + 1])		///重新申请必要的存储空间
				{
					char *pBuf = NULL;
					SafeArrayAccessData(varBLOB.parray, (void **)&pBuf);
					memcpy(pBuffer, pBuf, nSize);				///复制数据到缓冲区m_pBMPBuffer
					SafeArrayUnaccessData(varBLOB.parray);
					(m_Pic.LoadPictureData(pBuffer, nSize));

					delete[] pBuffer;
					pBuf = 0;
					///生成BITMAP对象
					CClientDC dc(this);
					m_Pic.UpdateSizeOnDC(&dc); // Get Picture Dimentions In Pixels

					m_Pic.Show(&dc, CRect(100, 250, 80 + m_Pic.m_Width, 190 + m_Pic.m_Height));
				}
			}
		}


		UpdateData(false);



	}
	catch (_com_error e) {
	}
}


void CMainCatDlg::OnBnClickedButtonPre()
{
	// TODO:  在此添加控件通知处理程序代码
	try{
		m_pRs->MovePrevious();	//选上一个jpg
		m_mingzi = (char*)(_bstr_t)m_pRs->GetCollect("name");
		m_bieming = (char*)(_bstr_t)m_pRs->GetCollect("bm");
		m_yingwenming = (char*)(_bstr_t)m_pRs->GetCollect("ywm");
		m_leixing = (char*)(_bstr_t)m_pRs->GetCollect("lx");
		m_maochang = (char*)(_bstr_t)m_pRs->GetCollect("mc");
		m_tizhong = (char*)(_bstr_t)m_pRs->GetCollect("tz");
		m_yuanchandi = (char*)(_bstr_t)m_pRs->GetCollect("ycd");
		m_cankaojiage = (char*)(_bstr_t)m_pRs->GetCollect("ckjg");
		m_tupianlaiyuan = (char*)(_bstr_t)m_pRs->GetCollect("tply");


		long nSize = m_pRs->GetFields()->GetItem("pic")->ActualSize;
		if (nSize > 0)
		{
			_variant_t	varBLOB;
			varBLOB = m_pRs->GetFields()->GetItem("pic")->GetChunk(nSize);
			if (varBLOB.vt == (VT_ARRAY | VT_UI1))
			{
				if (BYTE *pBuffer = new BYTE[nSize + 1])		///重新申请必要的存储空间
				{
					char *pBuf = NULL;
					SafeArrayAccessData(varBLOB.parray, (void **)&pBuf);
					memcpy(pBuffer, pBuf, nSize);				///复制数据到缓冲区m_pBMPBuffer
					SafeArrayUnaccessData(varBLOB.parray);
					(m_Pic.LoadPictureData(pBuffer, nSize));

					delete[] pBuffer;
					pBuf = 0;
					///生成BITMAP对象
					CClientDC dc(this);
					m_Pic.UpdateSizeOnDC(&dc); // Get Picture Dimentions In Pixels

					m_Pic.Show(&dc, CRect(100, 250, 80 + m_Pic.m_Width, 190 + m_Pic.m_Height));
				}
			}
		}


		UpdateData(false);

	}
	catch (_com_error e) {
	}

}


void CMainCatDlg::OnBnClickedButtonNext()
{
	// TODO:  在此添加控件通知处理程序代码
	try{
		UpdateData(true);

		m_pRs->MoveNext();       //选下一个jpg
		m_mingzi = (char*)(_bstr_t)m_pRs->GetCollect("name");
		m_bieming = (char*)(_bstr_t)m_pRs->GetCollect("bm");
		m_yingwenming = (char*)(_bstr_t)m_pRs->GetCollect("ywm");
		m_leixing = (char*)(_bstr_t)m_pRs->GetCollect("lx");
		m_maochang = (char*)(_bstr_t)m_pRs->GetCollect("mc");
		m_tizhong = (char*)(_bstr_t)m_pRs->GetCollect("tz");
		m_yuanchandi = (char*)(_bstr_t)m_pRs->GetCollect("ycd");
		m_cankaojiage = (char*)(_bstr_t)m_pRs->GetCollect("ckjg");
		m_tupianlaiyuan = (char*)(_bstr_t)m_pRs->GetCollect("tply");


		long nSize = m_pRs->GetFields()->GetItem("pic")->ActualSize;
		if (nSize > 0)
		{
			_variant_t	varBLOB;
			varBLOB = m_pRs->GetFields()->GetItem("pic")->GetChunk(nSize);
			if (varBLOB.vt == (VT_ARRAY | VT_UI1))
			{
				if (BYTE *pBuffer = new BYTE[nSize + 1])		///重新申请必要的存储空间
				{
					char *pBuf = NULL;
					SafeArrayAccessData(varBLOB.parray, (void **)&pBuf);
					memcpy(pBuffer, pBuf, nSize);				///复制数据到缓冲区m_pBMPBuffer
					SafeArrayUnaccessData(varBLOB.parray);
					(m_Pic.LoadPictureData(pBuffer, nSize));

					delete[] pBuffer;
					pBuf = 0;
					///生成BITMAP对象
					CClientDC dc(this);
					m_Pic.UpdateSizeOnDC(&dc); // Get Picture Dimentions In Pixels

					m_Pic.Show(&dc, CRect(100, 250, 80 + m_Pic.m_Width, 190 + m_Pic.m_Height));
				}
			}
		}


		UpdateData(false);

	}
	catch (_com_error e) {
	}
}


void CMainCatDlg::OnBnClickedButton4()//跳转
{
	// TODO:  在此添加控件通知处理程序代码
	try{
		UpdateData();
		CString sql;
		CTime sou_date;
		m_date1.GetTime(sou_date);
		int year = sou_date.GetYear();
		int month = sou_date.GetMonth();
		int day = sou_date.GetDay();
		CString str_y, str_m, str_d;
		str_y.Format("%d", year);
		str_m.Format("%d", month);
		str_d.Format("%d", day);
		CString str_ss_date;
		if (month<10)
		{
			str_m = "0" + str_m;
		}
		if (day<10)
		{
			str_d = "0" + str_d;
		}
		str_ss_date = str_y + "-" + str_m + "-" + str_d;
		sql.Format("select * from catdiary where rq='%s'", str_ss_date);

		m_AdoConn.OnInitADOConn();
		m_pRs = m_AdoConn.GetRecordSet((_bstr_t)sql);
		m_pRs->MoveFirst();

		str_lx = (char*)(_bstr_t)m_pRs->GetCollect("lx");
	
		str_mc = (char*)(_bstr_t)m_pRs->GetCollect("mc");
		str_tz = (char*)(_bstr_t)m_pRs->GetCollect("tz");
		str_rj = (char*)(_bstr_t)m_pRs->GetCollect("rj");

		UpdateData(false);
	}
	catch (_com_error e) {
	}
}


void CMainCatDlg::OnBnClickedButton5()//保存
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData();
	try
	{
		CTime current_time = CTime::GetCurrentTime();
		CString str_rq = current_time.Format("%Y-%m-%d");

		CString sq;

		sq.Format("select * from catdiary where rq='%s'", str_rq);
		m_AdoConn.OnInitADOConn();
		m_pRs = m_AdoConn.GetRecordSet((_bstr_t)sq);
		if (!m_pRs->adoEOF)//存在
		{
			CString m_id_temp = (char*)(_bstr_t)m_pRs->GetCollect("ID");
			MessageBox(m_id_temp);

			INT_PTR nRes;

			// 显示消息对话框   
			nRes = MessageBox(_T("当天数据已存在，是否更新？\n\n点击是表示更新\n点击否表示不更新"), _T("提醒"), MB_YESNO | MB_ICONQUESTION);
			if (IDYES == nRes)
			{
				try{
					UpdateData();
					CString sql1, sql3, sql4, sql6, sql9;
					int i = _ttoi(m_id_temp);
					if (str_lx.IsEmpty())
					{
						MessageBox("品种不能为空");
						return;
					}

					if (str_mc.IsEmpty())
					{
						MessageBox("毛长不能为空");
						return;
					}
					if (str_tz.IsEmpty())
					{
						MessageBox("体重不能为空");
						return;
					}
					sql1.Format("update catdiary set lx = '%s' where ID = %d", str_lx, i);

					sql3.Format("update catdiary set tz = '%s' where ID = %d", str_tz, i);
					sql4.Format("update catdiary set rq = '%s' where ID = %d", str_rq, i);
					sql6.Format("update catdiary set rj = '%s' where ID = %d", str_rj, i);
					sql9.Format("update catdiary set mc = '%s' where ID = %d", str_mc, i);


					m_AdoConn.ExecuteSQL((_bstr_t)sql1);
					m_AdoConn.ExecuteSQL((_bstr_t)sql3);
					m_AdoConn.ExecuteSQL((_bstr_t)sql4);
					m_AdoConn.ExecuteSQL((_bstr_t)sql6);
					m_AdoConn.ExecuteSQL((_bstr_t)sql9);

				}

				catch (_com_error e) {
				}

			}


		}
		else//bucunzai
		{
			if (str_lx.IsEmpty())
			{
				MessageBox("品种不能为空");
				return;
			}

			if (str_mc.IsEmpty())
			{
				MessageBox("毛长不能为空");
				return;
			}
			if (str_tz.IsEmpty())
			{
				MessageBox("体重不能为空");
				return;
			}




			CString sql = "select * from catdiary";
			m_AdoConn.OnInitADOConn();
			m_pRs = m_AdoConn.GetRecordSet((_bstr_t)sql);

			m_pRs->AddNew();


			m_pRs->PutCollect("lx", _variant_t(str_lx));
			m_pRs->PutCollect("mc", _variant_t(str_mc));
			m_pRs->PutCollect("tz", _variant_t(str_tz));
			m_pRs->PutCollect("rq", _variant_t(str_rq));
			m_pRs->PutCollect("rj", _variant_t(str_rj));

			m_pRs->Update();
			MessageBox("添加记录成功！");
		}


	}
	catch (_com_error e)
	{
	}
}


void CMainCatDlg::OnBnClickedButton7()
{
	// TODO:  在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}
