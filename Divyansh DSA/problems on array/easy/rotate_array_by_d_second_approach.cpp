#include <bits/stdc++.h>
#include <vector>
using namespace std;
class solution
{
public:
    void rotate(vector<int> &arr, int k)
    {
        k = k % arr.size();

        reverse(begin(arr), end(arr));
        reverse(begin(arr), begin(arr) + k);
        reverse(begin(arr) + k, end(arr));
    }
};
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    int k;
    cout << "enter number of times array has to be rotated: ";
    cin >> k;
    solution s;
    s.rotate(a, k);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}