#include <iostream>
#include "Ansamblu.h"
#include <fstream>

using namespace std;

ofstream fout("evidenta.out");

int main()
{
    int n, i, tip, price, price_mare, price1, gau, k, nr_car;
    string color, *culori;
    Piesa_B *tablou, *aux;
    char cod[4], cod_mare[4], codd[4];
    cout << "Cate piese aveti in evidenta? ";
    cin >> n;
    Piesa **v = new Piesa*[n];
    Piesa *auxx;
    for (i=0; i<n; i++)
    {
        cout << "Introduceti piesa_A(1), piesa_B(2), sau Ansamblu(3)? ";
        cin >> tip;
        if (tip==1)
        {
            cout << "Introduceti cod pt piesa_A: ";
            cin >> cod;
            cout << "Introduceti pret pt piesa_A: ";
            cin >> price;
            cout << "Introduceti numarul de gauri ale piesei_A: ";
            cin >> gau;
            v[i] = new Piesa_A(cod, price, gau);
        }
        else if (tip==2)
        {
            cout << "Introduceti cod pt piesa_B: ";
            cin >> cod;
            cout << "Introduceti pret pt piesa_B: ";
            cin >> price;
            cout << "Introduceti culoarea piesei_B: ";
            cin >> color;
            v[i] = new Piesa_B(cod, price, color);
        }
        else if (tip==3)
        {
            cout << "Introduceti codul Ansamblului: ";
            cin >> codd;
            /*cout << "Introduceti pretul ansamblului: ";
            cin >> price1;*/
            cout << "Introduceti cod pt Piesa_A din ansamblu: ";
            cin >> cod;
            cout << "Introduceti pret pt Piesa_A din ansamblu: ";
            cin >> price;
            cout << "Introduceti nr. gauri pt Piesa_A din ansamblu: ";
            cin >> gau;
            tablou = new Piesa_B[gau];
            for(k=0; k<gau; k++)
            {
                cout << "Introduceti cod pt a "<<k<<"-a Piesa_B din ansamblu: ";
                cin >> cod_mare;
                cout << "Introduceti pret pt a "<<k<<"-a Piesa_B din ansamblu: ";
                cin >> price_mare;
                cout << "Introduceti culoarea pt a "<<k<<"-a Piesa_B din ansamblu: ";
                cin >> color;
                aux = new Piesa_B(cod_mare, price_mare, color);
                tablou[k] = (*aux);
            }
            cout << "Introduceti nr. caracteristici ale Ansamblului: ";
            cin >> nr_car;
            culori = new string[nr_car];
            for(int j=0; j<nr_car; j++)
            {
                cin >> color;
                culori[j] = color;
            }
            v[i] = new Ansamblu(codd, cod, price, gau, tablou, nr_car, culori);
            v[i]->set_price(v[i]->get_price());
            delete[] tablou;
            delete[] culori;
        }
    }





    //sortare dupa pret

    for (i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if(v[i]->get_price() > v[j]->get_price())
            {
                auxx=v[i];
                v[i]=v[j];
                v[j]=auxx;
            }
        }
    }

    //afisare

    for (i=0; i<n; i++)
        v[i]->afisare(fout);


    return 0;
}
