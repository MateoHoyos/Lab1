#include <iostream>
#include <math.h>
using namespace std;

/*Problema 6. Escriba un programa que encuentre el valor aproximado del número de euler en base
a la siguiente suma infinita:
e =1/0! + 1/1! + 1/2! +1/3! +1/4! + 1/5! + ...
El usuario debe ingresar el número de elementos usados en la aproximación.
Ej: si se ingresa 3 e =1/0! +1/1! +1/2! = 2,5
Nota: el formato de salida debe ser: e es aproximadamente: 2.5
*/

double factorial(double numero);

int main()
{
    int numero=0;
    double euler=0,facto;
    cout << "Ingrese el numero de elementos de aproximacion de euler= ";
    cin >> numero;
    for (double i=0;i<numero;i++){
        facto=factorial(i);
        euler=euler+1/facto;
    }

    cout << "e es aproximadamente: " << euler << endl;
    return 0;
}

double factorial(double numero){
    double factorial=1;

    if(numero==0){
        return factorial;
    }
    for(int i=1;i<=numero;i++){
            factorial*=i;
    }
    return factorial;
}
