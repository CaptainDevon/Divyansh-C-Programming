#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int cosecutive_number_of_ones(vector<int>&nums)
    {
        int ctn = 0;
        int ans = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=1){
                ans = max(ans, ctn);
                ctn = 0;
            }
            else
                ctn++;
        }
        ans = max(ans, ctn);
        return ans;
    }
};
int main()
{
    vector<int>a={1,0,0,1,1,1,1,1,0,0,1,1,1,1,1,1,1};
    solution s;
    cout<<s.cosecutive_number_of_ones(a);
    return 0;
}