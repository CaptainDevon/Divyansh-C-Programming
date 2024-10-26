#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,count=0;
    cin>>t;
    string temp="";
    while(t--)
    {
        string s;
        cin>>s;
        temp+=s;
    }
    for(int i=0;i<temp.size();i++)
    {
        if(temp[i]==temp[i+1])count++;
    }
    cout<<count+1;
    return 0;
}