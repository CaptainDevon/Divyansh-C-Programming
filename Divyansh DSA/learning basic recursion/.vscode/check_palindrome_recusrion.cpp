#include <iostream>
using namespace std;
class solution
{
public:
    bool is_palindrome(string &s)
    {
        int i = 0;
        int n = s.length() - 1;
        bool res=true;
        while (i < n)
        {
            if (s[i] != s[n-i])
            {
                res=false;
                break;
            }
            else
            {
                res=true;
                i++;
            }
            res=true;
        }
        return res;
    }
};
int main()
{
    string str;
    cout << "enter the string: ";
    cin >> str;
    solution s;
    cout<<s.is_palindrome(str);
    return 0;
}