#include <iostream>
using namespace std;

/*Ejercicio 25. Escriba un programa que pida un número N e imprima en pantalla la cantidad de
dígitos de N.
Ej: si se ingresa 1234 se debe imprimir:
1234 tiene 4 digitos.*/

int main()
{
    int N,aux=0,contador=0;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    aux=N;
    for(contador=0;aux>=1;contador++){
        aux=aux/10;
    }
    cout<<N<<" tiene "<<contador<<" digitos."<<endl;
    return 0;
}
