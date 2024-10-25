#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int lower=0,upper=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')lower++;
        else if(s[i]>='A' && s[i]<='Z')upper++;
    }
    if(upper>lower)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    cout<<s;
    return 0;
}