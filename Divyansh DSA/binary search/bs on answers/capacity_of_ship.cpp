#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int function(vector<int> &nums, int capacity)
    {
        int day = 1, load = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (load + nums[i] > capacity)
            {
                day += 1;
                load = nums[i];
            }
            else
                load += nums[i];
        }
        return day;
    }
    int leastWeightCapacity(vector<int> &weights, int d)
    {
        int low = *max_element(weights.begin(),weights.end()), high = accumulate(weights.begin(),weights.end(),0);
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int days_required = function(weights, mid);
            if (days_required <= d)
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return low;
    }
};
int main()
{
    vector<int> a = {5, 4, 5, 2, 3, 4, 5, 6};
    int d = 5;
    solution s;
    cout << s.leastWeightCapacity(a, d);
    return 0;
}
