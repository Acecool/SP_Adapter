
// SP_Profiler.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CSP_ProfilerApp:
// � ���������� ������� ������ ��. SP_Profiler.cpp
//

class CSP_ProfilerApp : public CWinApp
{
public:
	CSP_ProfilerApp();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CSP_ProfilerApp theApp;