#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    vector<int> nextGreaterPermutation(vector<int> &a)
    {
        next_permutation(a.begin(), a.end());
        return a;
    }
    vector<int> nextGreaterPermutation_longest_prefix_match(vector<int> &a)
    {
        int ind = -1;
        int n = a.size();
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] < a[i + 1])
            {
                ind = i;
                break;
            }
        }
        if (ind == -1)
        {
            reverse(a.begin(), a.end());
        }
        for (int i = n - 1; i > ind; i--)
        {
            if (a[i] > a[ind])
            {
                swap(a[i], a[ind]);
                break;
            }
        }
        reverse(a.begin()+ind+1,a.end());
        return a;
    }
};
int main()
{
    vector<int> a = {1, 3, 2};
    solution s;
    vector<int> result = s.nextGreaterPermutation_longest_prefix_match(a);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout<<endl;
    vector<int> result1 = s.nextGreaterPermutation(a);
    for (int i = 0; i < result1.size(); i++)
    {
        cout << result1[i] << " ";
    }
    return 0;
}