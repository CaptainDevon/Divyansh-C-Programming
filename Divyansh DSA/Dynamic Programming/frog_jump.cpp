#include<bits/stdc++.h>
using namespace std;
class solution 
{
    public:
    int minEnergy(vector<int> &height,int n)
    {
        vector<int>dp(n,0);
        dp[0]=0;
        for(int i=1;i<n;i++)
        {
            int fs=dp[i-1]+abs(height[i]-height[i-1]);
            int ss=INT_MAX;
            if(i>1) ss=dp[i-2]+abs(height[i]-height[i-2]);
            dp[i]=min(fs,ss);
        }
        return dp[n-1];
    }
};
int main()
{
    int n=4;
    vector<int>height={10,20,30,10};
    solution s;
    cout<<s.minEnergy(height,n);
    return 0;
}