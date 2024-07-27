#include<iostream>
using namespace std;
class solution
{
    public:
    int number_of_bits_to_be_flipped(int a,int b)
    {
        int result=a^b;
        int count=0;
        while(result>1)
        {
            if(result%2==1)count++;
            result/=2;
        }
        if(result==1)count++;
        return count;
    }
};
int main()
{
    int a=7;
    int b=12;
    solution s;
    cout<<s.number_of_bits_to_be_flipped(a,b);
}