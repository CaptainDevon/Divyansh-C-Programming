#include <iostream>
using namespace std;
class solution
{
public:
    int even_digit(int n)
    {
        int count = 0;
        int num = n;
        if (n == 0)
            return 1;
        while (n > 0)
        {
            int rem = n % 10;
            if ((rem != 0) && (num % rem == 0))
                count++;
            n /= 10;
        }
        return count;
    }
};
int main()
{
    int number;
    cout << "enter your number: ";
    cin >> number;
    solution s;
    int result = s.even_digit(number);
    cout << "the numberof even digits are: " << result;
    return 0;
}