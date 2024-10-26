#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int count=0;
    while (n > 0)
    {
        long long int lastDigit = n % 10;
        if (lastDigit == 4 || lastDigit == 7)
        {
            count++;
        }
        n /= 10;
    }
    if(count==4 || count==7)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}