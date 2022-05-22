#include "Piesa_A.h"
#include "Piesa_B.h"
#include "Piesa.h"

class Ansamblu:public Piesa
{
    Piesa_A pa;
    Piesa_B *vec;
    int nr_caracteristici;
    string *caracteristici;
public:
    Ansamblu(char[], char[], int, int, Piesa_B*, int, string*);
    void afisare(ostream&);
    int get_price();
};
