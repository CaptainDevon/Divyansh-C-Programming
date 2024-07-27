#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int smallestDivisor(vector<int> &arr, int limit)

    {

        // Write your code here.

        int l = 1, r = *max_element(arr.begin(), arr.end());

        int ans = INT_MAX;

        while (l <= r)
        {

            int m = (l + r) / 2;

            int s = 0;

            for (int i = 0; i < arr.size(); i++)
            {

                s += ceil((double)arr[i] / m);
            }

            if (s <= limit)
            {

                // cout<<m<<" "<<s<<" ";

                ans = min(ans, m);

                r = m - 1;
            }
            else

                l = m + 1;
        }

        return ans;
    }
};
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    int limit = 8;
    solution s;
    cout << s.smallestDivisor(a, limit);
    return 0;
}