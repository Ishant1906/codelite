//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2013 by Eran Ifrah
// file name            : workspacesettingsdlg.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

#ifndef __workspacesettingsdlg__
#define __workspacesettingsdlg__

/**
@file
Subclass of WorkspaceSettingsBase, which is generated by wxFormBuilder.
*/

#include "workspacesettingsbase.h"
class LocalWorkspace;
class CodeCompletionPage;

/** Implementing WorkspaceSettingsBase */
class WorkspaceSettingsDlg : public WorkspaceSettingsBase
{
	LocalWorkspace*         m_localWorkspace;
	CodeCompletionPage*     m_ccPage;
	
protected:
	// Handlers for WorkspaceSettingsBase events.
	//void OnAddIncludePath( wxCommandEvent& event );
	//void OnAddExcludePath( wxCommandEvent& event );
	void OnButtonOK( wxCommandEvent& event );

public:
	/** Constructor */
	WorkspaceSettingsDlg( wxWindow* parent, LocalWorkspace *localWorkspace);
	virtual ~WorkspaceSettingsDlg();

	wxArrayString GetIncludePaths() const;
};

#endif // __workspacesettingsdlg__
