#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a,b;
    cout <<"Ingrese un numero a: ";
    cin >> a;
    cout <<"Ingrese un numero b: ";
    cin >> b;
    float division=a/b;
    cout <<  round(division) << endl; //Redondea el resultado con round()
    return 0;
}


