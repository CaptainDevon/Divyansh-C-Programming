#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int number_appearing_twice(vector<int> &arr)
    {
        int count = 0;
        map<int, int> mpp;
        for (int i = 0; i < arr.size(); i++)
        {
            mpp[arr[i]]++;
        }
        for (auto it : mpp)
        {
            if (it.first != 1 && it.second == 2)
            {
                count++;
            }
        }
        return count;
    }
   
    int singleNumber(vector<int>& nums) {
        
        int ans = nums[0];

        for(int i = 1 ; i < nums.size() ; i++){
            ans = ans ^ nums[i];
        }

        return ans;
    }
};
int main()
{
    vector<int> a = {1,1,2,3,3,4,4};
    solution s;
    cout<<s.number_appearing_twice(a)<<endl; 
    cout<<s.singleNumber(a);
    return 0;
}