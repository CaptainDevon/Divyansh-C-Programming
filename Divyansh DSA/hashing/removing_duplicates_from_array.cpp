#include<bits/stdc++.h>
using namespace std;
class solution 
{
    public:
    vector<int>remove_duplicates(vector<int>&arr,int n)
    {
        vector<int>result;
        n=arr.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]];
        }
        for(auto it:mpp)
        {
            result.push_back(it.first);
        }
        return result;
    }
};
int main()
{
    vector<int>a={1,2,2,2,3};
    int n=a.size();
    solution s;
    vector<int>result=s.remove_duplicates(a,n);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}