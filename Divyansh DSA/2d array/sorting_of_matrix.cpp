#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int>linear_arr;
        int k=0;
        for(int i=0;i<Mat.size();i++)
        {
            vector<int>row_vals;
            for(int j=0;j<Mat[i].size();j++)
            {
                linear_arr.push_back(Mat[i][j]);
            }
        }
        sort(linear_arr.begin(),linear_arr.end());
        
        
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                Mat[i][j]=linear_arr[k++];
            }
        }
        
        
        return Mat;
    }
};

int main()
{
    vector<vector<int>>matrix={{10,20,30,40},
                               {15,25,35,45},
                               {27,29,37,48},
                               {32,33,39,50}};
    int N=4;
    Solution s;
    matrix=s.sortedMatrix(N,matrix);
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}