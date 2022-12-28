//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: SyntaxHighlightBaseDlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _CODELITE_LITEEDITOR_SYNTAXHIGHLIGHTBASEDLG_BASE_CLASSES_H
#define _CODELITE_LITEEDITOR_SYNTAXHIGHLIGHTBASEDLG_BASE_CLASSES_H

// clang-format off
#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/toolbar.h>
#include <wx/statbox.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include <wx/stattext.h>
#include <wx/clrpicker.h>
#include <wx/checkbox.h>
#include <wx/fontpicker.h>
#include <wx/stc/stc.h>
#include "clThemedSTC.hpp"
#include <wx/collpane.h>
#include <wx/listbox.h>
#include <wx/notebook.h>
#include <wx/imaglist.h>
#include <wx/textctrl.h>
#include <wx/statline.h>
#include <wx/button.h>
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

// clang-format on

class SyntaxHighlightBaseDlg : public wxDialog
{
protected:
    wxPanel* m_panel171;
    wxToolBar* m_toolbar;
    wxChoice* m_choiceAppearance;
    wxStaticText* m_staticText9;
    wxColourPickerCtrl* m_colourPickerSelTextBgColour;
    wxStaticText* m_staticText94;
    wxCheckBox* m_checkBoxCustomSelectionFgColour;
    wxStaticText* m_staticText84;
    wxColourPickerCtrl* m_colourPickerSelTextFgColour;
    wxStaticText* m_staticText159;
    wxFontPickerCtrl* m_fontPickerGlobal;
    wxStaticText* m_staticText155;
    wxChoice* m_choiceGlobalTheme;
    clThemedSTC* m_stcPreview;
    wxCollapsiblePane* m_collPane193;
    wxListBox* m_listBox;
    wxPanel* m_panel25;
    wxNotebook* m_notebook2;
    wxPanel* m_panelGlobalSettings;
    wxStaticText* m_staticText70;
    wxChoice* m_choiceLexerThemes;
    wxStaticText* m_staticText6;
    wxFontPickerCtrl* m_globalFontPicker;
    wxStaticText* m_staticText7;
    wxColourPickerCtrl* m_globalBgColourPicker;
    wxStaticText* m_staticText8;
    wxTextCtrl* m_fileSpec;
    wxPanel* m_panelCustomize;
    wxListBox* m_properties;
    wxStaticText* m_staticText2;
    wxFontPickerCtrl* m_fontPicker;
    wxStaticText* m_staticText3;
    wxColourPickerCtrl* m_colourPicker;
    wxStaticText* m_staticText4;
    wxColourPickerCtrl* m_bgColourPicker;
    wxCheckBox* m_eolFilled;
    wxCheckBox* m_styleWithinPreProcessor;
    wxStaticLine* m_staticline1;
    wxStaticText* m_staticText1;
    wxButton* m_button5;
    wxButton* m_button6;
    wxButton* m_button7;
    wxButton* m_button8;
    wxButton* m_button9;
    wxStdDialogButtonSizer* m_stdBtnSizer10;
    wxButton* m_buttonOk;
    wxButton* m_buttonCancel;
    wxButton* m_buttonApply;

protected:
    virtual void OnCodeLiteAppearance(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSelTextChanged(wxColourPickerEvent& event) { event.Skip(); }
    virtual void OnUseCustomFgTextColour(wxCommandEvent& event) { event.Skip(); }
    virtual void OnTextSelFgUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnSelTextFgChanged(wxColourPickerEvent& event) { event.Skip(); }
    virtual void OnGlobalFontSelected(wxFontPickerEvent& event) { event.Skip(); }
    virtual void OnGlobalThemeSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnLexerSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnThemeChanged(wxCommandEvent& event) { event.Skip(); }
    virtual void OnFontChanged(wxFontPickerEvent& event) { event.Skip(); }
    virtual void OnColourChanged(wxColourPickerEvent& event) { event.Skip(); }
    virtual void OnText(wxCommandEvent& event) { event.Skip(); }
    virtual void OnItemSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEolFilled(wxCommandEvent& event) { event.Skip(); }
    virtual void OnStyleWithinPreprocessor(wxCommandEvent& event) { event.Skip(); }
    virtual void OnStyleWithingPreProcessorUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnEditKeyWordsButton0(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEditKeyWordsButton1(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEditKeyWordsButton2(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEditKeyWordsButton3(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEditKeyWordsButton4(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonOK(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonCancel(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonApply(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonApplyUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxToolBar* GetToolbar() { return m_toolbar; }
    wxChoice* GetChoiceAppearance() { return m_choiceAppearance; }
    wxStaticText* GetStaticText9() { return m_staticText9; }
    wxColourPickerCtrl* GetColourPickerSelTextBgColour() { return m_colourPickerSelTextBgColour; }
    wxStaticText* GetStaticText94() { return m_staticText94; }
    wxCheckBox* GetCheckBoxCustomSelectionFgColour() { return m_checkBoxCustomSelectionFgColour; }
    wxStaticText* GetStaticText84() { return m_staticText84; }
    wxColourPickerCtrl* GetColourPickerSelTextFgColour() { return m_colourPickerSelTextFgColour; }
    wxStaticText* GetStaticText159() { return m_staticText159; }
    wxFontPickerCtrl* GetFontPickerGlobal() { return m_fontPickerGlobal; }
    wxStaticText* GetStaticText155() { return m_staticText155; }
    wxChoice* GetChoiceGlobalTheme() { return m_choiceGlobalTheme; }
    clThemedSTC* GetStcPreview() { return m_stcPreview; }
    wxListBox* GetListBox() { return m_listBox; }
    wxStaticText* GetStaticText70() { return m_staticText70; }
    wxChoice* GetChoiceLexerThemes() { return m_choiceLexerThemes; }
    wxStaticText* GetStaticText6() { return m_staticText6; }
    wxFontPickerCtrl* GetGlobalFontPicker() { return m_globalFontPicker; }
    wxStaticText* GetStaticText7() { return m_staticText7; }
    wxColourPickerCtrl* GetGlobalBgColourPicker() { return m_globalBgColourPicker; }
    wxStaticText* GetStaticText8() { return m_staticText8; }
    wxTextCtrl* GetFileSpec() { return m_fileSpec; }
    wxPanel* GetPanelGlobalSettings() { return m_panelGlobalSettings; }
    wxListBox* GetProperties() { return m_properties; }
    wxStaticText* GetStaticText2() { return m_staticText2; }
    wxFontPickerCtrl* GetFontPicker() { return m_fontPicker; }
    wxStaticText* GetStaticText3() { return m_staticText3; }
    wxColourPickerCtrl* GetColourPicker() { return m_colourPicker; }
    wxStaticText* GetStaticText4() { return m_staticText4; }
    wxColourPickerCtrl* GetBgColourPicker() { return m_bgColourPicker; }
    wxCheckBox* GetEolFilled() { return m_eolFilled; }
    wxCheckBox* GetStyleWithinPreProcessor() { return m_styleWithinPreProcessor; }
    wxStaticLine* GetStaticline1() { return m_staticline1; }
    wxStaticText* GetStaticText1() { return m_staticText1; }
    wxButton* GetButton5() { return m_button5; }
    wxButton* GetButton6() { return m_button6; }
    wxButton* GetButton7() { return m_button7; }
    wxButton* GetButton8() { return m_button8; }
    wxButton* GetButton9() { return m_button9; }
    wxPanel* GetPanelCustomize() { return m_panelCustomize; }
    wxNotebook* GetNotebook2() { return m_notebook2; }
    wxPanel* GetPanel25() { return m_panel25; }
    wxCollapsiblePane* GetCollPane193() { return m_collPane193; }
    wxPanel* GetPanel171() { return m_panel171; }
    SyntaxHighlightBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Colours and Fonts"),
                           const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1),
                           long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);
    virtual ~SyntaxHighlightBaseDlg();
};

class NewThemeDialogBase : public wxDialog
{
protected:
    wxStaticText* m_staticText127;
    wxTextCtrl* m_textCtrlName;
    wxStaticText* m_staticText131;
    wxChoice* m_choiceLanguage;
    wxStaticText* m_staticText135;
    wxChoice* m_choiceBaseTheme;
    wxStdDialogButtonSizer* m_stdBtnSizer117;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnLexerSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOkUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText127() { return m_staticText127; }
    wxTextCtrl* GetTextCtrlName() { return m_textCtrlName; }
    wxStaticText* GetStaticText131() { return m_staticText131; }
    wxChoice* GetChoiceLanguage() { return m_choiceLanguage; }
    wxStaticText* GetStaticText135() { return m_staticText135; }
    wxChoice* GetChoiceBaseTheme() { return m_choiceBaseTheme; }
    NewThemeDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("New Theme"),
                       const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1),
                       long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);
    virtual ~NewThemeDialogBase();
};

#endif
