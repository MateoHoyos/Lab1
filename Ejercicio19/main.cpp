#include <iostream>
using namespace std;

/*Ejercicio 19. Escriba un programa que pida un número N e imprima si es o no un número primo.
Ej: si se ingresa 7 se debe imprimir:
7 es un numero primo.
y si se ingresa 8 se debe imprimir:
8 NO es un numero primo.*/

int main()
{
    int N;
    bool bandera=true;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    for(int i=2;i<N;i++){
        if(N%i==0){
            bandera=false;
            break;
        }
    }
    if(bandera==true)
    {
        cout<<N<<" es un numero primo."<<endl;
    }
    else{
        cout<<N<<" NO es un numero primo."<<endl;
    }

    return 0;
}
