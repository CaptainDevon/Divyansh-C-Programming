#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int hurdleRace(int k,vector<int>&height)
    {
        int count=0;
        for(int i=0;i<height.size();i++)
        {
            if(height[i]>k && height[i]-k>count) count=height[i]-k;
        }
        return count;
    }
};

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>height;
    while(n--)
    {
        int x;
        cin>>x;
        height.push_back(x);
    }

    Solution s;
    cout<<s.hurdleRace(k,height)<<endl;
}