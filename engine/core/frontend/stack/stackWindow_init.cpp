////////////////////////////////////////////////////////////////////////////
//	Author		: Maxim Kornienko
//	Description : stack window
////////////////////////////////////////////////////////////////////////////

#include "stackWindow.h"
#include "frontend/mainFrame.h"

///////////////////////////////////////////////////////////////////////////////
// CWatchWindow
///////////////////////////////////////////////////////////////////////////////

CStackWindow* CStackWindow::s_instance = NULL;

CStackWindow* CStackWindow::Get()
{
	if (!s_instance) s_instance = new CStackWindow(CMainFrame::Get(), wxID_ANY);
	return s_instance;
}