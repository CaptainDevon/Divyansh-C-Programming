#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<string> v;
    int t;
    cin>>t;
    while(t--)
    {
        
        cin>>s;
        if(s[0]=='a' || s[1]=='b' ||s[2]=='c')
        {
            v.push_back("YES");
        }
        else{v.push_back("NO");}
    }
    for(auto it:v)
    {
        cout<<it<<endl;
    }
    return 0;
}