#include <iostream>

using namespace std;

int main()
{
    int temp,a,b;
    cout<<"enter first value:";
    cin>>a;
    cout<<"enter second value:";
    cin>>b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"values after swapping operation"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    

    return 0;
}