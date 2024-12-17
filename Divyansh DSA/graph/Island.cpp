#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int countDistinctislands(vector<vector<int>>&grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        set<vector<pair<int,int>>>s;
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!visited[i][j] && grid[i][j]==1)
                {
                    vector<pair<int,int>>vec;
                    dfs(i,j,visited,grid,vec,i,j);
                    s.insert(vec);
                }
            }
        }
        return s.size();
    }

    private:
    void dfs(int r,int c,vector<vector<bool>>&visited,vector<vector<int>>&grid,vector<pair<int,int>>&vec,int row0,int col0)
    {
        int n=grid.size();
        int m=grid[0].size();
        visited[r][c]=1;
        vec.push_back({r-row0,c-col0});

        int delRow[]={-1,0,1,0};
        int delCol[]={0,-1,0,1};

        for(int i=0;i<4;i++)
        {
            int nrow=r+delRow[i];
            int ncol=c+delCol[i];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !visited[nrow][ncol] && grid[nrow][ncol]==1)
            {
                dfs(nrow,ncol,visited,grid,vec,row0,col0);
            }
        }
    }
};


int main()
{
    vector<vector<int>> grid = {
    {1, 1, 0, 0, 0},
    {1, 1, 0, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 0, 1, 1}
    };

    Solution s;
    cout<<s.countDistinctislands(grid);
    return 0;
}
