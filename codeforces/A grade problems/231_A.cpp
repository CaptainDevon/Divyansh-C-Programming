#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,res=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int count=0;
        if(a==1)count++;
        if(b==1)count++;
        if(c==1)count++;

        if(count>1)res++;
    }
    cout<<res;
    return 0;
}