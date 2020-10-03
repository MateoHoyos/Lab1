#include <iostream>

using namespace std;

int main()
{
    int N,suma=0;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    for(int i=1;i<=N;i++){
        suma+=i;
    }
    cout<<"La sumatoria desde 0 hasta "<<N<<" es: "<<suma<<endl;

    return 0;
}
