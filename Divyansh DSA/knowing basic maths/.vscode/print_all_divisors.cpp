#include <iostream>
using namespace std;
class solution
{
public:
    int print_divisors(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0 and i != 0)
            {
                cout << i << " ";
            }
        }
        return 0;
    }
};
int main()
{
    int number;
    cout << "enter the number: ";
    cin >> number;
    solution s;
    cout << s.print_divisors(number);
    return 0;
}