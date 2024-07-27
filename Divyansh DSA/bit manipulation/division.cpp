#include<iostream>
using namespace std;
class solution
{
    public:
    long result(int dividend,int divisor)
    {   
        if(dividend==divisor)
        {
            return 1;
        }
        bool sign=true;
        if(dividend>=0 && divisor<0)sign =false;
        else if(dividend<=0 && divisor>0)sign=false;
        long n=abs(dividend);
        long d=abs(divisor);
        divisor=abs(divisor);
        long quotient=0;
        while(n>=d)
        {
            int count=0;
            while(n>=(d<<(count+1)))
            {
                count++;
            }
            quotient+=1<<count;
            n-=(d<<count);
        }
        if(quotient==1<<31)
        {
            return INT32_MAX;
        }
        if(quotient==(1<<31)&& !sign)
        {
            return INT32_MIN;
        }
        return sign?quotient:-quotient;
    }
};
int main()
{
    int dividend=25;
    int divisor=6;
    solution s;
    cout<<s.result(dividend,divisor);
    return 0;
}