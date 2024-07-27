#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int t;
    cin>>t;
    while(t--)
    {
        int val_chk;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[a[i]]++; 
        }
        for(auto it:mpp)
        {
            if(it.second==1)
            {
                val_chk=it.first;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==val_chk)
            {
                v.push_back(i+1);
            }
        }
    }
    for(auto id:v)
    {   
        cout<<id<<endl;
    }
    return 0;
}