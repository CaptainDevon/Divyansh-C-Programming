#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v;
    v=
    {   
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };

    int number_of_rows=v.size();
    int number_of_columns=v[0].size();
    for (int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[0].size();j++)
        {
            cout<<" "<<v[i][j];
        }
        cout<<endl;
    }
    cout<<"number of rows = "<<number_of_rows<<endl;
    cout<<"number of columns = "<<number_of_columns<<endl;
    return 0;
}