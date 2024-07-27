#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int longestSubarrayWithSumK(vector<int> a, long long k)
    {

        int maxi = 0;

        int i = 0;

        int j = 0;

        long long sum = 0;

        int n = a.size();

        while (j < n)
        {

            sum += a[j];

            if (sum < k)
            {

                j++;
            }

            else if (sum == k)
            {

                maxi = max(maxi, j - i + 1);

                j++;
            }

            else
            {

                while (sum > k)
                {

                    sum -= a[i];

                    i++;
                }

                if (sum == k)
                {

                    maxi = max(maxi, j - i + 1);
                }

                j++;
            }
        }

        return maxi;
    }
};
int main()
{
    vector<int> a = {1, 2, 3, 1, 1, 1, 1};
    int k = 3;
    solution s;
    cout<<s.longestSubarrayWithSumK(a,k);
    return 0;
}