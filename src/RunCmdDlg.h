/*******************************************************************************
 *
 * Copyright (C) 2009, Alexander Stigsen, e-texteditor.com
 *
 * This software is licensed under the Open Company License as described
 * in the file license.txt, which you should have received as part of this
 * distribution. The terms are also available at http://opencompany.org/license.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ******************************************************************************/

#ifndef __RUNCMDDLG_H__
#define __RUNCMDDLG_H__

#include "wx/wxprec.h" // For compilers that support precompilation, includes "wx/wx.h".
#ifdef __WXGTK__
   #include <wx/wx.h>
#endif

// pre-definitions
class tmCommand;

class RunCmdDlg : public wxDialog {
public:
	RunCmdDlg(wxWindow *parent);

	tmCommand GetCommand() const;

private:
	wxTextCtrl* m_cmdCtrl;
	wxRadioBox* m_inputBox;
	wxRadioBox* m_outputBox;
};

#endif // __RUNCMDDLG_H_
