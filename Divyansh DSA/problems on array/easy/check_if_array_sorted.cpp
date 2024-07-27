#include <iostream>
#include <vector>
using namespace std;
class solution
{
    public:
    bool check_if_sorted(vector<int>&nums)
    {
        bool result=true;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>nums[i+1])
            {
                result=false;
            }
        }
        return result;
    }
};
int main()
{
    vector<int>a={1,2,3,4,5};
    vector<int>b={1,2,4,3,5};
    solution s;
    cout<<s.check_if_sorted(a)<<endl;
    cout<<s.check_if_sorted(b)<<endl;    
    
    return 0;
}