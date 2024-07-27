#include <iostream>
using namespace std;
class solution
{
    public:
    bool check_if_sorted(int arr[],int n)
    {
        int result=true;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>arr[i+1])
            {
                result=false;
                break;
            }
        }
        return result;
    }
};
int main()
{
    int a[]={0,0,0,0,1};
    int n=sizeof(a)/sizeof(a[0]);
    solution s;
    cout<<s.check_if_sorted(a,n);
    return 0;
}