#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>res;
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int fh=0,lh=0,i=3,j=3;
        reverse(s.begin(),s.end());
        int n=stoi(s);
        while(i--)
        {
            int digit=n%10;
            fh+=digit;
            n/=10;
        }
        while(j--)
        {
            int digit=n%10;
            lh+=digit;
            n/=10;
        }
        if(fh==lh)res.push_back("YES");
        else res.push_back("NO");
    }
    for(auto it:res)
    {
        cout<<it<<endl;
    }
    return 0;
}