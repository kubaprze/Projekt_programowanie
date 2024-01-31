#ifndef ZASADY_H
#define ZASADY_H

//(*Headers(Zasady)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class Zasady: public wxDialog
{
	public:

		Zasady(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~Zasady();

		//(*Declarations(Zasady)
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(Zasady)
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Zasady)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
