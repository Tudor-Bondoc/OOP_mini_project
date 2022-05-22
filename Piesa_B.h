#include "Piesa.h"
#include<iostream>
using namespace std;

class Piesa_B:public Piesa
{
protected:
    string culoare;
public:
    Piesa_B();
    Piesa_B(char[], int, string);
    void afisare(ostream &);
};
