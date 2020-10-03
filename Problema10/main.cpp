#include <iostream>
using namespace std;

/*Problema 10. Escriba un programa que reciba un número n e imprima el enésimo número primo.
Ej: Si recibe 4 el programa debe imprimir 7.
Nota: la salida del programa debe ser: El primo numero 4 es: 7.*/
bool numero_primo(int N);
int main()
{
    int N,contador=1,primo;
    bool bandera=true;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    for(int i=2;contador<=N;i++){
        bandera=numero_primo(i);
        if(bandera==true){
            contador++;
            primo=i;
        }
    }
    cout<<"El primo numero "<<N<<" es: "<<primo<<endl;
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
