#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>leaderBoard(n);
    int count=0;
    for(int i=0;i<leaderBoard.size();i++)
    {
        cin>>leaderBoard[i];
    }
    for(int i=0;i<leaderBoard.size();i++)
    {
        if(leaderBoard[i]>=leaderBoard[k-1] && leaderBoard[i]!=0)count++;
    }
    cout<<count<<endl;
    return 0;
}