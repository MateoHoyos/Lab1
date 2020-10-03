#include <iostream>
using namespace std;

/*Ejercicio 27. Escriba un programa que actúe como una calculadora con operaciones de suma,
resta, multiplicación y división, el usuario debe ingresar los operandos y la operación a realizar.
Ej: si se ingresan 3, + y 5 se debe imprimir:
3+5=8*/

int main()
{
    int a,b;
    char operacion;
    cout<<"Ingrese un numero:";cin>>a;
    cout<<"Ingrese operacion:";cin>>operacion;
    cout<<"Ingrese un numero:";cin>>b;
    if(operacion=='+'){
        cout<<a<<operacion<<b<<"="<<a+b<<endl;
    }
    else if (operacion=='-') {
        cout<<a<<operacion<<b<<"="<<a-b<<endl;
    }
    else if (operacion=='*') {
        cout<<a<<operacion<<b<<"="<<a*b<<endl;
    }
    else if (operacion=='/') {
        cout<<a<<operacion<<b<<"="<<a/b<<endl;
    }
    else{
        cout<<"Operacion invalida"<<endl;
    }

    return 0;
}
