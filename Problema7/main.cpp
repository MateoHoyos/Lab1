#include <iostream>
using namespace std;

/*Problema 7. En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
1. Ej: 1, 1, 2, 3, 5, 8, ....
Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
de Fibonacci menores a n.
Ej: si se ingresa 10, sería la suma de 2+8 =10
Nota: el formato de salida debe ser: El resultado de la suma es: 10*/

int main()
{
    unsigned long long int N,Fibonacci=0,aux=1,sumafi=0;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    for(unsigned long long int i=1;i<=N;i++){
        //cout<<Fibonacci<<" ";
        if(Fibonacci<N && Fibonacci%2==0){
            sumafi=sumafi+Fibonacci;
        }
        aux+=Fibonacci;
        Fibonacci=aux-Fibonacci;
    }
    cout<<"El resultado de la suma es: "<<sumafi<<endl;
    return 0;
}
