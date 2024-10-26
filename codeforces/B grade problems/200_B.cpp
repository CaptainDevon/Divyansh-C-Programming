#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    double total=t;
    double solution=0;
    while(t--)
    {
        int x;
        cin>>x;
        solution+=x;
    }
     cout << fixed << setprecision(12) << solution / total << endl;
    return 0;
}