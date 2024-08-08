#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
     int f=1;
     int s=1;
     for(int i=2;i<n;i++)
     {
        s+=f;
        f=s;
     }
     return s;
    }
};
int main()
{
    int n=3;
    Solution s;
    cout<<s.climbStairs(n)+1;
    return 0;
}