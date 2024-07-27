#include <iostream>
using namespace std;
class solution
{
    public:
    int largest_element(int arr[],int n)
    {
        int largest=arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>largest)
            {
                largest=arr[i];
            }
        }
        return largest;
    }
};  
int main()
{
    int a[]={1,5,3,-8,7,9,4,6};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"the given arry is: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    solution s;
    cout<<"the largest element in the array is: "<<s.largest_element(a,n);
}