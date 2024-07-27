#include<bits/stdc++.h>
using namespace std;
class solution
{
    private:
    vector<vector<bool>> board;
    public:
    int totalNqueens(int n)
    {
        board=vector<vector<bool>>(n,vector<bool>(n,false));  //this is how we initialize the vector 
        return countpos(0,n);
    }
    int countpos(int row,int n)
    {
        int count=0;
        if(row==n)return 1;
        for(int col=0;col<n;col++)
        {
            if(isSafeToPlaceQueen(row,col,n))
            {
                board[row][col]=true;
                count+=countpos(row+1,n);
                board[row][col]=false;
            }
        }
        return count;
    }

    bool isSafeToPlaceQueen(int row,int col,int n)
    {
        for(int i=row;i>=0;--i)
        {
            if(board[i][col])return false;
        }
        for(int i=row,j=col;i>=0 && j<n;--i,++j)
        {
            if(board[i][j]) return false;
        }
        for(int i=row,j=col;i>=0 && j>=0;--i,--j)
        {
            if(board[i][j]) return false;
        }
        return true;
    }
};

int main()
{
    int n=2;
    solution s;
    cout<<s.totalNqueens(n);
    return 0;
}