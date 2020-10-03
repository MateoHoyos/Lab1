#include <iostream>
using namespace std;

/*Problema 11. Escriba un programa que reciba un número y
 * calcule el mínimo común múltiplo de
todos los números enteros entre 1 y el número ingresado.
Ej: Si se recibe 4 el programa debe imprimir 12.
Nota: la salida del programa debe ser: El minimo comun multiplo es: 12.*/

int main()
{
    int N,contador=0;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    for(int i=N;;i++){
        for(int j=1;j<=N;j++){//buscar multiplo apartir de N para arriba
            if(i%j==0){
               contador++;
            }
            else {//si el numero no es divisible desde 1 hasta N se sale del ciclo
                contador=0;
                break;
            }
        }
        if(contador==N){
            cout<<"El minimo comun multiplo es: "<<i<<endl;
            return 0;
        }
    }

    return 0;

}

