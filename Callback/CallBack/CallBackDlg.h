
// CallBackDlg.h : header file
//

#pragma once
#include <string>
#include "Color.h"

using namespace::std;

// CCallBackDlg dialog
class CCallBackDlg : public CDialogEx
{
// Construction
public:
	CCallBackDlg(CWnd* pParent = NULL);	// standard constructor
    static void ListenColor(string color);//回调函数是成员函数的时候，必须是静态成员函数，静态成员函数
	//不能直接的调用非静态成员函数
    static CCallBackDlg *pThis;

// Dialog Data
	enum { IDD = IDD_CALLBACK_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
private:
    Color mColor;
private:
    void ChangeColor(string color);

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedOk();
};
