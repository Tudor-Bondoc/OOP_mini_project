#include "Piesa.h"
#include <iostream>
#include <cstring>
using namespace std;

Piesa::Piesa(char a[4], int b)
{
    strcpy(cod, a);
    pret = b;
}

Piesa::Piesa()
{
    strcpy(cod, "0000");
    pret=0;
}

void Piesa::afisare(ostream &dev)
{
    dev << "Cod piesa: " << cod << endl;
    dev << "Pret piesa: " << pret << endl;
}

int Piesa::get_price()
{
    return pret;
}

void Piesa::set_price(int prt)
{
    pret = prt;
}
