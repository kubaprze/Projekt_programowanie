#include "Zasady.h"

//(*InternalHeaders(Zasady)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Zasady)
const long Zasady::ID_STATICTEXT1 = wxNewId();
//*)

#undef _
#define _(s) wxString::FromUTF8(s)

BEGIN_EVENT_TABLE(Zasady,wxDialog)
	//(*EventTable(Zasady)
	//*)
END_EVENT_TABLE()

Zasady::Zasady(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(Zasady)
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	FlexGridSizer1 = new wxFlexGridSizer(1, 1, 0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("\n\nZasady gry:\n\nDo gry potrzeba 4 graczy.\n\nGracze, zaczynając od gracza koloru zielonego, rzucają kostką, aż do momentu, kiedy któryś z graczy wyrzuci kostką liczbę 6\n wtedy ustawia jeden ze swoich czterech pionków na polu startowym  i rzuca jeszcze raz, \nby następnie przesunąć pionek o taką liczbę pól w kierunku zgodnym z ruchem wskazówek zegara, ile wylosuje na kostce.\n\nGracze przesuwają się o taką liczbę pól, jaką wylosują.\n\nJeżeli któryś z graczy wyrzuci 6, ma prawo do jeszcze jednego rzutu (pozostali czekają kolejkę). \nKiedy przykładowo ktoś wyrzuci 6, a potem 5, rusza się o 11 pól (6 + 5 = 11). \nKiedy wyrzuci 6, a potem jeszcze raz 6, rzuca jeszcze raz itd. Gracz, po wyrzuceniu 6, może także wyprowadzić z „bazy” kolejny pionek.\n\nPionki mogą nad sobą przeskakiwać.\n\n  Jeśli podczas gry pionek jednego gracza stanie na polu zajmowanym przez drugiego, pionek stojący tutaj poprzednio zostaje zbity i wraca do swojej „bazy”.  \n\nKiedy gracz obejdzie pionkiem całą planszę dookoła, wprowadza swój pionek do „domku” – czyli czterech pól oznaczonych własnym kolorem. \nDo „domku” jednego gracza nie mogą wjechać swoimi pionkami inni gracze.\nKiedy gracz wjechał swoim pionkiem do „domku”, a na planszy nie ma żadnych innych jego pionków, \nmusi wylosować 6, aby móc wprowadzić kolejny pionek z „bazy” na planszę.\nNa jednym polu w „domku\" może stać więcej niż jeden pionek.\n\nGdy gracz spróbuje wykonać nielegalny ruch (na przykład chciałby się ruszyć poza planszę), to traci turę.\n\nZakończenie gry:\nWygrywa ten gracz, który jako pierwszy wprowadzi wszystkie swoje pionki do „domku”. \nPozostali gracze mogą dalej toczyć grę – o 2. i 3. miejsce.\n\n\n\n"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
	StaticText1->SetBackgroundColour(wxColour(255,255,240));
	FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);
	//*)
}

Zasady::~Zasady()
{
	//(*Destroy(Zasady)
	//*)
}

