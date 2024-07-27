#include <bits/stdc++.h>
using namespace std;
int array_pair()
{
    //this program is to illustrate that the pair can also be used as the datatype 
    pair<int,int> array[]={{1,2},{3,4},{4,5},{5,6}};
    //second index of the array '{4,5}' and its second part that is 5
    cout<<array[2].second; //output 5
    return 0;
}
int main()
{
    array_pair();
    return 0;
}