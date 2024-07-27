#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    vector<string> print(int x)
    {
        if (x == 1)
        {
            return {"divyansh sinha"};
        }
        else
        {
            vector<string> v = print(x - 1);
            v.push_back("divyansh sinha");
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
    vector<string> result = s.print(number);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}