#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    long long maxSubarraySum(vector<int> arr, int n)
    {
        long long maxi = LONG_MIN;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
           for(int j=i;j<n;j++)
           {
                sum+=arr[j];
                maxi=max(sum,maxi);
           }
           if(sum<0)
           {
            sum=0;
           }
        }
        return maxi;
    }
};
int main()
{
    vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
    int n=arr.size()-1;
    solution s;
    cout<<s.maxSubarraySum(arr,n);
    return 0;
}