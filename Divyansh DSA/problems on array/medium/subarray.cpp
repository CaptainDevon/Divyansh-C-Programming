#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
             int count=0,presum=0;

            unordered_map<int,int> mpp;

            mpp[0]=1;


                for(auto it:nums){


                presum+=it;

                int remove = presum-k;

                if(mpp.find(remove)!= mpp.end()){

                count+=mpp[remove];

                }

                mpp[presum]+=1;

            }

        return count;
    }
};
int main()
{
    vector<int>a={1,2,3};
    int k=3;
    Solution s;
    cout<<s.subarraySum(a,k);
    return 0;
}
