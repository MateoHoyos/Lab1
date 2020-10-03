#include <iostream>
using namespace std;

/*Ejercicio 9. Escriba un programa que pida un número N e imprima el perímetro y área de un
círculo con radio N. Nota: use 3.1416 como una aproximación de pi.
Ej: si se ingresa 1 se debe imprimir:
Perimetro: 6.28352
Area: 3.1416*/

int main()
{

    int N;
    float perimetro,area;
    float pi=3.1416;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    perimetro=2*pi*N;
    area=pi*N*N;

    cout << "Perimetro: " <<perimetro<< endl;
    cout << "Area: " <<area<< endl;
    return 0;
}
