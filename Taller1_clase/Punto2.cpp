#include <iostream>

using namespace std;

int main()
{
    int n,d;
    cout << "ingrese el valor de n"<<endl;
    cin>>n;
    while(n>0){
        d=n%2;
        n=n/2;
        cout << "d:"<<d<<endl;
    }
    return 0;
}
