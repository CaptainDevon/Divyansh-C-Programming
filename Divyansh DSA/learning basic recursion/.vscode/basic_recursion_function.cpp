#include <iostream>
using namespace std;
int count = 0;
class solution
{
public:
    int recursion(int n)
    {
        while (count <= n)
        {
            cout << count << " ";
            count++;
            recursion(n);
        }
    }
};
int main()
{
    int number;
    cout << "enter the number:";
    cin >> number;
    solution s;
    cout << s.recursion(number);
    return 0;
}
