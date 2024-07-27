#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ns="";
    int z=0;
    cin>>s;
    multiset<char>set;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1' || s[i]=='2' || s[i]=='3')
        {
            set.insert(s[i]);
        }
    }
    for(auto it:set)
    {
        ns+=it;
    }
    for(int j=0;j<s.length();j++)
    {
        if(s[j]!='+')
        {
        s[j]=ns[z];
        z++;} 
    }
    cout<<s;
    return 0;
}