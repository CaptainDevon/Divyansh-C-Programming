/*   1
     12
     123
     1234
     12345   */
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=5)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        i++;
        cout<<endl;
    }
    return 0;
}