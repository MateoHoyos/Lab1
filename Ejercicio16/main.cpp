#include <iostream>
using namespace std;

/*Ejercicio 16. Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla el promedio de los números ingresados (excluyendo el cero).
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El promedio es: 2
*/


int main()
{
    float promedio=1;
    int n=1,contador=0,suma=0;
    cout <<"Ingrese un numero: ";
    cin>>n;
    while(n!=0){
        contador+=1;
        suma+=n;

        cout <<"Ingrese un numero: ";
        cin>>n;
    }
    if(contador==0){
        contador=1;
    }
    promedio=suma/contador;
    cout <<"El promedio es: "<<promedio<<endl;


    return 0;
}
