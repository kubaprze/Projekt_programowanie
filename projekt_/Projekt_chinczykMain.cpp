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
const long Projekt_chinczykDialog::ID_STATICTEXT1 = wxNewId();
const long Projekt_chinczykDialog::ID_STATICTEXT2 = wxNewId();
const long Projekt_chinczykDialog::ID_CHOICE1 = wxNewId();
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

    Create(parent, wxID_ANY, _("Chińczyk"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMINIMIZE_BOX, _T("wxID_ANY"));
    SetClientSize(wxSize(220,100));
    SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INACTIVECAPTION));
    FlexGridSizer1 = new wxFlexGridSizer(3, 1, 0, 0);
    FlexGridSizer1->AddGrowableCol(0);
    FlexGridSizer1->AddGrowableRow(0);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Chińczyk"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Ile graczy\?"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    BoxSizer1->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Choice1 = new wxChoice(this, ID_CHOICE1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    Choice1->SetSelection( Choice1->Append(_("1 gracz")) );
    Choice1->Append(_("2 graczy"));
    Choice1->Append(_("3 graczy"));
    Choice1->Append(_("4 graczy"));
    BoxSizer1->Add(Choice1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(BoxSizer1, 1, wxALL|wxEXPAND, 5);
    Button1 = new wxButton(this, ID_BUTTON1, _("GRAJ"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    FlexGridSizer1->Add(Button1, 1, wxALL|wxEXPAND, 5);
    SetSizer(FlexGridSizer1);
    SetSizer(FlexGridSizer1);
    Layout();

    Connect(ID_CHOICE1,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Projekt_chinczykDialog::OnChoice1Select);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projekt_chinczykDialog::OnButton1Click);
    //*)


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
