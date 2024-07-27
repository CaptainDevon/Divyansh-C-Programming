#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int squared_root(int n)
    {
        for (int i = 0; i < 1000000000; i++)
        {
            if (i * i > n)
            {
                return i - 1;
                break;
            }
            else if (i * i == n)
            {
                return i;
            }
        }
    }
    int binary_search_square_root(int n)
    {
        int result=1;
        int low = 1, high = 100;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if((mid*mid)<=n)
            {
                result=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return result;
    }
};
int main()
{
    int number;
    cin >> number;
    solution s;
    //cout << s.squared_root(number) << endl;
    cout << s.binary_search_square_root(number);
    return 0;
}