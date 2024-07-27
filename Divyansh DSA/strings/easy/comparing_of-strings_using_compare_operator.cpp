#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1 = "Hello";
    string str2 = "World";

    int result = str1.compare(str2);

    if (result == 0)
    {
        cout << "str1 is equal to str2" << endl;
    }
    else if (result < 0)
    {
        cout << "str1 is less than str2" << endl;
    }
    else
    {
        cout << "str1 is greater than str2" << endl;
    }

    return 0;
}