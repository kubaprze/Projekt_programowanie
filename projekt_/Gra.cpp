#include "Gra.h"
#include <cstdlib>
#include <ctime>

Gra::Gra()
{
    //ctor
}

Gra::~Gra()
{
    //dtor
}



void Gra::losuj()
{
    srand(time(0));
    los = rand() % 6 + 1;
}




