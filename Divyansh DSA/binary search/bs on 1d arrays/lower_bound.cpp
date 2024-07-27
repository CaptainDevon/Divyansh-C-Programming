#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    int lowerBound(vector<int> &arr,int x) {
	// Write your code here
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]>=x)
		{
			return i;
			break;
		}
	}
	return arr.size();
}
};
int main()
{
    vector<int> arr={1,2,2,3,3,5};
    int k=2;
    Solution s;
    cout<<s.lowerBound(arr,k);
    return 0;
}