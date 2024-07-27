#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
class solution
{
public:
    vector<int> printnos(int x)
    {
        if (x == 0)
        {
            return v;
        }
        v.push_back(x);
        return printnos(x - 1);
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