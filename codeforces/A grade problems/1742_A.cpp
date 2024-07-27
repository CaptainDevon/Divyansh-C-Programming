#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    vector<string>v;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a+b==c || b+c==a || a+c==b){v.push_back("YES");}
        else{v.push_back("NO");}
    }
    for(auto it:v)
    {
        cout<<it<<endl;
    }
    return 0;
}