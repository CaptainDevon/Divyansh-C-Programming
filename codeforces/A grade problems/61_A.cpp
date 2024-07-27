#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    string s1,s2,res="";
    cin>>n1>>n2;
    s1=to_string(n1);
    s2=to_string(n2);
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==s2[i])res+="0";
        else res+="1";
    }
    cout<<res;
    return 0;
}