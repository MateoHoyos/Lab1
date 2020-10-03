#include <iostream>
using namespace std;

/*Problema 9. P9 Escriba un programa que pida un número entero N
 * e imprima el resultado de la suma de todos sus dígitos elevados a sí mismos.
Ej: si se ingresa 1223 el resultado sería 1^1 + 2^2 + 2^2 + 3^3 = 36.
****************************************
Condiciones de operación:
Rango de operacion "unsigned int" solo numeros enteros positivos del 0 al 4,294,967,295 (2^32 - 1).

*/

int main()
{
    unsigned int N,suma=0,aux=0,potencia=1,x=0;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    for(unsigned int i=0;N>=1;i++){
        aux=N%10;//ultimo numero
        x=aux;
        //Potencia del ultimo numero
        for(unsigned int j=1;j<=aux;j++){
            potencia*=aux;
        }
        suma+=potencia;
        potencia=1;
        N=N/10;
    }
    cout<<"El resultado de la suma es: "<<suma<<endl;
    return 0;
}


