#include <iostream>
using namespace std;

/*Problema 3. Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso
imprimir posiblemente año bisiesto.
Nota: el formato de salida debe ser:
14 es un mes invalido.
31/4 es una fecha invalida.
27/4 es una fecha valida.
29/2 es valida en bisiesto.*/

int main()
{
    int mes,dia;
    cout<<"Ingrese el numero del mes: ";
    cin>>mes;

    if(mes<=0 || mes>=13){
        cout<<mes<<" es un mes invalido."<<endl;
        return 0;
    }

    cout<<"Ingrese el numero del dia: ";
    cin>>dia;

    //mes de 31 dias,1enero,3marzo,5mayo,7julio,8agosto,10oct,12dic
    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){

        if(dia<=0 || dia>=32){
            cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
            return 0;
        }
        else{
            cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
            return 0;
        }

    }
    //mes de 30 dias,4abril,6junio,9sep,11nov
    else if (mes==4 || mes==6 || mes==9|| mes==11) {

        if(dia<=0 || dia>=31){
            cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
            return 0;
        }
        else{
            cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
            return 0;
        }

    }
    //2febrero: 29/28
    else{
        if(dia<=0 || dia>=30){
            cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
            return 0;
        }
        else if(dia==29){
            cout<<dia<<"/"<<mes<<" es valida en bisiesto."<<endl;
            return 0;
        }
        else{
            cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
            return 0;
        }

    }



    return 0;
}
