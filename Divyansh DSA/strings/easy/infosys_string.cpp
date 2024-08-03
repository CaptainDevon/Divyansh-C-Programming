#include<bits/stdc++.h>
using namespace std;
void small_string(string &s)
{
    int n=s.length();
    string str=s;
    while(true)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1' && s[i+1]=='0')s.erase(i,1);
        }
        if(s!=str)str=s;
        else break;   
    }
}
int main()
{
    string s;
    cin>>s;
    small_string(s);
    cout<<s;
    return 0;
}