#include <iostream>
using namespace std;

/*Ejercicio 17. Escriba un programa que pida constantemente números hasta que se ingrese el
 * número cero e imprima en pantalla el mayor de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El numero mayor fue: 3
*/

int main()
{
    int n,mayor=0;
    cout<<"Ingrese un numero: ";
    cin>>n;
    while (n!=0) {
        if(n>mayor){mayor=n;}
        cout<<"Ingrese un numero: ";
        cin>>n;
    }
    cout<<"El numero mayor fue: "<<mayor<<endl;
    return 0;
}
