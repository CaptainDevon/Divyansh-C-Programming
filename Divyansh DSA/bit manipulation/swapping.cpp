#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    void swap(int &a,int &b)
    {
        a=a^b;
        b=a^b;
        a=a^b;
        return;
    }
};
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    solution s;
    s.swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}