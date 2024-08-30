#include <bits/stdc++.h>
using namespace std;
class solution
{
    public:
    vector<int> spiralMatrix(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0, left = 0, bottom = n - 1, right = m - 1;
        while (top <= bottom && left <= right)
        {
            for (int i = left; i <= right; i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bottom; i++)
            {
                ans.push_back(matrix[i][right]);
            }
            right--;
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
};
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12},
                                  {13, 14, 15, 16}};
    solution s;
    vector<int> res = s.spiralMatrix(matrix);
    for (auto it : res)
    {
        cout << it << " ";
    }
    return 0;
}