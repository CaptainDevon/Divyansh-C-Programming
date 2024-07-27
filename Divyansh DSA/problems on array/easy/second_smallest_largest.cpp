#include <bits/stdc++.h>
using namespace std;
class solution
{
    public:
    vector<int> second_smallest_largest(vector<int>&nums)
    {
        vector<int> result;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        result.push_back(nums[n-2]);
        result.push_back(nums[1]);
        return result;
    }
};
int main()
{
    vector<int>a={1,2,3,4,5};
    solution s;
    vector<int>result=s.second_smallest_largest(a);
    for(int i=0;i<2;i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}