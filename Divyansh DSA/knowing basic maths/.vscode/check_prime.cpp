#include <iostream>
#include <math.h>
using namespace std;
class solution
{
public:
    bool isPrime(int n)
    {
        // Write your code here.
        bool x = true;
        if (n == 1)
        {
            x = false;
        }
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                x = false;
                break;
            }
        }
        return x;
    }
};
int main()
{
    int number;
    cout << "choose the number: ";
    cin >> number;
    solution s;
    cout << s.isPrime(number);
    return 0;
}