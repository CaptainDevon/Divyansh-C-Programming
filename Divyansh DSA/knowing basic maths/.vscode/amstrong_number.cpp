#include <iostream>
using namespace std;
class solution
{
public:
    bool amstrong(int n)
    {
        int origin = n;
        int sum = 0;
        if (n < 0)
        {
            return false;
        }
        while (n > 0)
        {
            int last = n % 10;
            sum += (last * last * last);
            n /= 10;
        }
        if (sum == origin)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    int number;
    cout << "enter a number: ";
    cin >> number;
    solution s;
    cout << s.amstrong(number);
    return 0;
}