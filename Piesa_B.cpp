#include "Piesa_B.h"
#include <iostream>
#include <cstring>
using namespace std;

Piesa_B::Piesa_B(char a[4], int b, string c):Piesa(a,b)
{
    culoare = c;
}

Piesa_B::Piesa_B():Piesa()
{
    culoare="NoColor";
}

void Piesa_B::afisare(ostream &dev)
{
    Piesa::afisare(dev);
    dev << "Culoare piesa: " << culoare << endl;
}
