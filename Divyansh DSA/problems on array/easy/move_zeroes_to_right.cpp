#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    vector<int> movezeroez(vector<int>&nums)
    {
        vector<int>result;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            result.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};
int main()
{
    vector<int>a={0,1,0,3,12};
    solution s;
    vector<int>result=s.movezeroez(a);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}