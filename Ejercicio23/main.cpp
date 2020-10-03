#include <iostream>
using namespace std;

/*Ejercicio 23. Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
común múltiplo entre los dos.
Ej: si se ingresan 4 y 6 se debe imprimir:
El MCM de 4 y 6 es: 12
*/

int main()
{
    int A,B,menor,MCD=1,MCM,i=2,Aux,Bux;
    cout <<"Ingrese un numero A: ";
    cin >> A;
    cout <<"Ingrese un numero B: ";
    cin >> B;
    if(A<B){menor=A;}
    else{menor=B;}
    Aux=A;Bux=B;
    while (i<=menor){
       if(Aux%i==0 && Bux%i==0){
           Aux=Aux/i;
           Bux=Bux/i;
           MCD=MCD*i;
       }
       else if(Aux%i==0) {
           Aux=Aux/i;
           i++;
       }
       else if(Bux%i==0){
           Bux=Bux/i;
           i++;
       }
       else{
           i++;
       }
    }
    MCM=A*B/MCD;
    cout<<"El MCM de "<<A<<" y "<<B<<" es: "<<MCM<<endl<<endl;

    return 0;
}
