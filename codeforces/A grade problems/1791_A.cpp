#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<string>ans;
    while(t--)
    {
        char c;
        cin>>c;
        if(c=='c' || c=='o' || c=='d' || c=='e' || c=='f' || c=='r' || c=='s')
        {
            ans.push_back("YES");
        }
        else ans.push_back("NO");
    }

    for(auto it:ans)
    {
        cout<<it<<endl;
    }
    return 0;
}