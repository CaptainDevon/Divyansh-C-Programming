#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"enter the the number to find the sum till:";
    cin>>n;
    sum=(n*(n+1))/2;
    cout<<"the sum of first "<<n<<" natural numbers="<<sum;
    return 0;
}