#include <bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int kthSmallest(vector<vector<int>>&mat, int n, int k)
{
  //Your code here
  vector<int>a;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          a.push_back(mat[i][j]);
      }
  }
  sort(a.begin(),a.end());
  return a[k-1];
}
};
int main()
{
   int N=4,k=3;
   vector<vector<int>>mat={{16,28,60,64},
                           {22,41,63,91},
                           {27,40,87,93},
                           {36,78,87,94}};
    solution s;
    cout<<s.kthSmallest(mat,N,k);
}