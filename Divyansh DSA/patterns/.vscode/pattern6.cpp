/*       12345
         1234
         123
         12
         1         */
#include<iostream>
using namespace std;
int main()
{
    int i=5;
    while(i>0)
    {
        for(int j=i;j>0;j--)
        {
            cout<<i-j+1;
        }
        i--;
        cout<<endl;
    }
    return 0;
}