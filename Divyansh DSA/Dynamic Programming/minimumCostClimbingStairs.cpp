#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int minimumCostClimbingStairs(vector<int>& cost)
    {
        if(cost.size()==1)return cost[0];
        if(cost.size()==2)return min(cost[0],cost[1]);

        vector<int>dp(cost.size()+1);
        dp[0]=cost[0];
        dp[1]=cost[1];
        int n=dp.size()-1;
        for(int i=2;i<=dp.size()-1;i++)
        {
            if(i == n) {
            dp[i] = min(dp[i-1], dp[i-2]); 
        } else {
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]); 
        }
        } 
        return dp[n];
    }
};

int main()
{
    vector<int>cost1={1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    vector<int>cost2={10, 15};
    Solution s;
    cout<<s.minimumCostClimbingStairs(cost1)<<endl;
    cout<<s.minimumCostClimbingStairs(cost2)<<endl;
    return 0;
}