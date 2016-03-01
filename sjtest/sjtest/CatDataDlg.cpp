// CatDataDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "sjtest.h"
#include "CatDataDlg.h"
#include "afxdialogex.h"


// CCatDataDlg �Ի���

IMPLEMENT_DYNAMIC(CCatDataDlg, CDialogEx)

CCatDataDlg::CCatDataDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCatDataDlg::IDD, pParent)
	, mingz(_T(""))
	, bieming(_T(""))
	, yingwenming(_T(""))
	, leixing(_T(""))
	, maochang(_T(""))
	, tizhong(_T(""))
	, yuanchandi(_T(""))
	, cankaojiage(_T(""))
	, tupianlaiyuan(_T(""))
{

}

CCatDataDlg::~CCatDataDlg()
{
}

void CCatDataDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, mingz);
	DDX_Text(pDX, IDC_EDIT2, bieming);
	DDX_Text(pDX, IDC_EDIT4, yingwenming);
	DDX_Text(pDX, IDC_EDIT5, leixing);
	DDX_Text(pDX, IDC_EDIT8, maochang);
	DDX_Text(pDX, IDC_EDIT10, tizhong);
	DDX_Text(pDX, IDC_EDIT12, yuanchandi);
	DDX_Text(pDX, IDC_EDIT7, cankaojiage);
	DDX_Text(pDX, IDC_EDIT13, tupianlaiyuan);
	DDX_Control(pDX, IDC_BUTTON1, m_liulan);
	DDX_Control(pDX, IDOK, m_queding);
	DDX_Control(pDX, IDCANCEL, m_quxiao);
}


BEGIN_MESSAGE_MAP(CCatDataDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CCatDataDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CCatDataDlg::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON1, &CCatDataDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CCatDataDlg ��Ϣ�������


void CCatDataDlg::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData();
	if (sec == 1)
	{
		try
		{
			CFile f;
			CFileException e;
			CString sql = "select * from catdata";
			m_AdoConn.OnInitADOConn();
			m_pRs = m_AdoConn.GetRecordSet((_bstr_t)sql);
			if (f.Open(tupianlaiyuan, CFile::modeRead | CFile::typeBinary, &e)) //����һ��jpg�ļ�
			{

				int nSize = f.GetLength();          //�ȵõ�jpg�ļ�����
				BYTE * pBuffer = new BYTE[nSize];  //���ļ��Ĵ�С�ڶ�������һ���ڴ�

				if (f.Read(pBuffer, nSize) > 0)    //��jpg�ļ�����pBuffer(��������һ���ڴ�)
				{   // +----------------------------------------------
					BYTE *pBuf = pBuffer;     ///������һ����ǰ�pBuffer���jpg���ݷŵ�����
					VARIANT			varBLOB;
					SAFEARRAY		*psa;
					SAFEARRAYBOUND	rgsabound[1];

					m_pRs->AddNew();
					m_pRs->PutCollect("name", _variant_t(mingz));
					m_pRs->PutCollect("bm", _variant_t(bieming));
					m_pRs->PutCollect("ywm", _variant_t(yingwenming));
					m_pRs->PutCollect("lx", _variant_t(leixing));

					m_pRs->PutCollect("mc", _variant_t(maochang));

					m_pRs->PutCollect("tz", _variant_t(tizhong));
	
					m_pRs->PutCollect("ycd", _variant_t(yuanchandi));
					m_pRs->PutCollect("ckjg", _variant_t(cankaojiage));
					m_pRs->PutCollect("tply", _variant_t(tupianlaiyuan));

					if (pBuf)
					{
						rgsabound[0].lLbound = 0;
						rgsabound[0].cElements = nSize;
						psa = SafeArrayCreate(VT_UI1, 1, rgsabound);
						for (long i = 0; i < (long)nSize; i++)
							SafeArrayPutElement(psa, &i, pBuf++);
						varBLOB.vt = VT_ARRAY | VT_UI1;
						varBLOB.parray = psa;
						m_pRs->GetFields()->GetItem("pic")->AppendChunk(varBLOB);
					}
					m_pRs->Update();
					delete[] pBuffer;     //ɾ�������������һ���ڴ�
					pBuf = 0;                //�Է���������
				}
				f.Close();
			}
			MessageBox("��Ӽ�¼�ɹ���");
		}
		catch (_com_error e) {
		}
	}
	if (sec == 2)
	{
		try{
			UpdateData();
			CString sql1, sql2, sql3, sql4, sql6, sql9, sql10, sql11, sql12;
			int i = _ttoi(id);
			sql1.Format("update catdata set name = '%s' where ID = %d", mingz, i);
			sql2.Format("update catdata set bm = '%s' where ID = %d", bieming, i);
			sql3.Format("update catdata set lx = '%s' where ID = %d", leixing, i);
			sql4.Format("update catdata set ywm = '%s' where ID = %d", yingwenming, i);
			sql6.Format("update catdata set mc = '%s' where ID = %d", maochang, i);
			sql9.Format("update catdata set tz = '%s' where ID = %d", tizhong, i);
			sql10.Format("update catdata set ckjg = '%s' where ID = %d", cankaojiage, i);
			sql11.Format("update catdata set ycd = '%s' where ID = %d", yuanchandi, i);
			sql12.Format("update catdata set tply = '%s' where ID = %d", tupianlaiyuan, i);

			m_AdoConn.ExecuteSQL((_bstr_t)sql1);
			m_AdoConn.ExecuteSQL((_bstr_t)sql2);
			m_AdoConn.ExecuteSQL((_bstr_t)sql3);
			m_AdoConn.ExecuteSQL((_bstr_t)sql4);
			m_AdoConn.ExecuteSQL((_bstr_t)sql6);
			m_AdoConn.ExecuteSQL((_bstr_t)sql9);
			m_AdoConn.ExecuteSQL((_bstr_t)sql10);
			m_AdoConn.ExecuteSQL((_bstr_t)sql11);
			m_AdoConn.ExecuteSQL((_bstr_t)sql12);

			UpdateData(false);


			CString sql;
			sql.Format("select * from catdata where name='%s' and bm='%s' and lx='%s' and ywm='%s' and mc='%s' and tz='%s' and ckjg='%s' and ycd='%s'", mingz,bieming,leixing,yingwenming,maochang,tizhong,cankaojiage,yuanchandi);
			m_AdoConn.OnInitADOConn();
			m_pRs = m_AdoConn.GetRecordSet((_bstr_t)sql);
			CFile f;
			CFileException e;
			if (f.Open(tupianlaiyuan, CFile::modeRead | CFile::typeBinary, &e)) //����һ��jpg�ļ�
			{
				int nSize = f.GetLength();          //�ȵõ�jpg�ļ�����
				BYTE * pBuffer = new BYTE[nSize];  //���ļ��Ĵ�С�ڶ�������һ���ڴ�

				if (f.Read(pBuffer, nSize) > 0)    //��jpg�ļ�����pBuffer(��������һ���ڴ�)
				{   // +----------------------------------------------
					BYTE *pBuf = pBuffer;     ///������һ����ǰ�pBuffer���jpg���ݷŵ�����
					VARIANT			varBLOB;
					SAFEARRAY		*psa;
					SAFEARRAYBOUND	rgsabound[1];

					if (pBuf)
					{
						rgsabound[0].lLbound = 0;
						rgsabound[0].cElements = nSize;
						psa = SafeArrayCreate(VT_UI1, 1, rgsabound);
						for (long i = 0; i < (long)nSize; i++)
							SafeArrayPutElement(psa, &i, pBuf++);
						varBLOB.vt = VT_ARRAY | VT_UI1;
						varBLOB.parray = psa;
						m_pRs->GetFields()->GetItem("pic")->AppendChunk(varBLOB);
					}
					m_pRs->Update();
					delete[] pBuffer;     //ɾ�������������һ���ڴ�
					pBuf = 0;                //�Է���������
				}
				f.Close();
			}

		}
		catch (_com_error e) {
		}
	}



	CDialogEx::OnOK();
}


void CCatDataDlg::OnBnClickedCancel()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}


void CCatDataDlg::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData();
	CFileDialog dlg(TRUE, NULL, NULL, 0, "jpg Files (*.jpg)|*.jpg||", this);///TRUEΪOPEN�Ի���FALSEΪSAVE AS�Ի���
	if (dlg.DoModal() == IDOK)
	{
		tupianlaiyuan = dlg.GetPathName();
	}
	UpdateData(false);

}
