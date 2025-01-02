#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector<int> res;

    sort(ranked.begin(), ranked.end(), greater<int>());
    ranked.erase(unique(ranked.begin(), ranked.end()), ranked.end());

    for (int score : player) {
        
        auto it = lower_bound(ranked.begin(), ranked.end(), score, greater<int>());
        int rank = (it - ranked.begin()) + 1; 
        res.push_back(rank);
    }

    return res;
}
};

int main()
{
    int n,m;
    cin>>n;
    vector<int>ranked;
    vector<int>player;
    while(n--)
    {
        int x;
        cin>>x;
        ranked.push_back(x);
    }
    cin>>m;
    while(m--)
    {
        int y;
        cin>>y;
        player.push_back(y);
    }

    Solution s;
    vector<int>res=s.climbingLeaderboard(ranked,player);
    for(auto it:res)
    {
        cout<<it<<endl;
    }
    return 0;
}