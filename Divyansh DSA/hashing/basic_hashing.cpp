#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //precompute
    int hash[100000]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    int q;
    cout<<"enter the number of queries: ";
    cin>>q;
    while(q--)
    {
        int number;
        cout<<"enter the number: ";
        cin>>number;
        cout<<"the number "<<number<<" has appear "<<hash[number]<<" times"<<endl;
    }
    return 0;
}