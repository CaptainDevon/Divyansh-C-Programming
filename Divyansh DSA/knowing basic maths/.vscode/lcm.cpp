#include <iostream>
using namespace std;
class solution
{
public:
    int lcm(int a, int b)
    {
        int gcd;
        int dividend, divisor;
        if (a < b)
        {
            dividend = b;
            divisor = a;
        }
        else if (a >= b)
        {
            dividend = a;
            divisor = b;
        }
        while (dividend % divisor != 0)
        {
            int rem = dividend % divisor;
            dividend = divisor;
            divisor = rem;
        }
        gcd = divisor;
        int lcm = (a * b) / gcd;
        return lcm;
    }
};
int main()
{
    int a, b;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> b;
    solution s;
    cout << "the lcm of " << a << " and " << b << " is: " << s.lcm(a, b);
    return 0;
}