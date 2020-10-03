#include <iostream>
using namespace std;

/*Problema 2. Se necesita un programa que permita determinar la mínima combinación de billetes
y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
$20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar
la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la
cantidad deseada, el sistema deberá decir lo que resta para lograrla.
Ej: si se ingresa 47810, el programa debe imprimir:
50000 : 0
20000: 2
10000 : 0
5000: 1
2000 : 1
1000: 0
500 : 1
200: 1
100 : 1
50: 0
Faltante: 10*/

int main()
{
    int cd=0; //cantidad de devuelta
    int b50000=0;
    int b20000=0;
    int b10000=0;
    int b5000=0;
    int b2000=0;
    int b1000=0; // moneda de 1000
    int m500=0; //moneda de 500
    int m200=0; // moneda de 200
    int m100=0; //moneda de 100
    int m50=0; //moneda de 50

    cout << "ingrese la cantidad de dinero: ";
    cin >> cd;
    cout << endl;

    //billete de 50000
    if (cd >= 50000)
    {
        b50000 = cd/50000;
        cd = cd%50000;
    }
    else { b50000 = cd/50000; }


    //$20.000,
    if (cd >= 20000)
    {
        b20000 = cd/20000;
        cd = cd%20000;
    }
    else { b20000 = cd/20000; }

    //$10.000,
    if (cd >= 10000)
    {
        b10000 = cd/10000;
        cd = cd%10000;
    }
    else { b10000 = cd/10000; }

    //$5.000
    if (cd >= 5000)
    {
        b5000 = cd/5000;
        cd = cd%5000;
    }
    else { b5000 = cd/5000; }

    //$2.000
    if (cd >= 2000)
    {
        b2000 = cd/2000;
        cd = cd%2000;
    }
    else { b2000 = cd/2000; }

    //$1.000
    if (cd >= 1000)
    {
        b1000 = cd/1000;
        cd = cd%1000;
    }
    else { b1000 = cd/1000; }

    //$500
    if (cd >= 500)
    {
        m500 = cd/500;
        cd = cd%500;
    }
    else { m500 = cd/500; }

    //$200
    if (cd >= 200)
    {
        m200 = cd/200;
        cd = cd%200;
    }
    else { m200 = cd/200; }

    //$100
    if (cd >= 100)
    {
        m100 = cd/100;
        cd = cd%100;
    }
    else { m100 = cd/100; }

    //$50
    if (cd >= 50)
    {
        m50 = cd/50;
        cd = cd%50;
    }
    else { m50 = cd/50; }


    cout << "50000 : " << b50000 << endl;
    cout << "20000 : " << b20000 << endl;
    cout << "10000 : " << b10000 << endl;
    cout << "5000  : " << b5000 << endl;
    cout << "2000  : " << b2000 << endl;
    cout << "1000  : " << b1000 << endl;
    cout << "500   : " << m500 << endl;
    cout << "200   : " << m200 << endl;
    cout << "100   : " << m100 << endl;
    cout << "50    : " << m50 << endl;
    cout << "Faltante : " << cd << endl<<endl;
    return 0;
}
