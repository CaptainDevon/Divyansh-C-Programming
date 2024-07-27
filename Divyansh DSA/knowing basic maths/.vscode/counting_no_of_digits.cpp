#include <iostream>
using namespace std;
class solution
{
public:
    void digit_count(int n)
    {
        int count = 0;
        while (n > 0)
        {
            int last_digit = n % 10;
            count++;
            n = n / 10;
        }
        cout << "your number has " << count << " digits";
    }
};
int main()
{
    int number;
    cout << "enter your number: ";
    cin >> number;
    solution s;
    s.digit_count(number);
    return 0;
}