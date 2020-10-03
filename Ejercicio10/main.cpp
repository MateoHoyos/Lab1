#include <iostream>
using namespace std;

/*Ejercicio 10. Escriba un programa que pida un número N e imprima en pantalla todos los múlti-
plos de dicho número entre 1 y 100.

Ej: si se ingresa 33 se debe imprimir:
Multiplos de 33 menores que 100:
33
66
99*/

int main()
{
    int N,multiplo;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    cout << "Multiplos de " <<N<<" menores que 100:"<< endl;
    for(int i=1;i<=100;i++){
        multiplo=N*i;
        if(multiplo<=100){
            cout<<multiplo<<endl;
        }
    }
    return 0;
}
