#include <iostream>
using namespace std;
class solution
{
    public:
    bool isSubset(int arr1[], int arr2[], int m, int n)
    {
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            if (arr2[i] == arr1[j])
                break;
        }
        if (j == m)
            return 0;
    }
    return 1;
    }
};
int main()
{
    int arr1[]={1,2,4,5,3};
    int arr2[]={1,2,5};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    solution s;
    cout<<s.isSubset(arr1,arr2,m,n);
    return 0;
}