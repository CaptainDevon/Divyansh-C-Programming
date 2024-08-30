#include <bits/stdc++.h>
using namespace std;

class solution
{
    public:
    bool search_in_matrix(vector<vector<int>>&matrix,int x)
    {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==x) return true;
            }
        }
        return false;
    }
};

int main()
{
    vector<vector<int>>matrix={{3,30,38},
                               {36,43,60},
                               {40,51,60}};
    int x=62;
    solution s;
    cout<<s.search_in_matrix(matrix,x);
}
