#include <iostream>
using namespace std;

/*Problema 12. Escriba un programa que calcula el máximo factor primo de un número.
Ej: Si se recibe 33 el programa debe imprimir 11.
Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11.*/
bool numero_primo(int N);
int main()
{

    int N,max_primo;
    bool bandera=false;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    for(int i=2;i<=N;i++){
        if(N%i==0){//verificar factor
            bandera=numero_primo(i);
            if(bandera==true){
                max_primo=i;
            }
        }
    }
    cout<<"El mayor factor primo de "<<N<<" es: "<<max_primo<<endl;
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
