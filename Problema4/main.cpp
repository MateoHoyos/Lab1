#include <iostream>
using namespace std;

/*Problema 4. Escriba un programa para leer dos números enteros con el siguiente signicado: el
valor del primer número representa una hora del día en un reloj de 24 horas, de modo que 1245
representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo
de duración de la misma manera, por lo que 345 representa tres horas y 45 minutos. El programa debe
sumar esta duración primer número, y el resultado será impreso en la misma notación, en este caso
1630, que es el tiempo de 3 horas y 45 minutos después de 12:45.
Nota: el formato de salida debe ser: La hora es 1630.
Otra nota: se debe imprimir un mensaje como el siguiente cuando uno de los datos ingresados en
inválido: 1560 es un tiempo invalido.
*/

int evualar_tiempo(int tiempo)
{
    int horas=0;
    int minutos=0;

    horas = tiempo/100;
    minutos = tiempo%100;

    if((horas<=-1 || horas<=24) && (minutos>=61))
    {
        cout << tiempo << " es un tiempo invalido." << endl << endl;
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int tiempo1=0;
    int tiempo2=0;
    int horas1=0,horas2=0,minutos1=0,minutos2=0;
    int minutos_suma=0,hora_suma=0;

    bool condicion=false;

    while (condicion==false)
    {
        cout <<"ingrese el primer tiempo: ";
        cin >>tiempo1;

       condicion = evualar_tiempo(tiempo1);

    }

    condicion=false;

    while (condicion==false)
    {
        cout <<"ingrese el segundo tiempo: ";
        cin >>tiempo2;

        condicion = evualar_tiempo(tiempo2);

    }

    horas1 = tiempo1/100;
    minutos1 = tiempo1%100;

    horas2 = tiempo2/100;
    minutos2 = tiempo2%100;

    minutos_suma = minutos1 + minutos2;


    if(minutos_suma>=60)
    {

        minutos_suma = minutos_suma-60;
        hora_suma = 1;
    }

    hora_suma = hora_suma + horas1 + horas2;


    while (hora_suma>24)
    {
        hora_suma = hora_suma - 24;

    }



    cout << "La hora es " << hora_suma  << ":" << minutos_suma << endl << endl;
    //2459 y 2459, tiempo1=49:48 o tiempo2=1:58

    return 0;
}
