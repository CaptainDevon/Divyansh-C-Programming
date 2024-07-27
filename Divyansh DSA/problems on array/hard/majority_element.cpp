#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        vector<int> result;
        int count = 0;
        int n = nums.size();
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[nums[i]]++;
        }
        for (auto it : mpp)
        {
            if (it.second > n / 3)
            {
                result.push_back(it.first);
            }
        }
        return result;
    }
};
int main()
{
    vector<int> a = {3,2,3};
    Solution s;
    vector<int>result=s.majorityElement(a);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}
