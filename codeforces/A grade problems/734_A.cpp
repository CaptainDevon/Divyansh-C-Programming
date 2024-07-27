#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int a=0,d=0,t;
    cin>>t;
    while(t--)
    {
        cin>>c;
        if(c=='A')a++;
        else d++;
    }
    if(a==d) cout<<"Friendship";
    else if(a>d)cout<<"Anton";
    else cout<<"Danik";
    return 0;
}