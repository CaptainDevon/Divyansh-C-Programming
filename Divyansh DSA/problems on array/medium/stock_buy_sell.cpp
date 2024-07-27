#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
int maximumProfit(vector<int> &prices){
    // Write your code here.
     int mini = prices[0];

    int maxprofit  = 0;

    for(int i=0; i<prices.size(); i++){

        int cost = prices[i] - mini;

        maxprofit = max(maxprofit,cost);

        mini = min(mini,prices[i]);

        

    }

    return maxprofit;

}
};
int main()
{
    vector<int>prices={7,1,5,2,3,6};
    solution s;
    cout<<s.maximumProfit(prices);
    return 0;
}