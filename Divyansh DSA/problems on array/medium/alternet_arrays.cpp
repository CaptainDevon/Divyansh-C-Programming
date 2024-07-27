#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    vector<int> alternet_array(vector<int>&nums)
    {
        int n=nums.size();
        vector<int>result(n,0);
        int positive=0,negative=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                result[negative]=nums[i];
                negative+=2;
            }
            else
            {
                result[positive]=nums[i];
                positive+=2;
            }
        }
        return result;
    }

};
int main()
{
    vector<int> a={3,1,-2,-5,2,-4};
    solution s;
    vector<int>result=s.alternet_array(a);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}