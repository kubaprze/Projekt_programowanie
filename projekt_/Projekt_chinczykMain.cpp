/***************************************************************
 * Name:      Projekt_chinczykMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2023-12-13
 * Copyright:  ()
 * License:
 **************************************************************/

#include "Projekt_chinczykMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(Projekt_chinczykDialog)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)
#undef _
#define _(s) wxString::FromUTF8(s)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Projekt_chinczykDialog)
const long Projekt_chinczykDialog::ID_STATICBITMAP1 = wxNewId();
const long Projekt_chinczykDialog::ID_BUTTON2 = wxNewId();
const long Projekt_chinczykDialog::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Projekt_chinczykDialog,wxDialog)
    //(*EventTable(Projekt_chinczykDialog)
    //*)
END_EVENT_TABLE()

Projekt_chinczykDialog::Projekt_chinczykDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Projekt_chinczykDialog)
    wxBoxSizer* BoxSizer1;
    wxFlexGridSizer* FlexGridSizer1;

    Create(parent, wxID_ANY, _("Chińczyk"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxMINIMIZE_BOX, _T("wxID_ANY"));
    SetClientSize(wxSize(470,450));
    SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));
    FlexGridSizer1 = new wxFlexGridSizer(3, 1, 0, 0);
    FlexGridSizer1->AddGrowableCol(0);
    FlexGridSizer1->AddGrowableRow(0);
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("chinczyk-tytul.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
    FlexGridSizer1->Add(StaticBitmap1, 1, wxALL, 5);
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Button2 = new wxButton(this, ID_BUTTON2, _("zasady gry"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    BoxSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(BoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button1 = new wxButton(this, ID_BUTTON1, _("GRAJ"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button1->SetMinSize(wxSize(150,65));
    FlexGridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    SetSizer(FlexGridSizer1);
    Layout();

    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projekt_chinczykDialog::OnButton2Click);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projekt_chinczykDialog::OnButton1Click);
    //*)
    SetIcon(wxICON(aaaa));


}

Projekt_chinczykDialog::~Projekt_chinczykDialog()
{
    //(*Destroy(Projekt_chinczykDialog)
    //*)
}

void Projekt_chinczykDialog::OnQuit(wxCommandEvent& event)
{
    Close();
}

void Projekt_chinczykDialog::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void Projekt_chinczykDialog::OnChoice1Select(wxCommandEvent& event)
{
}

#include "GameDialog.h"

void Projekt_chinczykDialog::OnButton1Click(wxCommandEvent& event)
{
    GameDialog gd(this);
    gd.ShowModal();
    this->Close(true);

}
#include "Zasady.h"

void Projekt_chinczykDialog::OnButton2Click(wxCommandEvent& event)
{
    Zasady z(this);
    z.ShowModal();
}
