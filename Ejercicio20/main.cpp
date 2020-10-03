#include <iostream>
using namespace std;

/*Ejercicio 20. Escriba un programa que pida un número N e imprima si es o no un palíndromo
(igual de derecha a izquierda que de izquierda a derecha).
Ej: si se ingresa 121 se debe imprimir:
121 es un numero palindromo.
y si se ingresa 123 se debe imprimir:
123 NO es un numero palindromo.*/

int main()
{
    int N,aux=0,acomulador=0,invertido=0;
    //bool bandera=true;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    aux=N;
    for(int i=0;aux>0;i++){
        //acomulador=aux%10;
        acomulador=aux%10;
        aux=aux/10;
        invertido=invertido*10+acomulador;
    }
    if(invertido == N)
    {
        cout<<N<<" es un numero palindromo."<<endl;
    }
    else {
         cout<<N<<"  NO es un numero palindromo."<<endl;
    }


    return 0;
}
