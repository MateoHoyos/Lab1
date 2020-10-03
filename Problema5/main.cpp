#include <iostream>
using namespace std;

/*Problema 5. Escriba un programa que muestre el siguiente patrón en la pantalla:
   *
  ***
 *****
*******
 ******
  ***
   *
El tamaño del patrón estará determinado un número entero impar que ingrese el usuario. En el
ejemplo mostrado, el tamaño de la gura es 7.

*/

int main()
{
    int N,contador=1,a,b;//intervalo a<=x<=b
    double mitad;
    cout<<"Ingrese un numero N: ";
    cin>>N;

    while(N%2==0 || N<=0){
        cout<<N<<" es un numero invalido"<<endl<<endl;
        cout<<"Ingrese un numero N: ";
        cin>>N;
    }
    mitad=N/2.0+0.5;
    a=mitad;//intervalo inferior
    b=mitad;//intervalo superior
    for(int f=1;f<=N;f++){
        for(int c=1;c<=N;c++){
            if((c>=a&&c<=b)){
                cout<<"*";
            }
            else {
                cout << " ";
            }
        }
        cout<<endl;
        if(f<mitad){
            a-=1;
            b+=1;
        }
        else{
            a+=1;
            b-=1;
        }

    }

    //cout<<mitad<<endl;
    return 0;
}
