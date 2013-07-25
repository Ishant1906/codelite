//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef WORKSPACESETTINGSBASE_BASE_CLASSES_H
#define WORKSPACESETTINGSBASE_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/imaglist.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include <wx/statline.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/splitter.h>
#include <wx/checkbox.h>

class WorkspaceSettingsBase : public wxDialog
{
protected:
    wxNotebook* m_notebook1;
    wxPanel* m_panelEnv;
    wxStaticText* m_staticText3;
    wxStaticText* m_staticText4;
    wxChoice* m_choiceEnvSets;
    wxStaticLine* m_staticline2;
    wxStaticText* m_staticText6;
    wxTextCtrl* m_textCtrlWspEnvVars;
    wxStaticLine* m_staticline1;
    wxButton* m_buttonOk;
    wxButton* m_buttonCancel;

protected:
    virtual void OnEnvSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonOK(wxCommandEvent& event) { event.Skip(); }

public:
    WorkspaceSettingsBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Workspace Settings"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~WorkspaceSettingsBase();
};


class CodeCompletionBasePage : public wxPanel
{
protected:
    wxSplitterWindow* m_splitter1;
    wxPanel* m_panel8;
    wxStaticText* m_staticText5;
    wxTextCtrl* m_textCtrlSearchPaths;
    wxPanel* m_panel6;
    wxStaticText* m_staticText12;
    wxTextCtrl* m_textCtrlMacros;
    wxCheckBox* m_checkBoxCpp11;

protected:
    virtual void OnCCContentModified(wxCommandEvent& event) { event.Skip(); }

public:
    CodeCompletionBasePage(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxTAB_TRAVERSAL);
    virtual ~CodeCompletionBasePage();
};

#endif
