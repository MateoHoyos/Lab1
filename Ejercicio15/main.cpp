#include <iostream>
using namespace std;

/*Ejercicio 15. Escriba un programa que pida constantemente números hasta que se ingrese el número cero
 * e imprima en pantalla la suma de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El resultado de la sumatoria es: 6*/

int main()
{
    int suma=0,n;

    do{
    cout <<"Ingrese un numero: ";
    cin>>n;
    suma+=n;
    }
    while(n!=0);

    cout <<"El resultado de la sumatoria es: "<<suma<<endl;

    return 0;
}
