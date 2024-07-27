/*
1
01
101
0101
10101



*/
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=5)
    {
        for(int j=0;j<i;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    cout<<0;
                }
                else cout<<1;
            }
            else if(i%2!=0)
            {
                if(j%2==0)
                {
                    cout<<1;
                }
                else cout<<0;
            }
        }
        cout<<endl;
        i++;
    }
    return 0;
}