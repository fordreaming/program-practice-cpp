
// CallBackDlg.cpp : implementation file
//

#include "stdafx.h"
#include "CallBack.h"
#include "CallBackDlg.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCallBackDlg dialog



CCallBackDlg::CCallBackDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCallBackDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
    pThis = this;
}

void CCallBackDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CCallBackDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
    ON_BN_CLICKED(IDOK, &CCallBackDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CCallBackDlg message handlers

BOOL CCallBackDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	ShowWindow(SW_MAXIMIZE);

	// TODO: Add extra initialization here
    mColor.RegisterColorCallback(ListenColor);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCallBackDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCallBackDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CCallBackDlg::ChangeColor(string color)
{
    CEdit* pBoxOne;
    pBoxOne = (CEdit*) GetDlgItem(IDC_STATIC);
    //CString test(color.c_str());
    pBoxOne->SetWindowText( CString(color.c_str()));
    /*
    CString str;
    pBoxOne->GetWindowText(str);
    */
}

void CCallBackDlg::OnBnClickedOk()
{

    mColor.SetColor("red");
    //CDialogEx::OnOK();
}

void CCallBackDlg::ListenColor(string color)
{
    pThis->ChangeColor(color);
}

CCallBackDlg *CCallBackDlg::pThis;//相当于实现
