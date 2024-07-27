#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    vector<vector<int>> sumofmatrices(vector<vector<int>> &matrix1, vector<vector<int>> &matrix2)
    {
        vector<vector<int>> result;
        if (matrix1.size() == matrix2.size() && matrix1[0].size() == matrix2[0].size())
        {
            result.resize(matrix1.size(), vector<int>(matrix1[0].size()));
            for (int i = 0; i < matrix1.size(); i++)
            {
                for (int j = 0; j < matrix1[0].size(); j++)
                {
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                }
            }
        }
        return result;
    }
};

int main()
{
    vector<vector<int>> m1 = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    vector<vector<int>> m2 = {{9, 8, 7, 6}, {5, 4, 3, 2}};
    solution s;
    vector<vector<int>> result = s.sumofmatrices(m1, m2);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
