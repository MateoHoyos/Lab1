#include <iostream>
using namespace std;

/*Ejercicio 24. Escriba un programa que pida una número entero e imprima un cuadrado de dicho
tamaño, los bordes del cuadrado deben estar hechos con el carácter `+' y el interior debe estar vacío.
Ej: si se ingresa 4 se debe imprimir:
++++
+  +
+  +
++++
*/

int main()
{
    int N;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    for(int f=0;f<N;f++){
        for(int c=0;c<N;c++){
                if(f==0 || f+1==N){
                    cout<<"+";
                }
                else if (c==0 || c+1 == N)
                {
                    cout << "+";
                }
                else {
                    cout << " ";
                }

        }
        cout<<endl;
    }
    return 0;
}
