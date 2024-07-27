#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    bool power_of_two(int n)
    {
        bool x;
        x=n& n-1;
        if(x==0)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    int number=4;
    int value=7;
    solution s;
    cout<<s.power_of_two(number)<<endl;
    cout<<s.power_of_two(value)<<endl;
    return 0;
}