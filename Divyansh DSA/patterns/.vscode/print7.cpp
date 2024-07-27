/*   *    
    ***
   *****
  *******
 ********* */


#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=5)
    {
        for(int j=1;j<=9;j++)
        {
            if(j>=5-i+1 && j<=5+i-1)
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