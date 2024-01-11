/***************************************************************
 * Name:      Projekt_chinczykMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2023-12-13
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef PROJEKT_CHINCZYKMAIN_H
#define PROJEKT_CHINCZYKMAIN_H

//(*Headers(Projekt_chinczykDialog)
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class Projekt_chinczykDialog: public wxDialog
{
    public:

        Projekt_chinczykDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~Projekt_chinczykDialog();

    private:

        //(*Handlers(Projekt_chinczykDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnChoice1Select(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(Projekt_chinczykDialog)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_CHOICE1;
        static const long ID_BUTTON1;
        //*)

        //(*Declarations(Projekt_chinczykDialog)
        wxButton* Button1;
        wxChoice* Choice1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // PROJEKT_CHINCZYKMAIN_H
