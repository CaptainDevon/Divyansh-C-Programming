#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    bool ith_bit__set(int n,int k)
    {
        if((n>>k)&1==0)return false;
        else return true;
    }
};
int main()
{
    int n=13;
    int k=2;
    solution s;
    cout<<s.ith_bit__set(n,k);

    return 0;
}