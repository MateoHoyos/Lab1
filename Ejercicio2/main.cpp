#include <iostream>
using namespace std;

/*Ejercicio 2. Escriba un programa que pida un número N e imprima en pantalla si es par o impar.
Ej: si se ingresa 5 se debe imprimir:
5 es impar*/

int main()
{
    int N;
    cout<<"Ingrese un numero N: ";
    cin>>N;

    if(N%2==0){
        cout<<N<<" es par"<<endl;
    }
    else{
        cout<<N<<" es impar"<<endl;
    }

    return 0;
}
