#include "Ansamblu.h"

Ansamblu::Ansamblu(char a1[4], char a[4], int b, int c, Piesa_B *vect, int d, string *e):Piesa(a1,0), pa(a, b, c)
{
    vec = new Piesa_B[c];
    for (int i=0; i<c; i++)
        vec[i] = vect[i];
    nr_caracteristici = d;
    caracteristici = new string[d];
    for (int i=0; i<d; i++)
        caracteristici[i] = e[i];
}

void Ansamblu::afisare(ostream &dev)
{
    Piesa::afisare(dev);
    pa.afisare(dev);
    for (int i=0; i<pa.nr_gauri(); i++)
        vec[i].afisare(dev);
    dev << "Numar caracteristici: " << nr_caracteristici << endl;
    dev << "Caracteristici: " << endl;
    for (int i=0; i<nr_caracteristici; i++)
        dev << caracteristici[i] << endl;
}

int Ansamblu::get_price()
{
    int sum_pret = 0;
    sum_pret += pa.get_price();
    for (int i=0; i<pa.nr_gauri(); i++)
        sum_pret += vec[i].get_price();
    return sum_pret;
}
