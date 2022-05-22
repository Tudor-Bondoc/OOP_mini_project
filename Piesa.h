#pragma once
#include <iostream>
using namespace std;

class Piesa
{
protected:
    char cod[4];
    int pret;
public:
    Piesa(char[], int);
    Piesa();
    virtual void afisare(ostream&);
    virtual int get_price();
    void set_price(int);
};
