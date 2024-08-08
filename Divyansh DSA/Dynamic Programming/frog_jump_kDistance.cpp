#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
   int minimizeCost(vector<int>& arr, int& k) {
        // Code here
        int n=arr.size();
        vector<int> dp(k, 0);
        for(int j=1;j<n;j++)
        {
            int a=1e9+7;
            for(int i=1;i<k+1;i++)
            {
                if(j>=i)
                {
                    a=min(a, (dp[i-1]+abs(arr[j]-arr[j-i])));
                }
                else
                {
                    break;
                }
            }
            for(int i=k-1;i>0;i--)
            {
                dp[i]=dp[i-1];
            }
            dp[0]=a;
        }
        return dp[0];
    }
};

int main()
{
    int k=3;
    vector<int> arr={10,30,40,50,20};
    Solution s;
    cout<<s.minimizeCost(arr,k);
    return 0;
}