#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
        int search(vector<int> &nums, int target)
        {
            int low = 0, high = nums.size() - 1;
            while (low <= high)
            {
                int mid = (low + high) / 2;
                if (target == nums[mid])
                {
                    return mid;
                }
                else if (target > nums[mid])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            return -1;
        }
};
int main()
{
    vector<int> nums={-1,0,3,5,9,12};
    int k=8;
    int l=9;
    Solution s;
    cout<<s.search(nums,k)<<endl;
    cout<<s.search(nums,l);

    return 0;
}