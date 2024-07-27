/*     1
       22
       333
       4444
       55555    */
#include <iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=5)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        i++;
        cout<<endl;
    }
    return 0;
}