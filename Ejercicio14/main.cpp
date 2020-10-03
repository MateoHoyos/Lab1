#include <iostream>
using namespace std;

/*Ejercicio 14. Escriba un programa que imprima dos columnas paralelas, una con los números del
1 al 50 y otra con los números del 50 al 1.
Ej: las primeras lineas a imprimir serían:
1 50
2 49
3 48
*/

int main()
{
    for(int i=1,j=50;i<=50,j>=1;i++,j--){
        cout<<i<<" "<<j<<endl;
    }
    return 0;
}
