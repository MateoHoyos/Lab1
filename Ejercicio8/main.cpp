#include <iostream>

using namespace std;

int main()
{
    int N,factorial=1;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    for(int i=1;i<=N;i++){
        factorial*=i;
    }
    cout<<N<<"!="<<factorial<<endl;

    return 0;
}
