#include <bits/stdc++.h>
using namespace std;
/*note:
if you remove the "&" before v in the vector_manipulation() function, the function will not be able to modify the elements of the vector. 
This is because the vector class is passed by value to the function, which means that a copy of the vector is made. 
The vector_manipulation() function can only modify the elements of the copy, not the original vector.*/

int vector_manipulation(vector<int>& v)   //this function will increase the value of every element in the vector by 5
{
    for(int i=0;i<v.size();i++)
    {
         v[i]+=5;
    }
    return 0;
}

int main()
{
    vector<int> v={1,2,3,4,5};
    cout<<"vectore before manipulation:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    vector_manipulation(v);
    cout<<"vector after manipulation:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}