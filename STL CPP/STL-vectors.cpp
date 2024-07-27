#include <bits/stdc++.h>
using namespace std;
int vectors()
{
    /*purpose of the vectors over arrays:
        when the array is declared with a perticular size it is usually fixed for example we have 
        declared an array of size 5,hence we can only add 5 elements in an array.

        the vectors can dynamicallychange the size and fit how many elements as it wants 
        by using the function:
        1)v.push_back(value);
        2)v.emplace_back(value);
    */
    
    //declaration of a vector:
    //vector<datatype> variable_name;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.emplace_back(3);
    int n=sizeof(v)/sizeof(v[0]);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
    vector<int> v1(5); //this tells us that v={0,0,0,0,0}
    for(int i=0;i<5;i++)
    {
        cout<<v1[i]<<endl;
    }
    cout<<endl;
    vector<int> v2(5,100); //this tells v={100,100,100,100,100},v(no.of elements,value)
    for(int i=0;i<5;i++)
    {
        cout<<v2[i]<<endl;
    }
    cout<<endl;
    vector<int> v3(v2); //vector can have the vector as an argument
    for(int i=0;i<5;i++)
    {
        cout<<v3[i]<<endl;
    }
    return 0;
}
int main()
{
    vectors();
    return 0;
}