#include <iostream>
using namespace std;

/*Problema 1. Escriba un programa que identique si un carácter
 *  ingresado es una vocal, una consonante o ninguna de las 2 e imprima un mensaje según el caso.
Nota: el formato de salida debe ser:
no es una letra.
a es una vocal.
C es una consonante.
*/

int main()
{
  char ch[1];
  cout<<"Ingrese un caracter: ";cin>>ch;
  if (isdigit(ch[0])){
    cout<<ch<<" Es un numero"<<endl;
    return 0;
     }
  if (isalpha(ch[0])) {
      string c(ch);
      if(c=="a" || c=="e" || c=="i" || c=="o" || c=="u" || c=="A" || c=="E" || c=="I" || c=="O" || c=="U"){
              cout<<c<<" es una vocal."<<endl;
              return 0;
          }
      cout<<c<<" es una consonante."<<endl;
      return 0;
  }
  cout<<ch<<" No es una letra"<<endl;
  return 0;
}
