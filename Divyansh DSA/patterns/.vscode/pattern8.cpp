/*         
        *********  
         *******
          *****
           ***
            *
*/
#include <iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=6)
    {
        for(int j=1;j<=11;j++)
        {
            if(j>i-1 && j<11-i)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        i++;
        cout<<endl;
    }
    return 0;
}