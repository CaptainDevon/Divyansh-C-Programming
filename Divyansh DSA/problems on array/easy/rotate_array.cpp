#include<iostream>
#include<vector>
using namespace std;
class solution 
{
    public:
    vector<int>rotated_array(vector<int>&nums)
    {
        int n=nums.size();
        int temp=nums[n-1];
        for(int i=0;i<n;i++)
        {
            nums[n-i]=nums[n-i-1];
        }
        nums[0]=temp;
        return nums;
    }
};
int main()
{
    vector<int> a={1,2,3,4,5};
    solution s;
    s.rotated_array(a);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}