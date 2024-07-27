/*
****
*  *
*  *
****

*/
#include <iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=4)
    {
        if(i==1 || i==4)
        {
            for(int j=1;j<=4;j++)
            {
                cout<<"*";
            }
        }
        else
        {
            for(int j=1;j<=4;j++)
            {
                if(j==1 || j==4)
                {
                    cout<<"*";
                }
                else cout<<" ";
            }
        }
        cout<<endl;
        i++;
    }
    return 0;
}