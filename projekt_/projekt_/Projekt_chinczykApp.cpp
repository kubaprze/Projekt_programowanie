/***************************************************************
 * Name:      Projekt_chinczykApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2023-12-13
 * Copyright:  ()
 * License:
 **************************************************************/

#include "Projekt_chinczykApp.h"

//(*AppHeaders
#include "Projekt_chinczykMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Projekt_chinczykApp);

bool Projekt_chinczykApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Projekt_chinczykDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
