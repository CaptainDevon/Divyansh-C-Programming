#include <bits/stdc++.h>
using namespace std;

int vector_pairs()
{
    //as we know that pairs can also be used as a datatype
    vector<pair<int,int>> pv;
    pv.push_back({1,2}); //in this function we must give the pairs in curly braces 
    pv.emplace_back(3,4); //it automatically assumes the pair as the element
    int n=sizeof(pv)/sizeof(pv[0]);
    for(int i=0;i<=n;i++)
    {
        cout<<pv[i].first<<" "<<pv[i].second<<endl;
    } 
    return 0;
}
int main()
{
    vector_pairs();
    return 0;
}