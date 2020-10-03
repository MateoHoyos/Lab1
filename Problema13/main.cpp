#include <iostream>
using namespace std;

/*Problema 13. Escriba un programa que reciba un número y calcule la suma de todos los primos
menores que el número ingresado.
Ej: Si se recibe 10 el programa debe imprimir 17.
Nota: la salida del programa debe ser: El resultado de la suma es: 17 */
bool numero_primo(int N);
int main()
{
    int N,suma_primo=0;
    bool bandera=false;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    for(int i=2;i<N;i++){
        bandera=numero_primo(i);
        if(bandera==true){
            suma_primo+=i;
        }
    }
    cout<<"El resultado de la suma es "<<suma_primo<<endl;

    return 0;
}
bool numero_primo(int N){
    for(int i=2;i<N;i++){
        if(N%i==0){
            return false;
        }
    }
    return true;
}
