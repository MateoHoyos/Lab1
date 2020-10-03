#include <iostream>
using namespace std;
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

/*Ejercicio 29. Escriba un programa que adivine un número A (entre 0 y 100) seleccionado por el
usuario (el número NO se ingresa al programa), el programa imprimirá en pantalla un número B y
el usuario usará los símbolos `>', `<' y `=' para indicarle al programa si B es mayor, menor o igual
que A. El programa imprimira un nuevo número B, con base en simbolo ingresado por el usuario, y
repetira el proceso hasta acertar el número seleccionado por usuario.*/

int main()
{
    int numeroa=50;
    srand(time(NULL));
    int numerob=rand() % 100 + 1; //the range 1 to 100
    string comparar;
    while(comparar!="="){
        cout<<"Numero B "<<numerob<<" ";
        cin>>comparar;
        if(comparar==">"){
            numerob-=1;
        }
        else if (comparar=="<") {
            numerob+=1;
        }
    }
    cout<<endl<<"Numero acertado"<<endl<<endl;
    return 0;
}
