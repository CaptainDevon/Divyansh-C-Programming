#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>a>>b>>c>>d;
        if(a<b)count++;
        if(a<c)count++;
        if(a<d)count++;
        v.push_back(count);
    }

    for(auto it:v)
    {
        cout<<it<<endl;
    }
    return 0;
}