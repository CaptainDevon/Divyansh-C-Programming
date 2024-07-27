#include <bits/stdc++.h>
#include <string>
using namespace std;
class solution
{
public:
    string ones_complement(string &s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                s[i]='0';
            }
            else
                s[i]='1';
        }
        return s;
    }
};
int main()
{
    string str = "1101";
    solution s;
    cout << s.ones_complement(str);
    return 0;
}