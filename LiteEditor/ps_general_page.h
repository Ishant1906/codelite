//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2013 by Eran Ifrah
// file name            : ps_general_page.h
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

#ifndef __ps_general_page__
#define __ps_general_page__

#include "globals.h"
/**
@file
Subclass of PSGeneralPageBase, which is generated by wxFormBuilder.
*/

#include "project_settings_base_dlg.h"
#include "project_settings_dlg.h"
#include "build_config.h"

//// end generated include
class ProjectSettingsDlg;
/** Implementing PSGeneralPageBase */
class PSGeneralPage : public PSGeneralPageBase, public IProjectSettingsPage
{
    ProjectSettingsDlg* m_dlg;
    wxString m_projectName;
    wxString m_configName;

protected:
    virtual void OnCustomEditorClicked(wxCommandEvent& event);
    virtual void OnProjectEnabled(wxCommandEvent& event);
    virtual void OnValueChanging(wxPropertyGridEvent& event);
    virtual void OnValueChanged(wxPropertyGridEvent& event);

    wxString GetPropertyAsString(wxPGProperty* prop) const;
    bool GetPropertyAsBool(wxPGProperty* prop) const;

protected:
    // Handlers for PSGeneralPageBase events.
    void OnProjectCustumBuildUI(wxUpdateUIEvent& event);

public:
    /** Constructor */
    PSGeneralPage(wxWindow* parent, const wxString& projectName, const wxString& conf, ProjectSettingsDlg* dlg);
    //// end generated class members
    virtual void Save(BuildConfigPtr buildConf, ProjectSettingsPtr projSettingsPtr);
    virtual void Load(BuildConfigPtr buildConf);
    virtual void Clear();
    wxString GetCompiler() const { return m_pgPropCompiler->GetValueAsString(); }
};

#endif // __ps_general_page__
