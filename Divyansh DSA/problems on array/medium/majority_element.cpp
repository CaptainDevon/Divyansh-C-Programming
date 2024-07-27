#include <bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int majority_element(vector<int> v)
    {
        int n=v.size()-1;
        map<int,int>mpp;
        for(int i=0;i<v.size();i++)
        {
            mpp[v[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second>n/2)
            {
                return it.first;
            }
        }
    }
};
int main()
{
    vector<int>v={2,2,1,1,1,2,2};
    solution s;
    cout<<s.majority_element(v);
    return 0;
}