/* *
   **
   ***
   ****
   *****     */
#include<iostream>
using namespace std;
int main()
{
    int i=0;
    while(i<=5)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*"<<" ";
        }
        i++;
        cout<<endl;
    }
    return 0;
}