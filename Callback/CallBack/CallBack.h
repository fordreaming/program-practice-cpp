
// CallBack.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CCallBackApp:
// See CallBack.cpp for the implementation of this class
//

class CCallBackApp : public CWinApp
{
public:
	CCallBackApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CCallBackApp theApp;