/*
*
**
***
****
*****
******
*****
****
***
**
*





*/

#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int k = 4;
    while (i <= 5)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        i++;
    }
    while (i > 0)
    {
        for (int n = i; n > 0; n--)
        {
            cout << "*";
        }
        i--;
        cout << endl;
    }
    return 0;
}