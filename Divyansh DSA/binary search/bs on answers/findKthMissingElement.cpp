#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ind = 0, ans = 1, n = arr.size();
        int count = 0;
        while (count != k) {
            if ((ind < n && ans < arr[ind]) || ind >= n) count++;
            if (ind < n && ans == arr[ind]) ind++;
            ans++;
        }
        return ans-1;
    }
};

int main()
{
    vector<int> arr1={2,3,4,7,11};
    vector<int> arr2={1,2,3,4};
    int k1=5,k2=2;
    Solution s;
    int res1=s.findKthPositive(arr1,k1);
    int res2=s.findKthPositive(arr2,k2);
    cout<<res1<<" "<<res2;
    return 0;
}