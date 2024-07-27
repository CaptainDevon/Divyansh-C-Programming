#include <iostream>
using namespace std;
class solution
{
public:
    int gcd(int a, int b)
    {
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
        return divisor;
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
    cout << "the gcd of " << a << " and " << b << " is: " << s.gcd(a, b);
    return 0;
}