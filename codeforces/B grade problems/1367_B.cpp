#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> result;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int even_mismatch = 0;
        int odd_mismatch = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && arr[i] % 2 != 0)
            {
                even_mismatch++;
            }
            else if (i % 2 != 0 && arr[i] % 2 == 0)
            {
                odd_mismatch++;
            }
        }

        if (even_mismatch == odd_mismatch)
        {
            result.push_back(even_mismatch);
        }
        else
        {
            result.push_back(-1);
        }
    }

    for (auto it : result)
    {
        cout << it << endl;
    }

    return 0;
}
