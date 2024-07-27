#include<bits/stdc++.h>
using namespace std;
int main()
{
    string res="EASY";
    int t,q;
    cin>>t;
    while(t--)
    {
        cin>>q;
        if(q==1) res="HARD";
    }
    cout<<res;
    return 0;
}