#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>v;
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int n=s.length();
        char f=s[0];
        char l=s[n-1];
        if(n>10)
        {
            string r="";
            r+=f;
            r+=to_string(n-2);
            r+=l;
            v.push_back(r);
        }
        else{v.push_back(s);}
    }
    for(auto it:v)
    {
        cout<<it<<endl;
    }
    return 0;
}