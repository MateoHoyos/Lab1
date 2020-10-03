#include <iostream>
using namespace std;

/*Ejercicio 4. Escriba un programa que pida dos números A y B e imprima en pantalla el menor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El menor es 3*/

int main()
{
    int A,B;
    cout <<"Ingrese un numero a: ";
    cin >> A;
    cout <<"Ingrese un numero b: ";
    cin >> B;
    if(A<B){
        cout<<"El menor es "<<A<<endl;
    }
    else if (B<A) {
        cout<<"El menor es "<<B<<endl;
    }
    else {
        cout<<A<<" y "<<B<<" son iguales"<<endl;
    }

    return 0;
}
