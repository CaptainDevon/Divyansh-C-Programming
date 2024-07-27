#include <iostream>
using namespace std;
class solution
{
public:
    long reversed_number(int n)
    {
        long reverse = 0;
        while (n > 0)
        {
            int last_digit = n % 10;
            reverse = (reverse * 10) + last_digit;
            n /= 10;
        }
        return reverse;
    }
};
int main()
{
    int number;
    cout << "number: ";
    cin >> number;
    solution s;
    int result = s.reversed_number(number);
    cout << "reversed number: " << result;
    return 0;
}