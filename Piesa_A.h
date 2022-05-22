#include "Piesa.h"

class Piesa_A:public Piesa
{
protected:
    int gauri;
public:
    Piesa_A(char[], int, int);
    Piesa_A(const Piesa_A&);
    void afisare(ostream&);
    int nr_gauri();
};
