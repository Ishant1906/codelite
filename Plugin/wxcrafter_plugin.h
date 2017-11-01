//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _CODELITE_PLUGIN_WXCRAFTER_BASE_CLASSES_H
#define _CODELITE_PLUGIN_WXCRAFTER_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/stc/stc.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/pen.h>
#include <wx/aui/auibar.h>
#include <map>
#include <wx/menu.h>
#include <wx/toolbar.h>
#include <wx/splitter.h>
#include <wx/textctrl.h>
#include <wx/stattext.h>
#include <wx/treectrl.h>
#include "clFileViwerTreeCtrl.h"
#include <wx/dataview.h>
#include <wx/srchctrl.h>
#include <wx/scrolwin.h>
#include <wx/statbmp.h>
#include <wx/popupwin.h>
#include <wx/timer.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

#ifdef WXC_FROM_DIP
#undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
#define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
#define WXC_FROM_DIP(x) x
#endif

#include "codelite_exports.h"

class WXDLLIMPEXP_SDK EditDlgBase : public wxDialog
{
protected:
    wxStyledTextCtrl* m_stc10;
    wxButton* m_button6;
    wxButton* m_button8;

protected:

public:
    wxStyledTextCtrl* GetStc10() { return m_stc10; }
    wxButton* GetButton6() { return m_button6; }
    wxButton* GetButton8() { return m_button8; }
    EditDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Edit Text"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(300,300), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~EditDlgBase();
};


class WXDLLIMPEXP_SDK DiffSideBySidePanelBase : public wxPanel
{
public:
    enum {
        ID_SHOW_OVERVIEW_BAR = 1001,
        ID_SHOW_LINENUMBERS = 1002,
        ID_DIFF_TOOL_IGNORE_WHITESPACE = 1003,
        ID_DIFF_TOOL_VIEW = 1004,
        ID_DIFF_VERTICAL_VIEW = 1005,
        ID_DIFF_TOOL_USE_RIGHT = 1006,
        ID_DIFF_TOOL_VIEW_HORIZONTAL = 1007,
        ID_DIFF_TOOL_USE_LEFT = 1008,
        ID_DIFF_TOOL_COPY_ALL = 1009,
        ID_DIFF_TOOL_COPY_LEFT = 1010,
        ID_DIFF_TOOL_COPY_RIGHT = 1011,
        ID_DIFF_TOOL_PREV = 1012,
        ID_DIFF_TOOL_NEXT = 1013,
        ID_DIFF_TOOL_VIEW_SINGLE = 1014,
        ID_DIFF_TOOL_SAVE = 1015,
        ID_DIFF_TOOL_REFRESH = 1016,
    };
protected:
    wxAuiToolBar* m_auibar242;
    std::map<int, wxMenu*> m_dropdownMenus;
    wxMenu* m_menu257;
    wxMenuItem* m_menuItem271;
    wxMenuItem* m_menuItem273;
    wxMenu* m_menu278;
    wxMenuItem* m_singleView;
    wxMenuItem* m_vView;
    wxMenuItem* m_hView;
    wxSplitterWindow* m_splitter;
    wxPanel* m_splitterPageLeft;
    wxTextCtrl* m_textCtrlLeftFile;
    wxButton* m_button290;
    wxStaticText* m_staticTextLeft;
    wxStyledTextCtrl* m_stcLeft;
    wxPanel* m_panelOverviewL;
    wxPanel* m_splitterPageRight;
    wxTextCtrl* m_textCtrlRightFile;
    wxButton* m_button294;
    wxStaticText* m_staticTextRight;
    wxStyledTextCtrl* m_stcRight;
    wxPanel* m_panelOverviewR;
    wxPanel* m_panelOverviewFull;

protected:
    virtual void OnRefreshDiff(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRefreshDiffUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnSaveChanges(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSaveChangesUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnNextDiffSequence(wxCommandEvent& event) { event.Skip(); }
    virtual void OnNextDiffUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnPrevDiffSequence(wxCommandEvent& event) { event.Skip(); }
    virtual void OnPrevDiffUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCopyLeftToRightUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCopyLeftToRight(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCopyRightToLeftUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCopyRightToLeft(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCopyFileLeftToRight(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCopyFileFromRight(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSingleView(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSingleUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnVerticalUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnVertical(wxCommandEvent& event) { event.Skip(); }
    virtual void OnHorizontal(wxCommandEvent& event) { event.Skip(); }
    virtual void OnHorizontalUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnIgnoreWhitespaceClicked(wxCommandEvent& event) { event.Skip(); }
    virtual void OnIgnoreWhitespaceUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnShowLinenosClicked(wxCommandEvent& event) { event.Skip(); }
    virtual void OnShowLinenosUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnShowOverviewBarUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnShowOverviewBarClicked(wxCommandEvent& event) { event.Skip(); }
    virtual void OnLeftPickerUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnBrowseLeftFile(wxCommandEvent& event) { event.Skip(); }
    virtual void OnLeftStcPainted(wxStyledTextEvent& event) { event.Skip(); }
    virtual void OnMouseWheel(wxMouseEvent& event) { event.Skip(); }
    virtual void OnPaneloverviewEraseBackground(wxEraseEvent& event) { event.Skip(); }
    virtual void OnPaneloverviewLeftDown(wxMouseEvent& event) { event.Skip(); }
    virtual void OnRightPickerUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnBrowseRightFile(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRightStcPainted(wxStyledTextEvent& event) { event.Skip(); }

public:

    virtual void ShowAuiToolMenu(wxAuiToolBarEvent& event);
    wxAuiToolBar* GetAuibar242() { return m_auibar242; }
    wxTextCtrl* GetTextCtrlLeftFile() { return m_textCtrlLeftFile; }
    wxButton* GetButton290() { return m_button290; }
    wxStaticText* GetStaticTextLeft() { return m_staticTextLeft; }
    wxStyledTextCtrl* GetStcLeft() { return m_stcLeft; }
    wxPanel* GetPanelOverviewL() { return m_panelOverviewL; }
    wxPanel* GetSplitterPageLeft() { return m_splitterPageLeft; }
    wxTextCtrl* GetTextCtrlRightFile() { return m_textCtrlRightFile; }
    wxButton* GetButton294() { return m_button294; }
    wxStaticText* GetStaticTextRight() { return m_staticTextRight; }
    wxStyledTextCtrl* GetStcRight() { return m_stcRight; }
    wxPanel* GetPanelOverviewR() { return m_panelOverviewR; }
    wxPanel* GetSplitterPageRight() { return m_splitterPageRight; }
    wxSplitterWindow* GetSplitter() { return m_splitter; }
    wxPanel* GetPanelOverviewFull() { return m_panelOverviewFull; }
    DiffSideBySidePanelBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~DiffSideBySidePanelBase();
};


class WXDLLIMPEXP_SDK clGetTextFromUserBaseDialog : public wxDialog
{
protected:
    wxStaticText* m_staticTextCaption;
    wxTextCtrl* m_textCtrl;
    wxStdDialogButtonSizer* m_stdBtnSizer137;
    wxButton* m_buttonCancel;
    wxButton* m_buttonOK;

protected:

public:
    wxStaticText* GetStaticTextCaption() { return m_staticTextCaption; }
    wxTextCtrl* GetTextCtrl() { return m_textCtrl; }
    clGetTextFromUserBaseDialog(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT(""), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~clGetTextFromUserBaseDialog();
};


class WXDLLIMPEXP_SDK clTreeCtrlPanelBase : public wxPanel
{
protected:
    clFileViewerTreeCtrl* m_treeCtrl;

protected:
    virtual void OnItemExpanding(wxTreeEvent& event) { event.Skip(); }
    virtual void OnItemActivated(wxTreeEvent& event) { event.Skip(); }
    virtual void OnContextMenu(wxTreeEvent& event) { event.Skip(); }

public:
    clFileViewerTreeCtrl* GetTreeCtrl() { return m_treeCtrl; }
    clTreeCtrlPanelBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~clTreeCtrlPanelBase();
};


class NotebookNavigationDlgBase : public wxDialog
{
protected:
    wxPanel* m_panel161;
    wxDataViewListCtrl* m_dvListCtrl;

protected:
    virtual void OnKeyDown(wxKeyEvent& event) { event.Skip(); }
    virtual void OnKeyUp(wxKeyEvent& event) { event.Skip(); }
    virtual void OnItemActivated(wxDataViewEvent& event) { event.Skip(); }

public:
    wxDataViewListCtrl* GetDvListCtrl() { return m_dvListCtrl; }
    wxPanel* GetPanel161() { return m_panel161; }
    NotebookNavigationDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Select Tab"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(400,200), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~NotebookNavigationDlgBase();
};


class clTreeCtrlPanelDefaultPageBase : public wxPanel
{
protected:
    wxPanel* m_panel169;
    wxStaticText* m_staticText177;

protected:
    virtual void OnDefaultPageContextMenu(wxContextMenuEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText177() { return m_staticText177; }
    wxPanel* GetPanel169() { return m_panel169; }
    clTreeCtrlPanelDefaultPageBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxTAB_TRAVERSAL);
    virtual ~clTreeCtrlPanelDefaultPageBase();
};


class clSingleChoiceDialogBase : public wxDialog
{
protected:
    wxSearchCtrl* m_searchCtrl;
    wxDataViewListCtrl* m_dvListCtrl;
    wxStdDialogButtonSizer* m_stdBtnSizer183;
    wxButton* m_button185;
    wxButton* m_button187;

protected:
    virtual void OnFilter(wxCommandEvent& event) { event.Skip(); }
    virtual void OnActivated(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnOKUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxSearchCtrl* GetSearchCtrl() { return m_searchCtrl; }
    wxDataViewListCtrl* GetDvListCtrl() { return m_dvListCtrl; }
    clSingleChoiceDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT(""), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(400,300), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~clSingleChoiceDialogBase();
};


class WXDLLIMPEXP_SDK clImageViewerBase : public wxPanel
{
protected:
    wxScrolledWindow* m_scrollWin196;
    wxStaticBitmap* m_staticBitmap;

protected:

public:
    wxStaticBitmap* GetStaticBitmap() { return m_staticBitmap; }
    wxScrolledWindow* GetScrollWin196() { return m_scrollWin196; }
    clImageViewerBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxTAB_TRAVERSAL);
    virtual ~clImageViewerBase();
};


class WXDLLIMPEXP_SDK clResizableTooltipBase : public wxPopupWindow
{
protected:
    wxPanel* m_mainPanel;
    wxTreeCtrl* m_treeCtrl;
    wxPanel* m_panelStatus;
    wxStaticBitmap* m_staticBitmap240;
    wxTimer* m_timerCheckMousePos;

protected:
    virtual void OnItemExpanding(wxTreeEvent& event) { event.Skip(); }
    virtual void OnStatusEnterWindow(wxMouseEvent& event) { event.Skip(); }
    virtual void OnStatusLeaveWindow(wxMouseEvent& event) { event.Skip(); }
    virtual void OnStatusBarMotion(wxMouseEvent& event) { event.Skip(); }
    virtual void OnStatusBarLeftUp(wxMouseEvent& event) { event.Skip(); }
    virtual void OnStatusBarLeftDown(wxMouseEvent& event) { event.Skip(); }
    virtual void OnCaptureLost(wxMouseCaptureLostEvent& event) { event.Skip(); }
    virtual void OnCheckMousePosition(wxTimerEvent& event) { event.Skip(); }

public:
    wxTreeCtrl* GetTreeCtrl() { return m_treeCtrl; }
    wxPanel* GetMainPanel() { return m_mainPanel; }
    wxStaticBitmap* GetStaticBitmap240() { return m_staticBitmap240; }
    wxPanel* GetPanelStatus() { return m_panelStatus; }
    wxTimer* GetTimerCheckMousePos() { return m_timerCheckMousePos; }
    clResizableTooltipBase(wxWindow* parent, long style = wxBORDER_SIMPLE);
    virtual ~clResizableTooltipBase();
};


class WXDLLIMPEXP_SDK clEditorBarBase : public wxPanel
{
protected:

protected:
    virtual void OnPaint(wxPaintEvent& event) { event.Skip(); }
    virtual void OnEraseBG(wxEraseEvent& event) { event.Skip(); }

public:
    clEditorBarBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~clEditorBarBase();
};

#endif
