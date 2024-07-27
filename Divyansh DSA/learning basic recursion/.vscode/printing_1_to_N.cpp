#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    vector<int> printnos(int x)
    {
        if (x == 1)
        {
            return {1};
        }
        else
        {
            vector<int> v = printnos(x - 1);
            v.push_back(x);
            return v;
        }
    }
};
int main()
{
    int number;
    cout << "enter the number: ";
    cin >> number;
    solution s;
    vector<int> result = s.printnos(number);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}