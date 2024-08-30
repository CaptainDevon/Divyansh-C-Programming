#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int median(vector<vector<int>> &matrix, int R, int C)
    {
        int low = INT_MAX;
        int high = INT_MIN;
        for (int i = 0; i < R; i++)
        {
            low = min(low, matrix[i][0]);
            high = max(high, matrix[i][C - 1]);
        }
        int ans = high;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (countTotalElements(matrix, mid) < (R * C + 1) / 2)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
                ans = min(ans, mid);
            }
        }
        return ans;
    }
private:
    int countTotalElements(vector<vector<int>> &matrix, int x)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int totalCount = 0;
        for (int i = 0; i < rows; i++)
        {
            int low = 0;
            int high = cols - 1;
            int curr = 0;
            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (matrix[i][mid] <= x)
                {
                    curr = max(curr, mid + 1);
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            totalCount += curr;
        }
        return totalCount;
    }
};

int main()
{
    int r = 3, c = 3;
    vector<vector<int>> matrix ={{1,3,5},
                                 {2,6,9},
                                 {3,6,9}};

    Solution s;
    cout<<s.median(matrix,r,c);
    return 0;
}