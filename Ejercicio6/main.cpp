#include <iostream>

using namespace std;

int main()
{
    int A,B,potencia=1;
    cout <<"Ingrese un numero A: ";
    cin >> A;
    cout <<"Ingrese un numero B: ";
    cin >> B;
    for(int i=0;i<B;i++){
        potencia=potencia*A;
    }
    cout<<A<<"^"<<B<<"="<<potencia<<endl;

    return 0;
}
