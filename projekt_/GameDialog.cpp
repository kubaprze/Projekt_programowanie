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
	SetClientSize(wxSize(600,495));
	FlexGridSizer1 = new wxFlexGridSizer(1, 2, 0, 0);
	FlexGridSizer2 = new wxFlexGridSizer(11, 11, 0, 0);
	BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("tlo_sz.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|wxBORDER_SIMPLE|wxBORDER_NONE, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	FlexGridSizer2->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3 = new wxFlexGridSizer(3, 1, 0, 0);
	FlexGridSizer4 = new wxFlexGridSizer(1, 2, 0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Next move:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
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
    if(gra.los!=0 &&                                // jezeli los = 6 i klikamy an jeden z kwadratow bedacych baza pionkow to wywoluje funkcje wstaw piona
       ((square_g.find(pole) == square_g.end()) &&
        (square_r.find(pole) == square_r.end()) &&
        (square_y.find(pole) == square_y.end()) &&
        (square_b.find(pole) == square_b.end())))
    {
    ruch(gra.los,pole);
    gra.los=0;
    }





    //wxMessageBox(std::to_string(id2nr[event.GetId()]));  //test czy pole jest polaczone z fukncja ObBitmapButton1click
   // } else
} else {wxMessageBox("To nie twoj pionek!!"); }
}


void GameDialog::OnInit(wxInitDialogEvent& event)
{
}


void GameDialog::OnButton1Click(wxCommandEvent& event) // przycisk od losowania
{
    gra.losuj();
    int l = gra.los;
    StaticBitmap1->SetBitmap(kostka[l-1]);

    //wxString mess; mess << gra.gracz;
    //wxMessageBox(mess);


    if(gra.los != 6){
        gra.gracz = (gra.gracz+1) % 4;
        StaticBitmap2->SetBitmap(rysunki[gra.gracz]);
    }



}

void GameDialog::wstaw_piona()// tutaj bedizemi wstawiac rzut kosttką czyli argument los
{
    if(gra.gracz == 0){
            //if(gra.ile_w_bazie_g!=0){
        pola[44]->SetBitmap(pionki[0]);
        pola[home_g[gra.ile_w_bazie_g-1]]->SetBitmap(rysunki[0]);
        current_g[gra.ile_w_bazie_g-1] = 44;
        gra.ile_w_bazie_g = gra.ile_w_bazie_g-1;
        Connect(pola[44]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);
        curr_g.erase(home_g[gra.ile_w_bazie_g-1]);
        curr_g.insert(44);
        //tutaj diskonekt pola w bazie zeby nie dalo sie go kliknac
    }//}
    if(gra.gracz == 1){
        pola[6]->SetBitmap(pionki[1]);
        pola[home_r[gra.ile_w_bazie_r-1]]->SetBitmap(rysunki[1]);
        current_r[gra.ile_w_bazie_r-1] = 6;
        gra.ile_w_bazie_r = gra.ile_w_bazie_r-1;
        Connect(pola[6]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);
        curr_r.erase(home_r[gra.ile_w_bazie_r-1]);
        curr_r.insert(6);
    }
    if(gra.gracz == 2){
        pola[76]->SetBitmap(pionki[2]);
        pola[home_y[gra.ile_w_bazie_y-1]]->SetBitmap(rysunki[2]);
        current_y[gra.ile_w_bazie_y-1] = 76;
        gra.ile_w_bazie_y = gra.ile_w_bazie_y-1;
        Connect(pola[76]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);
        curr_y.erase(home_y[gra.ile_w_bazie_y-1]);
        curr_y.insert(76);
    }
    if(gra.gracz == 3){
        pola[114]->SetBitmap(pionki[3]);
        pola[home_b[gra.ile_w_bazie_b-1]]->SetBitmap(rysunki[3]);
        current_b[gra.ile_w_bazie_b-1] = 114;
        gra.ile_w_bazie_b = gra.ile_w_bazie_b-1;
        Connect(pola[114]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);
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

    if(pol==6){                                                // sprawdza czy nie jest to kolorowe pole jak tak to ustawia bitmape na ten kolor
       pola[pol]->SetBitmap(rysunki[1]);
    }
    if(pol==76){
        pola[pol]->SetBitmap(rysunki[2]);
    }
    if(pol==114){
        pola[pol]->SetBitmap(rysunki[3]);
    }
    if(pol==44){
        pola[pol]->SetBitmap(rysunki[0]);
    }else{
    pola[pol]->SetBitmap(rysunki[5]);}
    if(gra.gracz == 0){
         int k;
       for(int i=0;i<4;i++)
        {
         if(pol==current_g[i]){
            k=i;
        }}
             for(int g=0;g<45;g++)
             {
                 if(current_g[k]==valid_g[g])
                 {
                    if(g+los>(43-gra.ile_skonczylo_g))
                    {
                        //diskonet pola[current_g]
                        pola[43-gra.ile_skonczylo_g]->SetBitmap(pionki[0]);
                        current_g[k]=valid_g[43-gra.ile_skonczylo_g];
                        gra.ile_skonczylo_g=gra.ile_skonczylo_g+1;
                        g=45;
                    }else{
                     current_g[k]=valid_g[g+los];
                     //diskonekt pola[current_g]
                     pola[current_g[k]]->SetBitmap(pionki[0]);
                     Connect(pola[current_g[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);
                     curr_g.erase(pol);
                     curr_g.insert(valid_g[g+los]);
                     g=45;
                 }
             }
         }}
    if(gra.gracz == 1){
         int k;
       for(int i=0;i<4;i++)
        {
         if(pol==current_r[i]){
            k=i;
        }}
             for(int g=0;g<45;g++)
             {
                 if(current_r[k]==valid_r[g])
                 {
                    if(g+los>(43-gra.ile_skonczylo_r))
                    {
                        //diskonet pola[current_g]
                        pola[43-gra.ile_skonczylo_r]->SetBitmap(pionki[1]);
                        current_r[k]=valid_r[43-gra.ile_skonczylo_r];
                        gra.ile_skonczylo_r=gra.ile_skonczylo_r+1;
                        g=45;
                    }else{
                     current_r[k]=valid_r[g+los];
                     //diskonekt pola[current_g]
                     pola[current_r[k]]->SetBitmap(pionki[1]);
                     Connect(pola[current_r[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);
                     curr_r.erase(pol);
                     curr_r.insert(valid_r[g+los]);
                     g=45;
                 }
             }
         }
    }
    if(gra.gracz == 2){
        int k;
       for(int i=0;i<4;i++)
        {
         if(pol==current_y[i]){
            k=i;
        }}
             for(int g=0;g<45;g++)
             {
                 if(current_y[k]==valid_y[g])
                 {
                    if(g+los>(43-gra.ile_skonczylo_y))
                    {
                        //diskonet pola[current_g]
                        pola[43-gra.ile_skonczylo_y]->SetBitmap(pionki[2]);
                        current_y[k]=valid_y[43-gra.ile_skonczylo_y];
                        gra.ile_skonczylo_y=gra.ile_skonczylo_y+1;
                        g=45;
                    }else{
                     current_y[k]=valid_y[g+los];
                     //diskonekt pola[current_g]
                     pola[current_y[k]]->SetBitmap(pionki[2]);
                     Connect(pola[current_y[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);
                     curr_y.erase(pol);
                     curr_y.insert(valid_y[g+los]);
                     g=45;
                 }
             }
         }
    }
    if(gra.gracz == 3){
       int k;
       for(int i=0;i<4;i++)
        {
         if(pol==current_b[i]){
            k=i;
        }}
             for(int g=0;g<45;g++)
             {
                 if(current_b[k]==valid_b[g])
                 {
                    if(g+los>(43-gra.ile_skonczylo_b))
                    {
                        //diskonet pola[current_g]
                        pola[43-gra.ile_skonczylo_b]->SetBitmap(pionki[3]);
                        current_b[k]=valid_b[43-gra.ile_skonczylo_b];
                        gra.ile_skonczylo_b=gra.ile_skonczylo_b+1;
                        g=45;
                    }else{
                     current_b[k]=valid_b[g+los];
                     //diskonekt pola[current_g]
                     pola[current_b[k]]->SetBitmap(pionki[3]);
                     Connect(pola[current_b[k]]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameDialog::OnBitmapButton1Click);
                     curr_b.erase(pol);
                     curr_b.insert(valid_b[g+los]);
                     g=45;
                 }
             }
         }
    }
}
