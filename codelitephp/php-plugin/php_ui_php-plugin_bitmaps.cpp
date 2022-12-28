//
// This file was automatically generated by wxrc, do not edit by hand.
//

#include <wx/wxprec.h>

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

#include <wx/filesys.h>
#include <wx/fs_mem.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_all.h>

#if wxCHECK_VERSION(2,8,5) && wxABI_VERSION >= 20805
    #define XRC_ADD_FILE(name, data, size, mime) \
        wxMemoryFSHandler::AddFileWithMimeType(name, data, size, mime)
#else
    #define XRC_ADD_FILE(name, data, size, mime) \
        wxMemoryFSHandler::AddFile(name, data, size)
#endif

static size_t xml_res_size_0 = 418;
static unsigned char xml_res_file_0[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,16,0,0,0,16,8,6,0,0,
0,31,243,255,97,0,0,0,6,98,75,71,68,0,255,0,255,0,255,160,189,167,147,0,
0,0,9,112,72,89,115,0,0,11,19,0,0,11,19,1,0,154,156,24,0,0,0,7,116,73,77,
69,7,222,11,10,7,12,32,110,25,127,203,0,0,1,47,73,68,65,84,56,203,165,147,
47,79,195,64,28,134,159,46,53,132,15,0,24,48,76,44,161,6,113,201,18,42,
48,24,20,4,129,89,8,230,106,216,7,128,4,11,31,160,152,213,32,206,32,8,40,
12,182,162,201,178,145,37,77,86,177,25,48,128,66,17,204,146,195,172,77,
183,254,99,225,39,239,238,125,238,253,253,3,64,57,66,179,96,196,26,83,57,
66,239,94,62,160,56,76,32,173,78,215,168,18,54,164,135,66,234,228,112,56,
140,180,114,132,86,142,216,41,114,164,28,161,123,253,129,238,245,7,58,126,
99,164,47,235,167,55,140,110,207,0,108,192,79,59,81,142,208,13,233,17,134,
33,102,224,38,46,141,249,31,86,142,174,249,188,63,159,129,20,137,51,128,
24,178,180,119,193,207,243,85,2,41,18,231,2,98,200,164,217,198,12,92,202,
196,149,109,154,47,88,94,212,202,28,0,68,158,100,210,108,23,206,74,173,
72,108,89,22,145,39,1,108,51,112,249,222,150,185,144,90,153,120,154,179,
15,216,203,47,30,95,91,39,25,136,81,33,78,79,159,13,248,31,245,99,86,71,
119,179,115,16,247,57,206,57,175,218,105,200,219,198,1,235,175,143,180,
58,93,35,25,146,105,190,127,218,3,128,241,218,62,155,239,79,217,139,69,
183,241,223,241,11,153,102,193,223,13,92,156,214,0,0,0,0,73,69,78,68,174,
66,96,130};

static size_t xml_res_size_1 = 247;
static unsigned char xml_res_file_1[] = {
60,63,120,109,108,32,118,101,114,115,105,111,110,61,34,49,46,48,34,32,101,
110,99,111,100,105,110,103,61,34,85,84,70,45,56,34,63,62,10,60,114,101,
115,111,117,114,99,101,32,120,109,108,110,115,61,34,104,116,116,112,58,
47,47,119,119,119,46,119,120,119,105,100,103,101,116,115,46,111,114,103,
47,119,120,120,114,99,34,62,10,32,32,60,33,45,45,32,72,97,110,100,108,101,
114,32,71,101,110,101,114,97,116,105,111,110,32,105,115,32,79,78,32,45,
45,62,10,32,32,60,111,98,106,101,99,116,32,99,108,97,115,115,61,34,119,
120,66,105,116,109,97,112,34,32,110,97,109,101,61,34,120,100,101,98,117,
103,45,49,54,34,62,112,104,112,95,117,105,95,112,104,112,45,112,108,117,
103,105,110,95,98,105,116,109,97,112,115,46,99,112,112,36,46,46,95,114,
101,115,111,117,114,99,101,115,95,120,100,101,98,117,103,45,49,54,46,112,
110,103,60,47,111,98,106,101,99,116,62,10,60,47,114,101,115,111,117,114,
99,101,62,10};

void wxCF01InitBitmapResources()
{

    // Check for memory FS. If not present, load the handler:
    {
        wxMemoryFSHandler::AddFile(wxT("XRC_resource/dummy_file"), wxT("dummy one"));
        wxFileSystem fsys;
        wxFSFile *f = fsys.OpenFile(wxT("memory:XRC_resource/dummy_file"));
        wxMemoryFSHandler::RemoveFile(wxT("XRC_resource/dummy_file"));
        if (f) delete f;
        else wxFileSystem::AddHandler(new wxMemoryFSHandlerBase);
    }

    XRC_ADD_FILE(wxT("XRC_resource/php_ui_php-plugin_bitmaps.cpp$.._resources_xdebug-16.png"), xml_res_file_0, xml_res_size_0, wxT("image/png"));
    XRC_ADD_FILE(wxT("XRC_resource/php_ui_php-plugin_bitmaps.cpp$C__msys64_home_eran_devl_codelite_codelitephp_php-plugin_php_ui_php-plugin_bitmaps.xrc"), xml_res_file_1, xml_res_size_1, wxT("text/xml"));
    wxXmlResource::Get()->Load(wxT("memory:XRC_resource/php_ui_php-plugin_bitmaps.cpp$C__msys64_home_eran_devl_codelite_codelitephp_php-plugin_php_ui_php-plugin_bitmaps.xrc"));
}
