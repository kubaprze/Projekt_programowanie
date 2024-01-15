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

        int tura = 1;

        int gracz = 0;

        int ile_w_bazie_r = 4;
        int ile_w_bazie_y = 4;
        int ile_w_bazie_g = 4;
        int ile_w_bazie_b = 4;

        int ile_skonczylo_r = 0;
        int ile_skonczylo_y = 0;
        int ile_skonczylo_g = 0;
        int ile_skonczylo_b = 0;
        void losuj();

        int GetLos();
        int los = 0;



    private:
        // 4 listy dostępnych pól każda dla każdego koloru






};

#endif // GRA_H
