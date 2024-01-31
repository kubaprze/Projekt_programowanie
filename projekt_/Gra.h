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

        int ile_graczy_skonczylo = 0;


        int los = 0;



    private:







};

#endif // GRA_H
