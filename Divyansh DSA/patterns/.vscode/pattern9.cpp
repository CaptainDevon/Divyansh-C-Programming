/*  
    *    
   ***   
  *****  
 ******* 
*********
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
    int k=1;
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
    while(k<=6)
    {
        for(int j=1;j<=11;j++)
        {
            if(j>k-1 && j<11-k)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        k++;
        cout<<endl;
    }
    return 0;
}