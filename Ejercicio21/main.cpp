#include <iostream>
using namespace std;
#include <ctype.h> //libreria para verificar y cambiar de mayuscula a minuscula y viceversa

/*Ejercicio 21. Escriba un programa que pida un carácter C, si es una letra la debe convertir de
mayúscula a minúscula y viceversa e imprimirla.
Ej: si se ingresa B se debe imprimir:
Letra convertida: b
y si se ingresa k se debe imprimir:
Letra convertida: K
*/

int main()
{
    char letra;
    cout<<"Ingrese su letra: ";cin>>letra;
    if (isdigit(letra)){
      cout<<"Su digito es un numero."<<endl;
    }
    if(isupper(letra)){
        letra=tolower(letra);
        cout<<"Letra convertida: "<<letra<<endl;
        return 0;
    }
    if(islower(letra)){
        letra=toupper(letra);
        cout<<"Letra convertida: "<<letra<<endl;
    }
    return 0;
}
