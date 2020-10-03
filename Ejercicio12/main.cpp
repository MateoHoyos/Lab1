#include <iostream>
using namespace std;
#include <math.h>

/*Ejercicio 12. Escriba un programa que pida un número N e imprima todas las potencias desde N1
hasta N5
.
Ej: si se ingresa 3 se debe imprimir:
3∧1=3
3∧2=9
3∧3=27
3∧4=81
3∧5=243*/
int potencia(int A,int B);

int main()
{
    int N;
    cout<<"Ingrese un numero N: ";
    cin>>N;

    for(int i=1,poten;i<=5;i++){
        poten=potencia(N,i);
        cout<<N<<"^"<<i<<"="<<poten<<endl;
    }

    return 0;
}

int potencia(int A,int B){
    int potencia=1;
    for(int i=0;i<B;i++){
        potencia=potencia*A;
    }
    return potencia;
}
