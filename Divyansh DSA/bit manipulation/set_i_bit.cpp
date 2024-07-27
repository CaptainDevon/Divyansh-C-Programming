#include<iostream>
using namespace std;
class solution
{
    public:
    int set_i_bit(int n,int i)
    {
        return n|(1<<i);
    }
};
int main()
{
    int number=7;
    int i=4;
    solution s;
    cout<<s.set_i_bit(number,i);
    return 0;
}