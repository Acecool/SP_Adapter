#pragma once


// ���������� ���� CSP_ReportDlg

class CSP_ReportDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSP_ReportDlg)

public:
	CSP_ReportDlg(CWnd* pParent = NULL);   // ����������� �����������
	virtual ~CSP_ReportDlg();

	void addPoint(int x, int y);

// ������ ����������� ����
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_REPORT_VIEW };
#endif

protected:
	afx_msg void OnPaint();

	virtual void DoDataExchange(CDataExchange* pDX);    // ��������� DDX/DDV

	DECLARE_MESSAGE_MAP()
};
