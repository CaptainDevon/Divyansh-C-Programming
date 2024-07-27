#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    vector<int> reverseArray(int n, vector<int> &nums)

    {

        static int i = -1;

        if (i >= (n - 1))
        return nums;
        swap(nums[n - 1], nums[++i]);
        reverseArray(n - 1, nums);
        return nums;
    }
};
int main()
{
    vector<int> a={1,2,3,4,5};
    solution s;
    int n=a.size();
    s.reverseArray(n,a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}