#include <bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int binarysearch(vector<int>& arr, int m)

{

    int start=0;

    int n=arr.size();

    int end=n-1;

    int mid=start+(end-start)/2;

    while(start<=end)

    {

        if(arr[mid]==m)

        {

            return mid;

        }

        else if(arr[mid]<m)

        {

            start=mid+1;

        }

        else

        {

            end=mid-1;

        }

         mid=start+(end-start)/2;

    }

    return mid;

 

}

 

int searchInsert(vector<int>& arr, int m)

{

    int search=binarysearch(arr,m);

}
};
int main()
{
    vector<int>a={1,2,4,7};
    int m=6;
    solution s;
    cout<<s.searchInsert(a,m);
    return 0;
}