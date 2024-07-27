#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="hello python";     //i am learning c++ why thi python is showing up lets replace it
    string str1="CPP";
    str.replace(6,6,str1);        //replace(initial_index,no_of_charecters_after_that_index,string_to_replace)

    //example 2

    string str2="Hello noob coder";//hey i am not a noob i am a pro 
    string str3="Pro";
    str2.replace(6,4,str3);

    cout<<str<<endl;
    cout<<str2; 
    return 0;
}