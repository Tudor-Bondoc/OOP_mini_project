#include "Piesa_A.h"
#include <iostream>
#include <cstring>
using namespace std;

Piesa_A::Piesa_A(char a[4], int b, int c):Piesa(a,b), gauri(c)
{

}

Piesa_A::Piesa_A(const Piesa_A &a)
{
    *this = a;
}

void Piesa_A::afisare(ostream &dev)
{
    Piesa::afisare(dev);
    dev << "Gauri: " << gauri << endl;
}

int Piesa_A::nr_gauri()
{
    return gauri;
}
