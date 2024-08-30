#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int rowWithMax1s(vector<vector<int>> &arr)
    {
        // code here
        int res = 0;
        int prev_count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < arr[i].size(); j++)
            {
                if (arr[i][j] == 1)
                    count++;
            }
            if (count > prev_count)
            {
                prev_count = count;
                res = i;
            }
        }
        if (prev_count == 0)
            return -1;
        return res;
    }
};

int main()
{
    vector<vector<int>> arr = {{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};
    solution s;
    cout << s.rowWithMax1s(arr);
    return 0;
}