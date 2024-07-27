#include <bits/stdc++.h>
using namespace std;

int pairs()
{
    pair<int, int> p={1,2};
    cout<<p.first<<" "<<p.second<<endl; //output: 1 2
    pair<int,pair<int,int>> p1={1,{2,3}};
    cout<<p.first<<" "<<p1.second.first<<" "<<p1.second.second; //output: 1 2 3
    return 0;
}
int main()
{
    pairs();
    return 0;
}