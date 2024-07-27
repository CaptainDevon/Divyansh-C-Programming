#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int function(vector<int> &nums, int k)
    {
        int total = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            total += ceil((double)nums[i] / (double)k);
        }
        return total;
    }
    int minimumRateToEatBananas(vector<int> v, int h)
    {
        int result = 0;
        int low = 1, high = *max_element(v.begin(), v.end());
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int value = function(v, mid);
            if (value <= h)
            {
                result = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return result;
    }
};
int main()
{
    vector<int> a = {7, 15, 6, 3};
    int h = 8;
    solution s;
    cout << s.minimumRateToEatBananas(a, h);
    return 0;
}
