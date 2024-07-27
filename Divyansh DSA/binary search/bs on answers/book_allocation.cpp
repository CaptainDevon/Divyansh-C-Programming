#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int functionable(vector<int> &nums, int pages)
    {
        int student = 1, pages_student = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (pages_student + nums[i] <= pages)
            {
                pages_student += nums[i];
            }
            else
            {
                student++;
                pages_student = nums[i];
            }
        }
        return student;
    }
    int findPages(vector<int> &arr, int n, int m)
    {
        if (m > n)
            return -1;
        int low = *max_element(arr.begin(), arr.end()), high = accumulate(arr.begin(), arr.end(), 0);
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int count = functionable(arr, mid);
            if (count > m)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
};
int main()
{
    vector<int> a = {12, 34, 67, 90};
    int n = a.size();
    int m = 2;
    solution s;
    cout << s.findPages(a, n, m);
    return 0;
}