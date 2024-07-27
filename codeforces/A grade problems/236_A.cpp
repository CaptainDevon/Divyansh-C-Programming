#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_set<char>set(s.begin(),s.end());
    if(set.size()%2==0){cout<<"CHAT WITH HER!";}
    else{cout<<"IGNORE HIM!";}
    return 0;
}