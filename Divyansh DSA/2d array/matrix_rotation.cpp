#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int> >& mat)
{
    // Your code goes here
    int n=mat.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(mat[j][i],mat[n-1-j][i]);
        }
    }
}
int main()
{
    vector<vector<int>>matrix={{1,2,3},
                               {4,5,6},
                               {7,8,9}};

    rotate(matrix);
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}