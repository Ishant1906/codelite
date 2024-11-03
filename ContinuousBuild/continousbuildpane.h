//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2014 Eran Ifrah
// file name            : continousbuildpane.h
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

#ifndef __continousbuildpane__
#define __continousbuildpane__

/**
@file
Subclass of ContinousBuildBasePane, which is generated by wxFormBuilder.
*/

#include "continousbuildbasepane.h"
class IManager;
class ContinuousBuild;

/** Implementing ContinousBuildBasePane */
class ContinousBuildPane : public ContinousBuildBasePane
{
    IManager* m_mgr;
    ContinuousBuild* m_plugin;

protected:
    // Handlers for ContinousBuildBasePane events.
    void OnStopAll(wxCommandEvent& event);
    void OnStopUI(wxUpdateUIEvent& event);
    /**
     * @brief
     * @param event
     */
    virtual void OnEnableCB(wxCommandEvent& event);

    /**
     * @brief
     * @param event
     */
    virtual void OnEnableContBuildUI(wxUpdateUIEvent& event);

public:
    /** Constructor */
    ContinousBuildPane(wxWindow* parent, IManager* manager, ContinuousBuild* plugin);
    void RemoveFile(const wxString& file);
    void AddFile(const wxString& file);
    void AddFailedFile(const wxString& file);
    void ClearAll();
};

#endif // __continousbuildpane__
