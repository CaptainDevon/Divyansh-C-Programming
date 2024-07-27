#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    bool if_possible(vector<int> &nums, int distance, int k)
    {
        int cows = 1, last = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] - last >= distance)
            {
                cows++;
                last = nums[i];
            }
        }
        if (cows >= k)
        {
            return true;
        }
        else
            return false;
    }
    int aggressiveCows(vector<int> &stalls, int k)
    {
        sort(stalls.begin(), stalls.end());
        int low = 0, high = *max_element(stalls.begin(), stalls.end());
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (if_possible(stalls, mid, k) == true)
            {
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return high;
    }
};
int main()
{
    vector<int> a = {0,3,4,7,10,9};
    int k=4;
    solution s;
    cout<<s.aggressiveCows(a,k);
    return 0;
}