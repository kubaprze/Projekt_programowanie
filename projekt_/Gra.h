#ifndef GRA_H
#define GRA_H
#include <map>
#include <set>
#include <iostream>




class Gra
{
    public:
        Gra();
        ~Gra();
        void ruch(int kolor, int kostka); // kolor i liczbe na kostce zwraca nr bitmapy na ktra rusza sie pion

        bool sprawdz(int k, int p); // kolor

        int tura = 1;

        int gracz = 0;

        int ile_w_bazie_r = 4;
        int ile_w_bazie_y = 4;
        int ile_w_bazie_g = 4;
        int ile_w_bazie_b = 4;


        void losuj();

        int GetLos();
        int los = 0;



    private:
        // 4 listy dostępnych pól każda dla każdego koloru

        int id_gracza; // 0 - niebieski
                       // 1 - zielony
                       // 2 - czerwony
                       // 3 - zolty




};

#endif // GRA_H
