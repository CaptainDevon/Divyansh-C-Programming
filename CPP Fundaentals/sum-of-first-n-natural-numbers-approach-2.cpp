#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"enter the number to find the sum till:";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"the sum of first "<<n<<"natural numbers="<<sum;

    return 0;
}