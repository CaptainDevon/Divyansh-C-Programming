#include <iostream>
#include <vector>
using namespace std;
class solution 
{
    public:
    int linear_search(vector<int>&nums,int key)
    {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==key)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    int key;
    vector<int> a={1,77,6,19,0,16,5};
    cout<<"enter the element to find: ";
    cin>>key;
    solution s;
    cout<<s.linear_search(a,key);

    return 0;
}