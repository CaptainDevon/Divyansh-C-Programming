#include <iostream>
using namespace std;
class solution
{
public:
    void exctraction_of_digits(int n)
    {
        while (n > 0)
        {
            int last_digit = n % 10;
            cout << last_digit << " ";
            n = n / 10;
        }
    }
};
int main()
{
    int number;
    cout << "select your number";
    cin >> number;
    cout << "the number contains the following digits" << endl;
    solution s;
    s.exctraction_of_digits(number);
    return 0;
}