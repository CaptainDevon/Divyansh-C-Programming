#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    cin>>d;
    int count=1;
    while(d>5)
    {
        count++;
        d-=5;
    }
    cout<<count<<endl;
    return 0;
}