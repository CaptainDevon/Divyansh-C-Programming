#include <iostream>
using namespace std;
class solution
{
public:
    bool palindrome(int n)
    {
        long long origin = n;
        long long reverse = 0;
        if (n < 0)
        {
            return false;
        }
        while (n > 0)
        {
            int last = n % 10;
            reverse = (reverse * 10) + last;
            n /= 10;
        }
        if (reverse == origin)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    int number;
    cout << "number: ";
    cin >> number;
    solution s;
    cout << "result :" << s.palindrome(number);
    return 0;
}