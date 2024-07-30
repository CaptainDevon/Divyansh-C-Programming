#include <bits/stdc++.h>
using namespace std;
int fib(int n, vector<int> &dp)
{
    if(n<=1)return n;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=fib(n-1,dp)+fib(n-2,dp);
}

int fib2(int n,vector<int>&dp)
{
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int fib3(int n)
{
    int f=0;
    int s=1;
    for(int i=2;i<n;i++)
    {
        s+=f;
        f=s;
    }
    return s;
}
int main()
{
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<fib(n,dp)<<endl;
    cout<<fib2(n,dp)<<endl;
    cout<<fib3(n)<<endl;
    return 0;
}