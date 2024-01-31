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
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Zasady gry:\n\nDo gry potrzeba 4 graczy.\n\nGracze, zaczynając od gracza koloru zielonego, rzucają kostką, aż do momentu, kiedy któryś z graczy wyrzuci kostką liczbę 6\n wtedy ustawia jeden ze swoich czterech pionków na polu startowym  i rzuca jeszcze raz, by następnie przesunąć pionek o taką liczbę pól w kierunku zgodnym z ruchem wskazówek zegara, \nile wylosuje na kostce.\n\nGracze przesuwają się o taką liczbę pól, jaką wylosują.\n\nJeżeli któryś z graczy wyrzuci 6, ma prawo do jeszcze jednego rzutu (pozostali czekają kolejkę). Kiedy przykładowo ktoś wyrzuci 6, a potem 5, rusza się o 11 pól (6 + 5 = 11). \nKiedy wyrzuci 6, a potem jeszcze raz 6, rzuca jeszcze raz itd. Gracz, po wyrzuceniu 6, może także wyprowadzić z „bazy” kolejny pionek.\n\nPionki mogą nad sobą przeskakiwać.\n\nJeśli podczas gry pionek jednego gracza stanie na polu zajmowanym przez drugiego, pionek stojący tutaj poprzednio zostaje zbity i wraca do swojej „bazy”.\n\nKiedy gracz obejdzie pionkiem całą planszę dookoła, wprowadza swój pionek do „domku” – czyli czterech pól oznaczonych własnym kolorem. \nDo „domku” jednego gracza nie mogą wjechać swoimi pionkami inni gracze.\nKiedy gracz wjechał swoim pionkiem do „domku”, a na planszy nie ma żadnych innych jego pionków, \nmusi wylosować 6, aby móc wprowadzić kolejny pionek ze „schowka” na planszę.\nNa jednym polu w „schowku\" może stać więcej niż jeden pionek.\n\nGdy gracz spróbuje wykonać nielegalny ruch (na przykład chciałby się ruszyć poza planszę), to traci turę.\n\nZakończenie gry:\nWygrywa ten gracz, który jako pierwszy wprowadzi wszystkie swoje pionki do „domku”. \nJeśli grają trzy lub cztery osoby, to pozostałych troje (lub dwoje) graczy może dalej toczyć grę – o 2. i 3. miejsce."), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE|wxVSCROLL, _T("ID_STATICTEXT1"));
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

