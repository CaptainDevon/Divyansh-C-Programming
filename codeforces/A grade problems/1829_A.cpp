#include<bits/stdc++.h>
using namespace std;
int main()
{
    string chk="codeforces";
    vector<int>v;
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>s;
        for(int i=0;i<10;i++)
        {
            if(s[i]!=chk[i])count++;
        }
        v.push_back(count);
    }
    for(auto it:v)
    {
        cout<<it<<endl;
    }
    return 0;
}