#include <iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>

/*Ejercicio 30. Escriba un programa que genere un número aleatorio A (entre 0 y 100) y le pida al
usuario que lo adivine, el usuario ingresa un número B y el programa le dirá si B es mayor o menor
que A, esto se repetirá hasta que el usuario adivine el número, en ese momento el programa le dirá
el número de intentos que tardo el usuario en adivinar el número.
Nota: para generar el número aleatorio use la función rand() de la librería <cstdlib>, recuerde
convertirlo al rango (0,100).*/

int main()
{
    srand(time(NULL));
    int num=1+rand()%(101-1);
    int n,intentos=0;
    do{
        cout<<"Ingrese un numero: ";
        cin>>n;
        if(n>num){
            cout<<"El numero es menor"<<endl<<endl;
            intentos++;
        }
        else if (n<num) {
            cout<<"El numero es mayor"<<endl<<endl;
            intentos++;
        }
        else if (n==num) {
            break;
        }
        else {
            cout<<"Numero fuera de rango"<<endl<<endl;
        }

    }while(num!=n);

    cout<<"Numero adivinado!! "<<"Numero de intentos: "<<intentos<<endl;


    return 0;
}
