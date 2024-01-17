#include "GameDialog.h"


//(*InternalHeaders(GameDialog)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)
#include <string>

#include <wx/msgdlg.h>


//(*IdInit(GameDialog)
const long GameDialog::ID_BITMAPBUTTON1 = wxNewId();
const long GameDialog::ID_STATICTEXT1 = wxNewId();
const long GameDialog::ID_STATICBITMAP2 = wxNewId();
const long GameDialog::ID_STATICBITMAP1 = wxNewId();
const long GameDialog::ID_BUTTON1 = wxNewId();
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

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER, _T("id"));
	SetClientSize(wxSize(615,495));
	FlexGridSizer1 = new wxFlexGridSizer(1, 2, 0, 0);
	FlexGridSizer2 = new wxFlexGridSizer(11, 11, 0, 0);
	BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("tlo_sz.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|wxBORDER_SIMPLE|wxBORDER_NONE, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	FlexGridSizer2->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3 = new wxFlexGridSizer(3, 1, 0, 0);
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
	FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	SetSizer(FlexGridSizer1);
	Layout();
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnButton1Click);
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
            gra.los=0;
        }





        //wxMessageBox(std::to_string(id2nr[event.GetId()]));  //test czy pole jest polaczone z fukncja ObBitmapButton1click
   // } else
    } else {wxMessageBox("To nie twoj pionek!!"); }
}


void GameDialog::OnInit(wxInitDialogEvent& event)
{
}

void GameDialog::zmien_ture()
{
    gra.gracz = (gra.gracz+1) % 4;
    StaticBitmap2->SetBitmap(rysunki[gra.gracz]);
}


void GameDialog::OnButton1Click(wxCommandEvent& event) // przycisk od losowania
{
    gra.losuj();
    int l = gra.los;
    StaticBitmap1->SetBitmap(kostka[l-1]);


    // tura musi sie zmienic gdy gracz ma wszytskie pionki w bazie i nie wylosuje szostki
    if((gra.gracz==0) && (gra.los != 6) && (gra.ile_w_bazie_g==4)){
        zmien_ture();
    } else if((gra.gracz==1) && (gra.los != 6) && (gra.ile_w_bazie_r==4)){
        zmien_ture();
    } else if((gra.gracz==2) && (gra.los != 6) && (gra.ile_w_bazie_y==4)){
        zmien_ture();
    } else if((gra.gracz==3) && (gra.los != 6) && (gra.ile_w_bazie_b==4)){
        zmien_ture();
    }



    //wxMessageBox(std::to_string(gra.gracz));

}

void GameDialog::wstaw_piona()// tutaj bedizemi wstawiac rzut kosttką czyli argument los
{
    if(gra.gracz == 0){
            //if(gra.ile_w_bazie_g!=0){
        pola[44]->SetBitmap(pionki[0]);
        pola[home_g[gra.ile_w_bazie_g-1]]->SetBitmap(rysunki[0]);
        current_g[gra.ile_w_bazie_g-1] = 44;
        gra.ile_w_bazie_g = gra.ile_w_bazie_g-1;
                    int ile2=ile_na_polu(44);
                    if(ile2==1){
                    pola[44]->SetBitmap(pionki[0]); //A CO W SYTUACJI GDY CHCE WYSTAWIC PIONA NA KTÓRYM STOI PRZECIWNIK??
                    Connect(pola[44]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==2){
                    pola[44]->SetBitmap(pionki2[0]);
                    Connect(pola[44]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==3){
                    pola[44]->SetBitmap(pionki3[0]);
                    Connect(pola[44]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==4){
                    pola[44]->SetBitmap(pionki4[0]);
                    Connect(pola[44]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
        curr_g.erase(home_g[gra.ile_w_bazie_g-1]);
        curr_g.insert(44);
        //tutaj diskonekt pola w bazie zeby nie dalo sie go kliknac
    }//}
    if(gra.gracz == 1){
        pola[6]->SetBitmap(pionki[1]);
        pola[home_r[gra.ile_w_bazie_r-1]]->SetBitmap(rysunki[1]);
        current_r[gra.ile_w_bazie_r-1] = 6;
        gra.ile_w_bazie_r = gra.ile_w_bazie_r-1;
                    int ile2=ile_na_polu(6);
                    if(ile2==1){
                    pola[6]->SetBitmap(pionki[1]); //A CO W SYTUACJI GDY CHCE WYSTAWIC PIONA NA KTÓRYM STOI PRZECIWNIK??
                    Connect(pola[6]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==2){
                    pola[6]->SetBitmap(pionki2[1]);
                    Connect(pola[6]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==3){
                    pola[6]->SetBitmap(pionki3[1]);
                    Connect(pola[6]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==4){
                    pola[6]->SetBitmap(pionki4[1]);
                    Connect(pola[6]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
        curr_r.erase(home_r[gra.ile_w_bazie_r-1]);
        curr_r.insert(6);
    }
    if(gra.gracz == 2){
        pola[76]->SetBitmap(pionki[2]);
        pola[home_y[gra.ile_w_bazie_y-1]]->SetBitmap(rysunki[2]);
        current_y[gra.ile_w_bazie_y-1] = 76;
        gra.ile_w_bazie_y = gra.ile_w_bazie_y-1;
                    int ile2=ile_na_polu(76);
                    if(ile2==1){
                    pola[76]->SetBitmap(pionki[2]); //A CO W SYTUACJI GDY CHCE WYSTAWIC PIONA NA KTÓRYM STOI PRZECIWNIK??
                    Connect(pola[76]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==2){
                    pola[76]->SetBitmap(pionki2[2]);
                    Connect(pola[76]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==3){
                    pola[76]->SetBitmap(pionki3[2]);
                    Connect(pola[76]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==4){
                    pola[76]->SetBitmap(pionki4[2]);
                    Connect(pola[76]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
        curr_y.erase(home_y[gra.ile_w_bazie_y-1]);
        curr_y.insert(76);
    }
    if(gra.gracz == 3){
        pola[114]->SetBitmap(pionki[3]);
        pola[home_b[gra.ile_w_bazie_b-1]]->SetBitmap(rysunki[3]);
        current_b[gra.ile_w_bazie_b-1] = 114;
        gra.ile_w_bazie_b = gra.ile_w_bazie_b-1;
                    int ile2=ile_na_polu(114);
                    if(ile2==1){
                    pola[114]->SetBitmap(pionki[3]); //A CO W SYTUACJI GDY CHCE WYSTAWIC PIONA NA KTÓRYM STOI PRZECIWNIK??
                    Connect(pola[114]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==2){
                    pola[114]->SetBitmap(pionki2[3]);
                    Connect(pola[114]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==3){
                    pola[114]->SetBitmap(pionki3[3]);
                    Connect(pola[114]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==4){
                    pola[114]->SetBitmap(pionki4[3]);
                    Connect(pola[114]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
        curr_b.erase(home_b[gra.ile_w_bazie_b-1]); // usuwa id z bazy
        curr_b.insert(114); // dodaje id pole startowego
    }


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
    int ile=ile_na_polu(pol);
    if(ile==1){
         if(pol==6){                                                // sprawdza czy nie jest to kolorowe pole jak tak to ustawia bitmape na ten kolor
           pola[6]->SetBitmap(rysunki[1]);
        }
        else if(pol==76){
            pola[76]->SetBitmap(rysunki[2]);
        }
        else if(pol==114){
            pola[114]->SetBitmap(rysunki[3]);
        }
        else if(pol==44){
            pola[44]->SetBitmap(rysunki[0]);
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
                if(g+los>(43-gra.ile_skonczylo_g)){
                        //diskonet pola[current_g]
                        pola[43-gra.ile_skonczylo_g]->SetBitmap(pionki[0]);
                        current_g[k]=valid_g[43-gra.ile_skonczylo_g];
                        gra.ile_skonczylo_g=gra.ile_skonczylo_g+1;
                        g=45;
                }else{
                     current_g[k]=valid_g[g+los];
//                     zbicie(current_g[k]);
                     int ile2=ile_na_polu(current_g[k]);
                    if(ile2==1){
                    pola[current_g[k]]->SetBitmap(pionki[0]);
                    Connect(pola[current_g[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==2){
                    pola[current_g[k]]->SetBitmap(pionki2[0]);
                    Connect(pola[current_g[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==3){
                    pola[current_g[k]]->SetBitmap(pionki3[0]);
                    Connect(pola[current_g[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==4){
                    pola[current_g[k]]->SetBitmap(pionki4[0]);
                    Connect(pola[current_g[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                     curr_g.erase(pol);
                     curr_g.insert(valid_g[g+los]);
                     g=45;
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
                if(g+los>(43-gra.ile_skonczylo_r)){
                    //diskonet pola[current_g]
                    pola[43-gra.ile_skonczylo_r]->SetBitmap(pionki[1]);
                    current_r[k]=valid_r[43-gra.ile_skonczylo_r];
                    gra.ile_skonczylo_r=gra.ile_skonczylo_r+1;
                    g=45;
                }else{
                     current_r[k]=valid_r[g+los];
                     //diskonekt pola[current_g]
                     int ile2=ile_na_polu(current_r[k]);
                     if(ile2==1){
                     pola[current_r[k]]->SetBitmap(pionki[1]);
                     Connect(pola[current_r[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                     if(ile2==2){
                     pola[current_r[k]]->SetBitmap(pionki2[1]);
                     Connect(pola[current_r[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                     if(ile2==3){
                     pola[current_r[k]]->SetBitmap(pionki3[1]);
                     Connect(pola[current_r[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                     if(ile2==4){
                     pola[current_r[k]]->SetBitmap(pionki4[1]);
                     Connect(pola[current_r[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                     curr_r.erase(pol);
                     curr_r.insert(valid_r[g+los]);
                     g=45;
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
                if(g+los>(43-gra.ile_skonczylo_y)){
                    //diskonet pola[current_g]
                    pola[43-gra.ile_skonczylo_y]->SetBitmap(pionki[2]);
                    current_y[k]=valid_y[43-gra.ile_skonczylo_y];
                    gra.ile_skonczylo_y=gra.ile_skonczylo_y+1;
                    g=45;
                }else{
                    current_y[k]=valid_y[g+los];
                    int ile2=ile_na_polu(current_y[k]);
                    if(ile2==1){
                    pola[current_y[k]]->SetBitmap(pionki[2]);
                    Connect(pola[current_y[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==2){
                    pola[current_y[k]]->SetBitmap(pionki2[2]);
                    Connect(pola[current_y[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==3){
                    pola[current_y[k]]->SetBitmap(pionki3[2]);
                    Connect(pola[current_y[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==4){
                    pola[current_y[k]]->SetBitmap(pionki4[2]);
                    Connect(pola[current_y[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    //diskonekt pola[current_g]
                    curr_y.erase(pol);
                    curr_y.insert(valid_y[g+los]);
                    g=45;
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
                if(g+los>(43-gra.ile_skonczylo_b)){
                        //diskonet pola[current_g]
                        pola[43-gra.ile_skonczylo_b]->SetBitmap(pionki[3]);
                        current_b[k]=valid_b[43-gra.ile_skonczylo_b];
                        gra.ile_skonczylo_b=gra.ile_skonczylo_b+1;
                        g=45;
                }
                else{
                    current_b[k]=valid_b[g+los];
                    //diskonekt pola[current_g]
                    int ile2=ile_na_polu(current_b[k]);
                    if(ile2==1){
                    pola[current_b[k]]->SetBitmap(pionki[3]);
                    Connect(pola[current_b[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==2){
                    pola[current_b[k]]->SetBitmap(pionki2[3]);
                    Connect(pola[current_b[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==3){
                    pola[current_b[k]]->SetBitmap(pionki3[3]);
                    Connect(pola[current_b[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    if(ile2==4){
                    pola[current_b[k]]->SetBitmap(pionki4[3]);
                    Connect(pola[current_b[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);}
                    curr_b.erase(pol);
                    curr_b.insert(valid_b[g+los]);
                    g=45;
                }
             }
         }
    }
}
/*void GameDialog::zbicie(int p)
{
    if(gra.gracz==0)
    {
        for(int i=0;i<4;i++){
            if(current_b[i]==p){
                current_b[i]=p //przypisuje jedną wartość z squere_b która nie znajduje się w curr_b
            }
        }
    }
}
*/


int GameDialog::ile_na_polu(int p)
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

/*
int ile = ile_na_polu(pol);
    if(ile==0){
        if(pol==6){                                                // sprawdza czy nie jest to kolorowe pole jak tak to ustawia bitmape na ten kolor
           pola[6]->SetBitmap(rysunki[1]);
        }
        else if(pol==76){
            pola[76]->SetBitmap(rysunki[2]);
        }
        else if(pol==114){
            pola[114]->SetBitmap(rysunki[3]);
        }
        else if(pol==44){
            pola[44]->SetBitmap(rysunki[0]);
        }
        else{
            pola[pol]->SetBitmap(rysunki[5]);
        }
    }
*/

    // sprawdzasz pole na ktore idziesz (ilosc pionow)
    // sprawdzasz pole na ktorym jestes (ilosc pionow)

    // jeżeli pole jest niepuste
        // jeżeli na polu stoi twoj pionek
            //ruszasz sie
            //zmieniasz bitmape pola na ktore idziesz na odpowiednia
            // zmieniasz bitmape pola na kotrym jestes
        // jezeli to nie towj pionek
            //ruszasz sie
            //pionki tam stojące wracają do swojej bazy
            //zmieniasz bitmape na ktorej stales
    // jeżeli pole jest puste
        // ruszasz sie
        // zmieniasz bitmape na ktorej jestes


/*void GameDialog::ruszaj(int pol)
{
    los = gra.los;

    ile = ile_na_polu(pol);
    if((pol+los)!=0)
    {

    }

}*/
























