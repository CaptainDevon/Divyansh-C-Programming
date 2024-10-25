#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>result;
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>arr;
        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);
        sort(arr.begin(),arr.end());
        result.push_back(arr[1]);
    }
    for(auto it:result)
    {
        cout<<it<<endl;
    }
    return 0;
}