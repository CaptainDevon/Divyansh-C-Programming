#include <iostream>
using namespace std;
class solution
{
public:
    int factorial(int n)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }
        else
        {
            return n * factorial(n - 1);
        }
    }
};

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    solution s;
    int fact = s.factorial(num);
    cout << "Factorial of " << num << " is: " << fact << endl;

    return 0;
}