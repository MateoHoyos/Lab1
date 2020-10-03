#include <iostream>
using namespace std;

/*Problema 8. Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los
múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes.
Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23
Para a=5, b=7 y c=36. Se sumarían 5+10+15+20+25+30+35+7+14+21+28 = 210.
Nota: el formato de salida debe ser:
m11 + m12 + m13 + . . . + m21 + m22 + m23. . . = sumatoria.
m11 representa el primer múltiplo de a y así sucesivamente. m21 representa el primer múltiplo de b
y así sucesivamente.*/

int main()
{
    int a,b,c,suma = 0;
    cout<<"Ingrese el numero a= ";
    cin>>a;
    cout<<"Ingrese el numero b= ";
    cin>>b;
    cout<<"Ingrese el numero c= ";
    cin>>c;

    for(int mult1 = 2;mult1 <c;mult1++){
        if(b%mult1 == 0){
            cout<<mult1<<"+";
            suma +=mult1;
        }
        else if(a%mult1 == 0 ){
            cout<<mult1<<"+";
            suma +=mult1;
        }
        else if(mult1%b==0){
            cout<<mult1;
            if(mult1+1<c){cout<<"+";}
            suma +=mult1;
        }
        else if(mult1%a==0){
            cout<<mult1;
            if(mult1+1<c){cout<<"+";}
            suma +=mult1;
        }
    }

    cout<<"="<<suma<<endl;
    return 0;
}




/*
//buscar numero repetido en la lista creada
bool buscar_vector(int list[],int numero,int n_list)
{
    for (int i=0;i<n_list;i++) {

        if(numero==list[i])
        {
            return true;
        }

    }

    return false;
}

//variable global



int main()
{

    int a=0,c=0,b=0,suma=0;
    int contador=0,aux=0;

    cout<< "ingrese un numero: ";
    cin>>a;
    cout<< "ingrese un numero: ";
    cin>>b;
    cout<< "ingrese un numero: ";
    cin>>c;
    int list[c];


    for (int i=1;i*a<c;i++) {
        list[i-1]=a*i;
        contador ++;
        suma += a*i; //suma = suma + a*i
    }



    // rellenar vector con ceros, borrar basura
    for (int i=contador;i<c;i++) {
        list[i]=0;
    }


    for (int i=1;i*b<c;i++) {
        aux=b*i;
        bool valor = buscar_vector(list,aux,c);

        if(valor==false)
        {
            list[contador]=b*i;
            suma +=  b*i;
            contador ++;
        }

    }

    //impresion del vector
    for (int i=0;i<contador;i++) {

        cout << list[i];

        //condicion para el ultimo numero no imprima un "+"
        if(list[i]!=list[contador-1])
        {
            cout << " + ";
        }

    }


    cout << " = " <<suma<<endl<<endl;

    return 0;

}
*/
