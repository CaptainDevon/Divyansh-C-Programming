#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>result;
    string check="YES";
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),::toupper);
        if(s==check){result.push_back("YES");}
        else{result.push_back("NO");}
    }
    for(auto it:result)
    {
        cout<<it<<endl;
    }
    return 0;
}