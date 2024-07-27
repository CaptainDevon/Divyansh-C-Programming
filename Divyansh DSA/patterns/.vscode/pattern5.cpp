/*  *****
    ****
    ***
    **
    *          */
#include <iostream>
using namespace std;
int main()
{
    int i=5;
    while(i>0)
    {
        for(int j=i;j>0;j--)
        {
            cout<<"*";
        }
        i--;
        cout<<endl;
    }
} 