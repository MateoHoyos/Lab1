#include <iostream>
using namespace std;

/*Problema 14. Un número palíndromo es igual de derecha a izquierda y de izquierda a derecha,
Ej: 969. escriba un programa que calcule el número palíndromo más grande que se puede obtener
como una multiplicación de números de 3 dígitos.
Ej: una de las posibles respuestas es: 143*777=111111.
Nota: la salida del programa debe ser: 143*777=111111*/

bool palindromo(int numero)
{
    int acomulador=0, numeroinvertido=0,aux=1;
    aux=numero;
    for(int i=0; aux>0 ;i++)
    {
       acomulador =aux%10;
       aux = aux/10;
       numeroinvertido=numeroinvertido*10+acomulador;
    }
    if(numeroinvertido == numero)
    {
        return true;
    }
    else
    {
         return false;
    }
}

int main()
{

    int multiplicacion=1,maximopalindromo=1,numero1=0,numero2=0;
    //bool factor=false;

    //cout << " ingrese un numero= ";
    //cin>>numero;

    for (int i=100;i<1000;i++) {
        for (int j=100;j<1000;j++) {
            multiplicacion = i*j;
            bool numeropalindromo = palindromo(multiplicacion);
            if(numeropalindromo == true)
            {
                if(multiplicacion>maximopalindromo)
                {
                    maximopalindromo=multiplicacion;
                    numero1=i;
                    numero2=j;
                 }
            }
        }
    }
    cout << numero1 <<"*"<<numero2<< "=" << maximopalindromo << endl<<endl;
    return 0;
}
