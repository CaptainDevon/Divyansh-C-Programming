#include<iostream>
using namespace std;
class solution
{
    public:
    int clear_i_bit(int n,int i)
    {
        return ~n&(1<<i);
    }
};
int main()
{
    int number=8;
    int i=2;
    solution s;
    cout<<s.clear_i_bit(number,i);
    return 0;
}