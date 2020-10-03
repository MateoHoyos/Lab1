#include <iostream>
using namespace std;

/*Ejercicio 13. Escriba un programa que pida un número N e imprima todos los divisores de N.
Ej: si se ingresa 4 se debe imprimir:
Los divisores de n son:
1
2
4*/

int main()
{
    int N;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    cout<<"Los divisores de "<<N<<" son:"<<endl;
    for(int i=1;i<=N;i++){
        if(N%i==0){
            cout<<i<<endl;
        }
    }

    return 0;
}
