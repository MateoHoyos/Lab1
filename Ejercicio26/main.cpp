#include <iostream>
using namespace std;

/*Ejercicio 26. Escriba un programa que pida tres números e imprima
 * el tipo de triangulo (isósceles, equilátero, escaleno) que se formaría,
 * si sus lados tienen la longitud denida por los números
ingresados. Tenga en cuenta el caso en que los números ingresados no forman un triángulo.
Ej: si se ingresan 3, 3 y 5 se debe imprimir:
Se forma un triangulo isosceles.
y si se ingresan 3, 3 y 6 se debe imprimir:
Las longitudes ingresadas no forman un triangulo.
*/


bool Desigualdad_triangular(int lado1, int lado2, int lado3)
{
    if(lado1+lado2>lado3 && lado2+lado3 >lado1 && lado3+lado1>lado2)
    {
        return true;

    }
    else
    {

        return false;
    }
}

int main(){

    int lado1=0, lado2=0, lado3=0;
    bool valor = false;

    cout << " ingrese un numero= ";
    cin >> lado1;

    cout << " ingrese un numero= ";
    cin >> lado2;

    cout << " ingrese un numero= ";
    cin >> lado3;

    //El teorema de la existencia de un triangulo-Desigualdad triangular
    valor = Desigualdad_triangular(lado1,lado2,lado3);

    if(valor == false)
    {
        cout << "Las longitudes ingresadas no forman un triangulo." << endl;
    }
    else {

        if(lado1 == lado2 && lado1==lado3 && lado2 == lado3)
        {
            cout << "Se forma un Triangulo equilatero." << endl;
        }
        else if (lado1 == lado2 || lado1==lado3 || lado2 == lado3)
        {
            cout << "Se forma un triangulo isosceles." << endl;
        }
        else {
            cout << "Se forma un triangulo escaleno." << endl;
        }
    }

    return 0;
}
