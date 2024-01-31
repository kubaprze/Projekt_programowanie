#include "GameDialog.h"


//(*InternalHeaders(GameDialog)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)
#include <string>

#include <wx/msgdlg.h>

#undef _
#define _(s) wxString::FromUTF8(s)

//(*IdInit(GameDialog)
const long GameDialog::ID_BITMAPBUTTON1 = wxNewId();
const long GameDialog::ID_STATICTEXT1 = wxNewId();
const long GameDialog::ID_STATICBITMAP2 = wxNewId();
const long GameDialog::ID_STATICBITMAP1 = wxNewId();
const long GameDialog::ID_BUTTON1 = wxNewId();
const long GameDialog::ID_BITMAPBUTTON4 = wxNewId();
const long GameDialog::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(GameDialog,wxDialog)
	//(*EventTable(GameDialog)
	//*)
END_EVENT_TABLE()

GameDialog::GameDialog(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(GameDialog)
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer3;
	wxFlexGridSizer* FlexGridSizer4;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(615,495));
	FlexGridSizer1 = new wxFlexGridSizer(1, 2, 0, 0);
	FlexGridSizer2 = new wxFlexGridSizer(11, 11, 0, 0);
	BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("tlo_sz.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|wxBORDER_SIMPLE|wxBORDER_NONE, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	FlexGridSizer2->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3 = new wxFlexGridSizer(7, 1, 0, 0);
	FlexGridSizer4 = new wxFlexGridSizer(1, 2, 0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Ruch: "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer4->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBitmap2 = new wxStaticBitmap(this, ID_STATICBITMAP2, wxBitmap(wxImage(_T("green.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP2"));
	FlexGridSizer4->Add(StaticBitmap2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3->Add(FlexGridSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("kostka_2.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	FlexGridSizer3->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(this, ID_BUTTON1, _("Losuj"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer3->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton4 = new wxBitmapButton(this, ID_BITMAPBUTTON4, wxBitmap(wxImage(_T("tlo_sz.png"))), wxDefaultPosition, wxSize(0,300), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
	BitmapButton4->Disable();
	FlexGridSizer3->Add(BitmapButton4, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("Restart"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	FlexGridSizer3->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	SetSizer(FlexGridSizer1);
	Layout();
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnButton2Click);
	Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&GameDialog::OnInit);
	//*)
	rysunki[0] = wxBitmap(wxImage("green.png"));
	rysunki[1] = wxBitmap(wxImage("red.png"));
	rysunki[2] = wxBitmap(wxImage("yellow.png"));
	rysunki[3] = wxBitmap(wxImage("blue.png"));
	rysunki[4] = wxBitmap(wxImage("tlo_sz.png"));
	rysunki[5] = wxBitmap(wxImage("tlo_b.png"));

	pionki[0] = wxBitmap(wxImage("pion_g.png"));
	pionki[1] = wxBitmap(wxImage("pion_r.png"));
	pionki[2] = wxBitmap(wxImage("pion_y.png"));
	pionki[3] = wxBitmap(wxImage("pion_b.png"));

	pionki2[0] = wxBitmap(wxImage("pion_g2.png"));
	pionki2[1] = wxBitmap(wxImage("pion_r2.png"));
	pionki2[2] = wxBitmap(wxImage("pion_y2.png"));
	pionki2[3] = wxBitmap(wxImage("pion_b2.png"));

	pionki3[0] = wxBitmap(wxImage("pion_g3.png"));
	pionki3[1] = wxBitmap(wxImage("pion_r3.png"));
	pionki3[2] = wxBitmap(wxImage("pion_y3.png"));
	pionki3[3] = wxBitmap(wxImage("pion_b3.png"));

	pionki4[0] = wxBitmap(wxImage("pion_g4.png"));
	pionki4[1] = wxBitmap(wxImage("pion_r4.png"));
	pionki4[2] = wxBitmap(wxImage("pion_y4.png"));
	pionki4[3] = wxBitmap(wxImage("pion_b4.png"));


	kostka[0] = wxBitmap(wxImage("kostka_1.png"));
	kostka[1] = wxBitmap(wxImage("kostka_2.png"));
	kostka[2] = wxBitmap(wxImage("kostka_3.png"));
	kostka[3] = wxBitmap(wxImage("kostka_4.png"));
	kostka[4] = wxBitmap(wxImage("kostka_5.png"));
	kostka[5] = wxBitmap(wxImage("kostka_6.png"));



	pola[0]= BitmapButton1;
	pola[0]->SetBitmap(pionki[0]);
	Connect(pola[0]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);


	for(int i=1; i<121;i++){

        // szare tlo
        pola[i] = new wxBitmapButton(this, wxNewId(), rysunki[4], wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|wxBORDER_SIMPLE|wxBORDER_NONE, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
        FlexGridSizer2->Add(pola[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);


        // pola funkcjonalne
        if (krzyz.find(i) != krzyz.end()){
            pola[i]->SetBitmap(rysunki[5]);
            Connect(pola[i]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);
        }
        if(base_g.find(i) != base_g.end()){
            pola[i]->SetBitmap(rysunki[0]);
        }
        if(base_r.find(i) != base_r.end()){
            pola[i]->SetBitmap(rysunki[1]);
        }
        if(base_y.find(i) != base_y.end()){
            pola[i]->SetBitmap(rysunki[2]);
        }
        if(base_b.find(i) != base_b.end()){
            pola[i]->SetBitmap(rysunki[3]);
        }


        // pionki
        if(square_g.find(i) != square_g.end()){
            pola[i]->SetBitmap(pionki[0]);
            Connect(pola[i]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);
        }
        if(square_r.find(i) != square_r.end()){
            pola[i]->SetBitmap(pionki[1]);
            Connect(pola[i]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);
        }
        if(square_y.find(i) != square_y.end()){
            pola[i]->SetBitmap(pionki[2]);
            Connect(pola[i]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);
        }
        if(square_b.find(i) != square_b.end()){
            pola[i]->SetBitmap(pionki[3]);
            Connect(pola[i]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);
        }




    }

    id2nr[pola[0]->GetId()]=0;
    for(int i=1; i<121;i++){
        id2nr[pola[i]->GetId()]=i;
    }



}



GameDialog::~GameDialog()
{
	//(*Destroy(GameDialog)
	//*)
}


void GameDialog::OnBitmapButton1Click(wxCommandEvent& event)
{
    int pole = id2nr[event.GetId()]; // nr pola na ktore klikamy
    if(sprawdz(gra.gracz,pole)){                                             //tu ma sprawdzac czy pole na ktore kliknie zawiera sie w current_ w zaleznosci od gracza
        if(gra.los==6 &&                                // jezeli los = 6 i klikamy an jeden z kwadratow bedacych baza pionkow to wywoluje funkcje wstaw piona
            ((square_g.find(pole) != square_g.end()) ||
            (square_r.find(pole) != square_r.end()) ||
            (square_y.find(pole) != square_y.end()) ||
            (square_b.find(pole) != square_b.end())))
        {
            wstaw_piona();  // wstawia piona
            gra.los=0;      // resetuje los zeby nie mozna bylo wstawic na raz wszystkich pionow
        }
        if(gra.los !=0 &&
            ((square_g.find(pole) == square_g.end()) &&
            (square_r.find(pole) == square_r.end()) &&
            (square_y.find(pole) == square_y.end()) &&
            (square_b.find(pole) == square_b.end())))
        {
            ruch(gra.los,pole);
            if(gra.los != 6){
                zmien_ture();  // tura sie zmienia gdy nie wylosuje szoski i zrobi ruch
            }
        }

    } else {wxMessageBox("To nie twoj pionek!!"); }
}


void GameDialog::OnInit(wxInitDialogEvent& event)
{
}

void GameDialog::zmien_ture()
{
    gra.gracz = (gra.gracz+1) % 4;
    if((gra.gracz==0)&&(gra.ile_skonczylo_g==4))
        gra.gracz = (gra.gracz+1) % 4;
    if((gra.gracz==1)&&(gra.ile_skonczylo_r==4))
        gra.gracz = (gra.gracz+1) % 4;
    if((gra.gracz==2)&&(gra.ile_skonczylo_y==4))
        gra.gracz = (gra.gracz+1) % 4;
    if((gra.gracz==3)&&(gra.ile_skonczylo_b==4))
        gra.gracz = (gra.gracz+1) % 4;
    StaticBitmap2->SetBitmap(rysunki[gra.gracz]);
}


void GameDialog::OnButton1Click(wxCommandEvent& event) // przycisk od losowania
{
    if(gra.los==0){
        gra.losuj();
        int l = gra.los;
        StaticBitmap1->SetBitmap(kostka[l-1]);


        // tura musi sie zmienic gdy gracz ma wszytskie pionki w bazie i nie wylosuje szostki
        if((gra.gracz==0) && (gra.los != 6) && ((gra.ile_w_bazie_g + gra.ile_skonczylo_g) == 4)){
            zmien_ture();
            gra.los=0;
        } else if((gra.gracz==1) && (gra.los != 6) && ((gra.ile_w_bazie_r + gra.ile_skonczylo_r) == 4)){
            zmien_ture();
            gra.los=0;
        } else if((gra.gracz==2) && (gra.los != 6) && ((gra.ile_w_bazie_y + gra.ile_skonczylo_y)==4)){
            zmien_ture();
            gra.los=0;
        } else if((gra.gracz==3) && (gra.los != 6) && ((gra.ile_w_bazie_b + gra.ile_skonczylo_b)==4)){
            zmien_ture();
            gra.los=0;
        }

    }else wxMessageBox( _("Już wylosowałeś!"));

}

void GameDialog::wstaw_piona()
{
    if(gra.gracz == 0){

        pola[home_g[gra.ile_w_bazie_g-1]]->SetBitmap(rysunki[0]);
        current_g[gra.ile_w_bazie_g-1] = 44;
        gra.ile_w_bazie_g = gra.ile_w_bazie_g-1;
        zbij(44);
                    int ile2=ile_na_pol(44);
                    if(ile2==1){
                    pola[44]->SetBitmap(pionki[0]);}
                    if(ile2==2){
                    pola[44]->SetBitmap(pionki2[0]);}
                    if(ile2==3){
                    pola[44]->SetBitmap(pionki3[0]);}
                    if(ile2==4){
                    pola[44]->SetBitmap(pionki4[0]);}
        auto it=curr_g.find(home_g[gra.ile_w_bazie_g]);
        curr_g.erase(it);
        curr_g.insert(44);

    }
    if(gra.gracz == 1){
        pola[home_r[gra.ile_w_bazie_r-1]]->SetBitmap(rysunki[1]);
        current_r[gra.ile_w_bazie_r-1] = 6;
        gra.ile_w_bazie_r = gra.ile_w_bazie_r-1;
        zbij(6);
                    int ile2=ile_na_pol(6);
                    if(ile2==1){
                    pola[6]->SetBitmap(pionki[1]);}
                    if(ile2==2){
                    pola[6]->SetBitmap(pionki2[1]);}
                    if(ile2==3){
                    pola[6]->SetBitmap(pionki3[1]);}
                    if(ile2==4){
                    pola[6]->SetBitmap(pionki4[1]);}
        auto it= curr_r.find(home_r[gra.ile_w_bazie_r]);
        curr_r.erase(it);
        curr_r.insert(6);
    }
    if(gra.gracz == 2){
        pola[home_y[gra.ile_w_bazie_y-1]]->SetBitmap(rysunki[2]);
        current_y[gra.ile_w_bazie_y-1] = 76;
        gra.ile_w_bazie_y = gra.ile_w_bazie_y-1;
        zbij(76);
                    int ile2=ile_na_pol(76);
                    if(ile2==1){
                    pola[76]->SetBitmap(pionki[2]);}
                    if(ile2==2){
                    pola[76]->SetBitmap(pionki2[2]);}
                    if(ile2==3){
                    pola[76]->SetBitmap(pionki3[2]);}
                    if(ile2==4){
                    pola[76]->SetBitmap(pionki4[2]);}
        auto it=  curr_y.find(home_y[gra.ile_w_bazie_y]);
        curr_y.erase(it);
        curr_y.insert(76);
    }
    if(gra.gracz == 3){
        pola[home_b[gra.ile_w_bazie_b-1]]->SetBitmap(rysunki[3]);
        current_b[gra.ile_w_bazie_b-1] = 114;
        gra.ile_w_bazie_b = gra.ile_w_bazie_b-1;
        zbij(114);
                    int ile2=ile_na_pol(114);
                    if(ile2==1){
                    pola[114]->SetBitmap(pionki[3]);}
                    if(ile2==2){
                    pola[114]->SetBitmap(pionki2[3]);}
                    if(ile2==3){
                    pola[114]->SetBitmap(pionki3[3]);}
                    if(ile2==4){
                    pola[114]->SetBitmap(pionki4[3]);}
        auto it = curr_b.find(home_b[gra.ile_w_bazie_b]);
        curr_b.erase(it); // usuwa id z bazy
        curr_b.insert(114); // dodaje id pole startowego
    }
}
int GameDialog::ile_na_pol(int p)
{
int k=0;
    for(int i=0;i<4;i++){
        if(current_g[i]==p)
            k++;
    }
    for(int i=0;i<4;i++){
        if(current_r[i]==p)
            k++;
    }
    for(int i=0;i<4;i++){
        if(current_y[i]==p)
            k++;
    }
    for(int i=0;i<4;i++){
        if(current_b[i]==p)
            k++;
    }
    return k;

}

bool GameDialog::sprawdz(int x,int p)
{
    if(x==0){
       return (curr_g.find(p) != curr_g.end());
       }
    if(x==1){
        return (curr_r.find(p) != curr_r.end());
    }
    if(x==2){
        return (curr_y.find(p) != curr_y.end());
    }
    if(x==3){
        return (curr_b.find(p) != curr_b.end());
    }
}
void GameDialog::ruch(int los,int pol)//fukncja do poruszania się
{
    int ile=ile_na_pol(pol);
    if(ile==1){
         if(pol==44 || pol==56 || pol==57 || pol==58 || pol==59){
            pola[pol]->SetBitmap(rysunki[0]);
        }
        else if(pol==6 || pol==16 || pol==27 || pol==38 || pol==49){
            pola[pol]->SetBitmap(rysunki[1]);
        }
        else if(pol==76 || pol==64 ||  pol==63 || pol==62 || pol==61){
            pola[pol]->SetBitmap(rysunki[2]);
        }
        else if(pol==114 || pol==104 || pol==93 || pol==82 || pol==71){
            pola[pol]->SetBitmap(rysunki[3]);
        }
        else{
            pola[pol]->SetBitmap(rysunki[5]);
        }
    }
    int k;
    if(gra.gracz == 0){
            if(ile==2)
            pola[pol]->SetBitmap(pionki[0]);
            if(ile==3)
            pola[pol]->SetBitmap(pionki2[0]);
            if(ile==4)
            pola[pol]->SetBitmap(pionki3[0]);
       for(int i=0;i<4;i++)
        {
            if(pol==current_g[i])
                k=i;
        }
        for(int g=0;g<45;g++)
        {
            if(current_g[k]==valid_g[g]){
                if(g+los>=44){
                        wxMessageBox(_("Musisz wyrzucić mniejszą liczbę oczek, tracisz turę za złą decyzję"));
                        g=45;
                        gra.los=0;
                }else{
                    current_g[k]=valid_g[g+los];
                    zbij(current_g[k]);
                    int ile2=ile_na_pol(current_g[k]);
                    if(ile2==1){
                    pola[current_g[k]]->SetBitmap(pionki[0]);}
                    if(ile2==2){
                    pola[current_g[k]]->SetBitmap(pionki2[0]);}
                    if(ile2==3){
                    pola[current_g[k]]->SetBitmap(pionki3[0]);}
                    if(ile2==4){
                    pola[current_g[k]]->SetBitmap(pionki4[0]);}
                     auto it = curr_g.find(pol);
                     curr_g.erase(it);
                     curr_g.insert(valid_g[g+los]);
                     if(g+los>=40){
                        gra.ile_skonczylo_g=gra.ile_skonczylo_g+1;
                        wxMessageBox(_("Doszedłeś pionkiem do bazy!"));
                        if(gra.ile_skonczylo_g==4){
                            koniec();
                        }
                     }
                     g=45;
                     gra.los=0;
            }
        }
    }
    }
    if(gra.gracz == 1){
            if(ile==2)
            pola[pol]->SetBitmap(pionki[1]);
            if(ile==3)
            pola[pol]->SetBitmap(pionki2[1]);
            if(ile==4)
            pola[pol]->SetBitmap(pionki3[1]);
       for(int i=0;i<4;i++)
        {
            if(pol==current_r[i]){
                k=i;
            }
        }
        for(int g=0;g<45;g++)
        {
            if(current_r[k]==valid_r[g]){
               if(g+los>=44){
                        wxMessageBox(_("Musisz wyrzucić mniejszą liczbę oczek, tracisz turę za złą decyzję"));
                        g=45;
                        gra.los=0;
                }else{
                     current_r[k]=valid_r[g+los];
                     zbij(current_r[k]);
                     int ile2=ile_na_pol(current_r[k]);
                     if(ile2==1){
                     pola[current_r[k]]->SetBitmap(pionki[1]);}
                     if(ile2==2){
                     pola[current_r[k]]->SetBitmap(pionki2[1]);}
                     if(ile2==3){
                     pola[current_r[k]]->SetBitmap(pionki3[1]);}
                     if(ile2==4){
                     pola[current_r[k]]->SetBitmap(pionki4[1]);}
                     auto it = curr_r.find(pol);
                     curr_r.erase(it);
                     curr_r.insert(valid_r[g+los]);
                      if(g+los>=40){
                        gra.ile_skonczylo_r=gra.ile_skonczylo_r+1;
                        wxMessageBox(_("Doszedłeś pionkiem do bazy!"));
                        if(gra.ile_skonczylo_r==4){
                            koniec();
                        }
                     }
                     g=45;
                     gra.los=0;
                 }
             }
         }
    }

    if(gra.gracz == 2){
            if(ile==2)
            pola[pol]->SetBitmap(pionki[2]);
            if(ile==3)
            pola[pol]->SetBitmap(pionki2[2]);
            if(ile==4)
            pola[pol]->SetBitmap(pionki3[3]);
       for(int i=0;i<4;i++)
        {
            if(pol==current_y[i]){
                k=i;
            }
        }
        for(int g=0;g<45;g++)
        {
            if(current_y[k]==valid_y[g]){
                if(g+los>=44){
                        wxMessageBox(_("Musisz wyrzucić mniejszą liczbę oczek, tracisz turę za złą decyzję"));
                        g=45;
                        gra.los=0;
                }else{
                    current_y[k]=valid_y[g+los];
                    zbij(current_y[k]);
                    int ile2=ile_na_pol(current_y[k]);
                    if(ile2==1){
                    pola[current_y[k]]->SetBitmap(pionki[2]);}
                    if(ile2==2){
                    pola[current_y[k]]->SetBitmap(pionki2[2]);}
                    if(ile2==3){
                    pola[current_y[k]]->SetBitmap(pionki3[2]);}
                    if(ile2==4){
                    pola[current_y[k]]->SetBitmap(pionki4[2]);}
                    auto it = curr_y.find(pol);
                    curr_y.erase(it);
                    curr_y.insert(valid_y[g+los]);
                     if(g+los>=40){
                        gra.ile_skonczylo_y=gra.ile_skonczylo_y+1;
                        wxMessageBox(_("Doszedłeś pionkiem do bazy!"));
                        if(gra.ile_skonczylo_y==4){
                            koniec();
                        }
                     }
                    g=45;
                    gra.los=0;
                }
             }
         }
    }

    if(gra.gracz == 3){
            if(ile==2)
            pola[pol]->SetBitmap(pionki[3]);
            if(ile==3)
            pola[pol]->SetBitmap(pionki2[3]);
            if(ile==4)
            pola[pol]->SetBitmap(pionki3[3]);

       for(int i=0;i<4;i++)
        {
            if(pol==current_b[i]){
                k=i;
            }
        }
        for(int g=0;g<45;g++)
        {
            if(current_b[k]==valid_b[g]){
                if(g+los>=44){
                        wxMessageBox(_("Musisz wyrzucić mniejszą liczbę oczek, tracisz turę za złą decyzję"));
                        g=45;
                        gra.los=0;
                }else{
                    current_b[k]=valid_b[g+los];
                    zbij(current_b[k]);
                    int ile2=ile_na_pol(current_b[k]);
                    if(ile2==1){
                    pola[current_b[k]]->SetBitmap(pionki[3]);}
                    if(ile2==2){
                    pola[current_b[k]]->SetBitmap(pionki2[3]);}
                    if(ile2==3){
                    pola[current_b[k]]->SetBitmap(pionki3[3]);}
                    if(ile2==4){
                    pola[current_b[k]]->SetBitmap(pionki4[3]);}
                    auto it = curr_b.find(pol);
                    curr_b.erase(it);
                    curr_b.insert(valid_b[g+los]);
                     if(g+los>=40){
                        gra.ile_skonczylo_b=gra.ile_skonczylo_b+1;
                        wxMessageBox(_("Doszedłeś pionkiem do bazy!"));
                        if(gra.ile_skonczylo_b==4){
                            koniec();
                        }
                     }
                    g=45;
                    gra.los=0;
                }
             }
         }
    }
}

void GameDialog::zbij(int p)
{

    if(gra.gracz==0)
    {
        for(int i=0;i<4;i++){
            if(current_b[i]==p){
                current_b[i]=home_b[gra.ile_w_bazie_b];
                pola[current_b[i]]->SetBitmap(pionki[3]);
                auto it = curr_b.find(p);
                curr_b.erase(it);
                curr_b.insert(current_b[i]);
                gra.ile_w_bazie_b= gra.ile_w_bazie_b+1;
            }
        }
        for(int i=0;i<4;i++){
            if(current_y[i]==p){
                current_y[i]=home_y[gra.ile_w_bazie_y];
                pola[current_y[i]]->SetBitmap(pionki[2]);
                auto it = curr_y.find(p);
                curr_y.erase(it);
                curr_y.insert(current_y[i]);
                gra.ile_w_bazie_y= gra.ile_w_bazie_y+1;
            }
        }
        for(int i=0;i<4;i++){
            if(current_r[i]==p){
                current_r[i]=home_r[gra.ile_w_bazie_r];
                pola[current_r[i]]->SetBitmap(pionki[1]);
                auto it = curr_r.find(p);
                curr_r.erase(it);
                curr_r.insert(current_r[i]);
                gra.ile_w_bazie_r= gra.ile_w_bazie_r+1;
            }
        }
    }
    else if(gra.gracz==1)
    {
        for(int i=0;i<4;i++){
            if(current_b[i]==p){
                current_b[i]=home_b[gra.ile_w_bazie_b];
                pola[current_b[i]]->SetBitmap(pionki[3]);
                auto it = curr_b.find(p);
                curr_b.erase(it);
                curr_b.insert(current_b[i]);
                gra.ile_w_bazie_b= gra.ile_w_bazie_b+1;
            }
        }
        for(int i=0;i<4;i++){
            if(current_y[i]==p){
                current_y[i]=home_y[gra.ile_w_bazie_y];
                pola[current_y[i]]->SetBitmap(pionki[2]);
                auto it = curr_y.find(p);
                curr_y.erase(it);
                curr_y.insert(current_y[i]);
                gra.ile_w_bazie_y= gra.ile_w_bazie_y+1;
            }
        }
        for(int i=0;i<4;i++){
            if(current_g[i]==p){
                current_g[i]=home_g[gra.ile_w_bazie_g];
                pola[current_g[i]]->SetBitmap(pionki[0]);
                auto it = curr_g.find(p);
                curr_g.erase(it);
                curr_g.insert(current_g[i]);
                gra.ile_w_bazie_g= gra.ile_w_bazie_g+1;
            }
        }
    }
    else if(gra.gracz==2)
    {
        for(int i=0;i<4;i++){
            if(current_b[i]==p){
                current_b[i]=home_b[gra.ile_w_bazie_b];
                pola[current_b[i]]->SetBitmap(pionki[3]);
                auto it = curr_b.find(p);
                curr_b.erase(it);
                curr_b.insert(current_b[i]);
                gra.ile_w_bazie_b= gra.ile_w_bazie_b+1;
            }
        }
        for(int i=0;i<4;i++){
            if(current_g[i]==p){
                current_g[i]=home_g[gra.ile_w_bazie_g];
                pola[current_g[i]]->SetBitmap(pionki[0]);
                auto it = curr_g.find(p);
                curr_g.erase(it);
                curr_g.insert(current_g[i]);
                gra.ile_w_bazie_g= gra.ile_w_bazie_g+1;
            }
        }
        for(int i=0;i<4;i++){
            if(current_r[i]==p){
                current_r[i]=home_r[gra.ile_w_bazie_r];
                pola[current_r[i]]->SetBitmap(pionki[1]);
                auto it = curr_r.find(p);
                curr_r.erase(it);
                curr_r.insert(current_r[i]);
                gra.ile_w_bazie_r= gra.ile_w_bazie_r+1;
            }
        }
    }
    else if(gra.gracz==3)
    {
        for(int i=0;i<4;i++){
            if(current_g[i]==p){
                current_g[i]=home_g[gra.ile_w_bazie_g];
                pola[current_g[i]]->SetBitmap(pionki[0]);
                auto it = curr_g.find(p);
                curr_g.erase(it);
                curr_g.insert(current_g[i]);
                gra.ile_w_bazie_g= gra.ile_w_bazie_g+1;
            }
        }
        for(int i=0;i<4;i++){
            if(current_y[i]==p){
                current_y[i]=home_y[gra.ile_w_bazie_y];
                pola[current_y[i]]->SetBitmap(pionki[2]);
                auto it = curr_y.find(p);
                curr_y.erase(it);
                curr_y.insert(current_y[i]);
                gra.ile_w_bazie_y= gra.ile_w_bazie_y+1;
            }
        }
        for(int i=0;i<4;i++){
            if(current_r[i]==p){
                current_r[i]=home_r[gra.ile_w_bazie_r];
                pola[current_r[i]]->SetBitmap(pionki[1]);
                auto it = curr_r.find(p);
                curr_r.erase(it);
                curr_r.insert(current_r[i]);
                gra.ile_w_bazie_r= gra.ile_w_bazie_r+1;
            }
        }
    }
}


void GameDialog::koniec()
{

        gra.ile_graczy_skonczylo++;
        switch (gra.ile_graczy_skonczylo)
        {
        case 1:
            wxMessageBox(_("Wygrałeś!!"));
            break;
        case 2:
            wxMessageBox(_("Gratujacje! Zająłeś drugie miejsce!"));
            break;
        case 3:
            wxMessageBox(_("Skończyłeś grę! Zająłeś 3 miejsce"));
            wxMessageBox("Koniec gry!");
            break;
        }
}






void GameDialog::OnButton2Click(wxCommandEvent& event)  // reset
{
        current_g[0] = 0;
        current_g[1] = 1;
        current_g[2] = 11;
        current_g[3] = 12;

        current_r[0] = 9;
        current_r[1] = 10;
        current_r[2] = 20;
        current_r[3] = 21;

        current_y[0] = 108;
        current_y[1] = 109;
        current_y[2] = 119;
        current_y[3] = 120;

        current_b[0] = 99;
        current_b[1] = 100;
        current_b[2] = 110;
        current_b[3] = 111;


        for (auto it=curr_g.begin(); it!=curr_g.end(); ++it)
            curr_g.erase (it);

        for (auto it=curr_r.begin(); it!=curr_r.end(); ++it)
            curr_r.erase (it);

        for (auto it=curr_y.begin(); it!=curr_y.end(); ++it)
            curr_y.erase (it);

        for (auto it=curr_b.begin(); it!=curr_b.end(); ++it)
            curr_b.erase (it);


        curr_g.insert(0);
        curr_g.insert(1);
        curr_g.insert(11);
        curr_g.insert(12);

        curr_r.insert(9);
        curr_r.insert(10);
        curr_r.insert(20);
        curr_r.insert(21);

        curr_y.insert(108);
        curr_y.insert(109);
        curr_y.insert(119);
        curr_y.insert(120);

        curr_b.insert(99);
        curr_b.insert(100);
        curr_b.insert(110);
        curr_b.insert(111);


        for(int i=0; i<121; i++)
        {
            if (krzyz.find(i) != krzyz.end()){
                pola[i]->SetBitmap(rysunki[5]);
            }
            if(base_g.find(i) != base_g.end()){
                pola[i]->SetBitmap(rysunki[0]);
            }
            if(base_r.find(i) != base_r.end()){
                pola[i]->SetBitmap(rysunki[1]);
            }
            if(base_y.find(i) != base_y.end()){
                pola[i]->SetBitmap(rysunki[2]);
            }
            if(base_b.find(i) != base_b.end()){
                pola[i]->SetBitmap(rysunki[3]);
            }

            // pionki
            if(square_g.find(i) != square_g.end()){
                pola[i]->SetBitmap(pionki[0]);
            }
            if(square_r.find(i) != square_r.end()){
                pola[i]->SetBitmap(pionki[1]);
            }
            if(square_y.find(i) != square_y.end()){
                pola[i]->SetBitmap(pionki[2]);
            }
            if(square_b.find(i) != square_b.end()){
                pola[i]->SetBitmap(pionki[3]);
            }
        }

        gra.gracz = 0;

        gra.ile_w_bazie_r = 4;
        gra.ile_w_bazie_y = 4;
        gra.ile_w_bazie_g = 4;
        gra.ile_w_bazie_b = 4;

        gra.ile_skonczylo_r = 0;
        gra.ile_skonczylo_y = 0;
        gra.ile_skonczylo_g = 0;
        gra.ile_skonczylo_b = 0;

        gra.ile_graczy_skonczylo = 0;
        gra.los = 0;
}
