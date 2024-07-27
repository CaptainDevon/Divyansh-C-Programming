#include <bits/stdc++.h>
using namespace std;
//this function if made to take the vector and display it [by making the vector as the function argument]
int vector_display(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}
int main()
{
    vector<int> my_vector={1,2,3,4,5};
    vector_display(my_vector);
    return 0;
}