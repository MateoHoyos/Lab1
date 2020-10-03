#include <iostream>
using namespace std;

/*Ejercicio 22. Escriba un programa que pida una cantidad entera de segundos y la imprima en
formato horas:minutos:segundos.
Ej: si se ingresa 7777 se debe imprimir:
2:9:37*/

int main(){

    int tiempo=0,horas=0,minutos=0,segundos=0;

    cout<<"Ingrese los segundos: ";
    cin>>tiempo;
    if(tiempo%3600==0)
    {
        horas = tiempo/3600;
    }
    else
    {
         horas = tiempo/3600;
         tiempo=tiempo%3600;

         if(tiempo%60==0)
         {
             minutos = tiempo/60;
         }
         else
         {
             minutos = tiempo/60;
             tiempo=tiempo%60;
             segundos = tiempo;

         }
    }

    cout<<horas<<":"<<minutos<<":"<<segundos<<endl;



    return 0;
}
