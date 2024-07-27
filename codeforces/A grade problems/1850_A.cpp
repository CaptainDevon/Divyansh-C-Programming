#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>res;
    int a,b,c,t;
    cin>>t;
    while(t--){
    cin>>a>>b>>c;    
    if(a+b>=10 || b+c>=10 || c+a>=10)
    {
        res.push_back("YES");
    }
    else res.push_back("NO");
    }
    for(auto it:res)
    {
        cout<<it<<endl;
    }
    return 0;
}