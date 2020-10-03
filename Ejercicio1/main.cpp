#include <iostream>
using namespace std;

/*Ejercicio 1. Escriba un programa que pida dos números A y B e imprima en pantalla el residuo
de la división A/B.
Ej: si se ingresan 8 y 3 se debe imprimir:
El residuo de la division 8/3 es: 2*/

int main()
{
    int A,B;
    cout <<"Ingrese un numero a: ";
    cin >> A;
    cout <<"Ingrese un numero b: ";
    cin >> B;
    cout<<"El residuo de la division "<<A<<"/"<<B<<" es: "<<A%B<<endl;
    return 0;
}
