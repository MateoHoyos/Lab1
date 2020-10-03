#include <iostream>
using namespace std;

/*Ejercicio 11. Escriba un programa que pida un número N e imprima en pantalla su tabla de mul-
tiplicar hasta 10xN.

Ej: si se ingresa 7 se debe imprimir:
1x7=7
2x7=14
3x7=21
4x7=28
5x7=35
6x7=42
7x7=49
8x7=56
9x7=63
10x7=70*/

int main()
{
    int N;
    cout<<"Ingrese un numero N: ";
    cin>>N;

    for(int i=1;i<=10;i++){
        cout<<i<<"x"<<N<<"="<<i*N<<endl;
    }
    return 0;
}
