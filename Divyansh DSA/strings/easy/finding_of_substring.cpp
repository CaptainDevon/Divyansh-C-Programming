#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="hjadbjbjabd  ebfufbeufbizfjebfuefbef";
    size_t pos=str.find("bjb");                  //size_t returns the garbage value if the substring is not found
    int pos1=str.find("bjd");                    //as this has the data type of int hence if substring not found it returns -1
    cout<<pos<<" "<<pos1;                   //if exist the returns the starting index else returns tha garbage value 
    return 0;
}