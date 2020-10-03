#include <iostream>
using namespace std;
#include <math.h>

/*Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente
suma infinita:
π = 4(1-1/3+1/5-1/7+1/9...)
El usuario debe ingresar el número de elementos usados en la aproximación.
Ej: si se ingresa 3 π = 4(1 −1/3 +1/5) = 3,46667, por lo que se debe imprimir:
pi es aproximadamente: 3.46667
*/

int main()
{
    int numero=0;
    float pi=0,aproxi=0, suma=0;
    cout << "Ingrese un numero= ";
    cin >> numero;
    for (int i=1;i<=numero;i++){
        int signo=pow((-1),i-1);
        aproxi=(float(signo))/(float((2*i-1)));
        suma = suma + aproxi;
    }

    pi = 4*suma;
    cout << "pi es aproximadamente: " << pi << endl;
    return 0;
}
