#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    int upperBound(vector<int> &arr, int x){

   int start = 0;

   int end = arr.size() -1;

   int mid ;

   int ans= arr.size();

   while(start<=end)

   {

       mid = start + ( end - start)/ 2;

       if(arr[mid]> x)

       {

           ans=mid;

           end = mid - 1;

 

       }

       else

       {

           start = mid + 1;

       }

       

   }

   return ans;

}
};
int main()
{
    vector<int> arr={1,2,2,3,3,5};
    int k=2;
    Solution s;
    cout<<s.upperBound(arr,k);
    return 0;
}