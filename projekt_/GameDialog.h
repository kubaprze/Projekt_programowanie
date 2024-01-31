#ifndef GAMEDIALOG_H
#define GAMEDIALOG_H
#include <map>
#include "Gra.h"

//(*Headers(GameDialog)
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)



class GameDialog: public wxDialog
{
	public:

		GameDialog(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~GameDialog();
		int tura = 1;
		bool sprawdz(int x,int p);

		//(*Declarations(GameDialog)
		wxBitmapButton* BitmapButton1;
		wxBitmapButton* BitmapButton4;
		wxButton* Button1;
		wxButton* Button2;
		wxStaticBitmap* StaticBitmap1;
		wxStaticBitmap* StaticBitmap2;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(GameDialog)
		static const long ID_BITMAPBUTTON1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICBITMAP2;
		static const long ID_STATICBITMAP1;
		static const long ID_BUTTON1;
		static const long ID_BITMAPBUTTON4;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(GameDialog)
		void OnBitmapButton1Click(wxCommandEvent& event);
		void OnInit(wxInitDialogEvent& event);
		void OnBitmapButton2Click(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()

        Gra gra;

        void wstaw_piona();
        void ruch(int los,int pol);
        void zmien_ture();
        int ile_na_pol(int p);
        void zbij(int pole);
        void koniec();


        std::map<int,int> id2nr; // zamienia id pola na nr od 0 do 121


		wxBitmapButton* pola[121];

		wxBitmap rysunki[6];

		wxBitmap pionki[4];
		wxBitmap pionki2[4];
		wxBitmap pionki3[4];
		wxBitmap pionki4[4];

		wxBitmap kostka[6];

		int home_g[4] = {0,1,11,12};
        int home_r[4] = {9,10,20,21};
        int home_b[4] = {99,100,110,111};
        int home_y[4] = {108,109,119,120};

        std::set<int> square_g = {0,1,11,12};
        std::set<int> square_r = {9,10,20,21};
        std::set<int> square_b = {99,100,110,111};
        std::set<int> square_y = {108,109,119,120};


        std::multiset<int> curr_g = {0,1,11,12};
        std::multiset<int> curr_r = {9,10,20,21};
        std::multiset<int> curr_y = {108,109,119,120};
        std::multiset<int> curr_b = {99,100,110,111};

        int current_g[4] = {0,1,11,12};
        int current_r[4] = {9,10,20,21};
        int current_y[4] = {108,109,119,120};
        int current_b[4] = {99,100,110,111};

		std::set<int> base_g = {0,1,11,12,44,56,57,58,59};
		std::set<int> base_r = {9,10,20,21,6,16,27,38,49};
		std::set<int> base_b = {99,100,110,111,114,71,82,93,104};
		std::set<int> base_y = {108,109,119,120,76,61,62,63,64};

		std::set<int> krzyz  = {4,5,6,15,17,26,28,37,39,44,45,46,47,48,50,51,52,53,54,55,65,66,67,68,69,70,72,73,74,75,76,81,83,92,94,103,105,114,115,116};


        int valid_g[45] = {44,45,46,47,48,37,26,15,4,5,6,17,28,39,50,51,52,53,54,65,76,75,74,73,72,83,94,105,116,115,114,103,92,81,70,69,68,67,66,55,56,57,58,59,60};
        int valid_r[45] = {6,17,28,39,50,51,52,53,54,65,76,75,74,73,72,83,94,105,116,115,114,103,92,81,70,69,68,67,66,55,44,45,46,47,48,37,26,15,4,5,16,27,38,49,60};
        int valid_y[45] = {76,75,74,73,72,83,94,105,116,115,114,103,92,81,70,69,68,67,66,55,44,45,46,47,48,37,26,15,4,5,6,17,28,39,50,51,52,53,54,65,64,63,62,61,60};
        int valid_b[45] = {114,103,92,81,70,69,68,67,66,55,44,45,46,47,48,37,26,15,4,5,6,17,28,39,50,51,52,53,54,65,76,75,74,73,72,83,94,105,116,115,104,93,82,71,60};


};

#endif
