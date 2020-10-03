#include <iostream>
using namespace std;
/*Ejercicio 18. Escriba un programa que pida un número N e
 * imprima si es o no un cuadrado perfecto.
Ej: si se ingresa 9 se debe imprimir:
9 es un cuadrado perfecto.
y si se ingresa 8 se debe imprimir:
8 NO es un cuadrado perfecto.*/

int main()
{
    int N;
    bool Bandera=false;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    for(int i=1;i<=N;i++){
        if(i*i==N){
            Bandera=true;
            break;
        }
    }
    if(Bandera==true)
    {
        cout<<N<<" es un cuadrado perfecto."<<endl;
    }
    else{
        cout<<N<<" NO es un cuadrado perfecto."<<endl;
    }


    return 0;
}
