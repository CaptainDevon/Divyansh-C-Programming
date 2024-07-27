#include <bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int longestSuccessiveElements(vector<int>&a) 

{

 

    sort(a.begin(),a.end());

    int cnt = 0 ;

    int pre = a[0];

    int pc=1;

    int n=a.size();

    for(int i=1;i<n;i++)

    {

        if(a[i]==pre) continue;

        if(a[i]==pre+1) pc++;

        else pc=1;

        cnt=max(cnt,pc);

        pre=a[i];

    }

    return cnt;

 

}
    
} ;
int main()
{
    vector<int> a = {15, 6, 2, 1, 16, 4, 2, 29, 9, 12, 8, 5, 14, 21, 8, 12, 17, 16, 6, 26, 3};
    solution s;
    cout << s.longestSuccessiveElements(a);
    return 0;
}